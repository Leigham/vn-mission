#include "..\..\script_macros.hpp"
/*
	File: fn_delBox.sqf
	Author: Jason_000
	
	Description: Delete AirDrop
*/
params [
        ["_container",objNull,[objNull]]
];

[[1,2],"STR_ISTR_airDrop_Cop_1",true,[]] remoteExecCall ["life_fnc_broadcast",west];

hint "You have 90 seconds and the box will self destruct!";

sleep 90;

deleteVehicle _container;
deleteMarker "airDropArea";
deleteMarker "airDropName";

sleep 10;

[] spawn TON_fnc_airDropInit;

