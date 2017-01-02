#include "..\..\script_macros.hpp"
/*
Author : LEGA

*/
_allButThatGuy =  playableUnits select {side _x isEqualTo civilian};
_allButThatGuy  = _allButThatGuy - [player];
[[1,2],"STR_ISTR_ranTank_Civ_1",true,[]] remoteExeccall ["life_fnc_broadcast", _allButThatGuy];
//[[1,2],"STR_ISTR_ranTank_Civ_1",true,[]] remoteExecCall ["life_fnc_broadcast",RCLIENT];

_box = cursorTarget;

_upp = "Hacking Tank Security";

//Setup our progress bar.

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

while{true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 0.27;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(player != vehicle player) exitWith {};
	if(life_interrupted) exitWith {};
};

5 cutText ["","PLAIN"];
player playActionNow "stop";
[_box,0] remoteExecCall ["life_fnc_lockVehicle",_box];
//_box setVehicleLock "UNLOCKED";
[ranTankName,ranTankArea] remoteExec ["Lega_Fnc_GoFuckYourselfMarker",2];

sleep 10;

[] spawn Lega_fnc_ranTankInit;
