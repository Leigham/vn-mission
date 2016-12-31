//fn_vnonplayerkilled.sqf
//author Lega.
params ["_unit","_killer","_unitName","_killerName"];

//private _unitName = name _unit;
private _thisPlayerUID = getPlayerUID player;

//private _killerName = Name _killer;
private _killerUID = getPlayerUID _killer;

_unit setVariable ["vnHasBounty",false,true];
private _index = [_thisPlayerUID, vn_bountyarrayfordialog] call TON_fnc_index;

if !(_index isEqualTo -1) then {
	
    (vn_bountyarrayfordialog select _index) params ["_vnPuid","_vnName","_vnAmount","_vnPlacedBy"];
	
	
    diag_log format ["Found the Matching Variables %1 -- %2 -- %3 -- %4",_vnPuid,_vnName,_vnAmount,_vnPlacedBy];
	diag_log format ["[VN BOUNTY CLIENT:] ::: %1 Claimed the bounty of %2  on %3, %4 has been notified", _killerName,_vnAmount,_unitName,_vnPlacedBy];


	[_unitname,_killerName,_unit,_killer,_vnAmount,_vnPlacedBy] remoteExecCall ["legac_fnc_vnBountyClaimed",_killer];
	[_vnPuid] remoteExecCall ["Lega_fnc_deleteBounty",2];
};

