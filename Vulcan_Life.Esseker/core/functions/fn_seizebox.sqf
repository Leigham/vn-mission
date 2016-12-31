#include "..\..\script_macros.hpp"
/*
	File: fn_seizeBox.sqf
	Author: Jason_000
	
	Description: Seize AirDrop
*/
if (playerSide != west) exitWith {};

[[1,2],"STR_ISTR_airDrop_Civ_1",true,[]] remoteExecCall ["life_fnc_broadcast",RCLIENT];

_box = cursorTarget;

_upp = "Seizing airdrop";
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

deleteVehicle _box;
deleteMarker "airDropArea";
deleteMarker "airDropName";

sleep 10;

[] spawn TON_fnc_airDropInit;