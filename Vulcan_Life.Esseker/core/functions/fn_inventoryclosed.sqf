#include "..\..\script_macros.hpp"
/*
    File: fn_inventoryClosed.sqf
    Author: Bryan "Tonic" Boardwine
    Modified : NiiRoZz

    Description:
    1 : Used for syncing house container data but when the inventory menu
    is closed a sync request is sent off to the server.
    2 : Used for syncing vehicle inventory when save vehicle gear are activated
*/
private "_container";
_container = param [1,objNull,[objNull]];
if (isNull _container) exitWith {diag_log "Inventory Close but Exited ?? ";}; //MEH

if ((typeOf _container) in ["Box_IND_Grenades_F","B_supplyCrate_F"]) exitWith {
    if (life_HC_isActive) then {
        [_container] remoteExecCall ["HC_fnc_updateHouseContainers",HC_Life];
    } else {
        [_container] remoteExecCall ["TON_fnc_updateHouseContainers",RSERV];
    };
};

if (LIFE_SETTINGS(getNumber,"save_vehicle_inventory") isEqualTo 1) then {
    if ((_container isKindOf "Car") || (_container isKindOf "Air") || (_container isKindOf "Ship")) then {
        if (life_HC_isActive) then {
            [_container,1] remoteExecCall ["HC_fnc_vehicleUpdate",HC_Life];
        } else {
            [_container,1] remoteExecCall ["TON_fnc_vehicleUpdate",RSERV];
        };
    };
};
_customBuildables = [
"Barrel4",
"acd_C_CargoNet_01_box_F"
];
if(_container in _customBuildables)then{
diag_log format ["%1",_container];
if (_container getVariable  ["Lega_BuildingSystemItem",true]) then{
diag_log "UPDATING CONTAINER";
[_container] remoteExecCall ["Lega_fnc_UpdateCustomBuildables",RSERV];
};
};
[] call SOCK_fnc_updateRequest;