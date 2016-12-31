#include "..\..\script_macros.hpp"
/*
    File : fn_placestorage.sqf
    Author: NiiRoZz
    Description:
    PLace container were player select with preview
*/
private ["_container","_isFloating","_object"];

if (!life_container_active) exitWith {};
if (life_container_activeObj == objNull) exitWith {};
if (!((typeOf life_container_activeObj) in ["B_supplyCrate_F","Box_IND_Grenades_F","Land_TentA_F","Land_Wired_Fence_8m_F","Land_Wall_Tin_4","Land_BagFence_Short_F","Campfire_burning_F","Land_Slum_House02_F","Land_PortableLight_double_F","CargoNet_01_box_F"])) exitWith {};

_container = life_container_activeObj;
detach _container;
[_container,true] remoteExecCall ["life_fnc_simDisable",RANY];

if (typeOf life_container_activeObj == "Land_TentA_F") then {

_object = "Box_EAST_Grenades_F" createVehicle [0,0,0];

_container setPosATL [getPosATL _container select 0, getPosATL _container select 1, (getPosATL _container select 2) + 0];
_container allowDamage false;
_object setPosATL [getPosATL _container select 0, getPosATL _container select 1, (getPosATL _container select 2) + 0];
_object allowDamage false;

} else {

if (typeOf life_container_activeObj == "Land_Wall_Tin_4") then {
_container setPosATL [getPosATL _container select 0, getPosATL _container select 1, (getPosATL _container select 2) - 0.5];
} else {
_container setPosATL [getPosATL _container select 0, getPosATL _container select 1, (getPosATL _container select 2) + 0];
};
_container allowDamage false;

};

if (isNull _object) then {hint "something went wrong 1"; };
[_container, _object] call life_fnc_addTent;

life_tent_active = false;
life_container_activeObj = ObjNull;