#include "..\..\script_macros.hpp"
/*
    File : fn_placestorage.sqf
    Author: NiiRoZz
    Description:
    PLace container were player select with preview
*/
private ["_container","_isFloating"];

if (!life_container_active) exitWith {};
if (life_container_activeObj == objNull) exitWith {};
if (!((typeOf life_container_activeObj) in ["Land_CampingChair_V2_F"])) exitWith {};

_container = life_container_activeObj;
detach _container;
[_container,true] remoteExecCall ["life_fnc_simDisable",RANY];

_container setPosATL [getPosATL _container select 0, getPosATL _container select 1, (getPosATL _container select 2) + 0];
_container allowDamage false;


[_container, _object] call life_fnc_addChair;
life_tent_active = false;
life_container_activeObj = ObjNull;