#include "..\..\script_macros.hpp"
/*
    File: fn_placeContainer.sqf
    Author: NiiRoZz
    Credits: BoGuu
 
    Description:
    Check container if are in house and if house are owner of player and if all this conditions are true add container in database
*/
private ["_container","_object","_type","_house","_containers","_houseCfg","_message","_isPlaced"];
/*
params [
        ["_container",objNull,[objNull]],
		["_object",objNull,[objNull]]	
];
*/
_container = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_object = [_this,1,objNull,[objNull]] call BIS_fnc_param;

sleep 5;

if (isNull _object) then {hint "something went wrong 2"; };
 
_uid = getPlayerUID player;
 
switch (true) do {
    case (typeOf _container isEqualTo "Land_TentA_F"): {_type = "tentsmall"};
	case (typeOf _container isEqualTo "Land_Wired_Fence_8m_F"): {_type = "wireFence"};
	case (typeOf _container isEqualTo "Land_Wall_Tin_4"): {_type = "wall"};
	case (typeOf _container isEqualTo "Land_BagFence_Short_F"): {_type = "sandbag"};
	case (typeOf _container isEqualTo "Campfire_burning_F"): {_type = "campfire"};
	case (typeOf _container isEqualTo "Land_Slum_House02_F"): {_type = "slums"};
	case (typeOf _container isEqualTo "Land_PortableLight_double_F"): {_type = "light"};
	case (typeOf _container isEqualTo "CargoNet_01_box_F"): {_type = "cargo"};
    default {_type = ""};
};
 
_message = 0;
_isPlaced = false;
 

_isPlaced = true;
if (life_HC_isActive) then {
	[_uid,_container] remoteExec ["HC_fnc_addContainer",HC_Life];
} else {
		[false,_type,1] call life_fnc_handleInv;
		[_uid,_container] remoteExec ["TON_fnc_addContainer",RSERV];
		//if (isNull _object) then {hint "something went wrong"; };
		[_uid,_object] remoteExec ["TON_fnc_addContainer",RSERV];
};
_container setVariable ["Trunk",[[],0],true];
_container setVariable ["container_owner",[_uid],true];
_containers pushBack _container;
sleep 1;

 
if (_isPlaced) exitWith {};
 
deleteVehicle _container;
deleteVehicle _object;

[true,_type,1] call life_fnc_handleInv;
