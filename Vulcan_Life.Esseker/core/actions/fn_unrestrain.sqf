#include "..\..\script_macros.hpp"
/*
    File: fn_unrestrain.sqf
    Author:

    Description:

*/
private ["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit || !(_unit getVariable ["restrained",false])) exitWith {}; //Error check?
_Exitfile = false;
//Civ Restraint Check
if(playerside isEqualTo civilian)then{
  if(_unit getVariable ["restrainedbyciv",true])then{//If the player is a civ, and cursorTarget is Restrained by civ, then unrestrain.
_unit setVariable ["restrained",false,true];
_unit setVariable ["Escorting",false,true];
_unit setVariable ["transporting",false,true];
_unit setVariable ["restrainedbyciv",false,true];
detach _unit;
}else{
  if(_unit getVariable ["restrainedbycop",true])exitwith{
    hint "You can not Un-Restrain someone who is restrained by the UN.";
    _Exitfile = true;
  };
  if(_unit getVariable ["restrainedbyMedic",true])exitwith{
    hint "You can not Un-Restrain someone who is restrained by a Medic.";
    _Exitfile = true;
  };
};
};
//Medic Restraint Check
if (playerSide isEqualTo independent)then{
  if(_unit getVariable ["RestrainedbyMedic",true])then{//if the plater is a medic, and the cursorTarget has been restrained by a medic , then release. 

  _unit setVariable ["restrained",false,true];
  _unit setVariable ["Escorting",false,true];
  _unit setVariable ["transporting",false,true];
  _unit setVariable ["restrainedbycmedic",false,true];
}else{
  if(_unit getVariable ["restrainedbyciv",true])then{
    _unit setVariable ["restrained",false,true];
    _unit setVariable ["Escorting",false,true];
    _unit setVariable ["transporting",false,true];
    _unit setVariable ["restrainedbyciv",false,true];
  };
  if(_unit getVariable ["restrainedbycop",true])exitwith{
    hint "You can not Un-Restrain someone who is restrained by the UN.";
    _Exitfile = true;
  };
};
};
//Cop Restraint. 

if(playerSide isEqualTo West)then{
  _unit setVariable ["restrained",false,true];
  _unit setVariable ["Escorting",false,true];
  _unit setVariable ["transporting",false,true];
  _unit setVariable ["restrainedbyciv",false,true];
  _unit setVariable ["restrainedbyMedic",false,true];
  _unit setVariable ["restrainedbycop",false,true];
};




if(_ExitFile)exitwith{};
//[0,"STR_NOTF_Unrestrain",true,[_unit getVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];