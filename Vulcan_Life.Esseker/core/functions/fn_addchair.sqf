#include "..\..\script_macros.hpp"
/*
    File: fn_placeContainer.sqf
    Author: NiiRoZz
    Credits: BoGuu
 
    Description:
    Check container if are in house and if house are owner of player and if all this conditions are true add container in database
*/
private ["_container","_object","_type","_house","_containers","_houseCfg","_message","_isPlaced"];
params [
        ["_container",objNull,[objNull]],
		["_object",objNull,[objNull]]
];
 
_uid = getPlayerUID player;
 
switch (true) do {
    case (typeOf _container isEqualTo "Land_CampingChair_V2_F"): {_type = "chair"};
    default {_type = ""};
};
 
_message = 0;
_isPlaced = false;
 

_isPlaced = true;

_chair = _container addAction ["<t color='#0099FF'>Sit Down</t>","core\functions\sitdown.sqf"];
_chair1 = _container addAction ["<t color='#0099FF'>Packup Chair</t>",life_fnc_removeChair];

[false,_type,1] call life_fnc_handleInv;

_container setVariable ["Trunk",[[],0],true];
_container setVariable ["container_owner",[_uid],true];
_containers pushBack _container;
sleep 1;

 
if (_isPlaced) exitWith {};
 
deleteVehicle _container;
deleteVehicle _object;
_container removeAction _chair;
_container removeAction _chair1;

[true,_type,1] call life_fnc_handleInv;
