disableSerialization;
hint "function starting";
private _display = findDisplay 9455;
private _bountyList = _display displayCtrl 9462;
private _selectedBounty = lbCurSel _bountyList;
private _thisSelectedBounty = lbtext [9462,_selectedBounty]; 
if(_selectedBounty < 0) exitWith{};


private _placedByTextBox = _display displayCtrl 9463;
private _AmountTextBox = _display displayCtrl 9464;

diag_log format ["%1",_thisSelectedBounty];

private _index = [_thisSelectedBounty, vn_bountyarrayfordialog] call TON_fnc_index;

if !(_index isEqualTo -1) then {

    (vn_bountyarrayfordialog select _index) params ["_vnPuid","_vnName","_vnAmount","_vnPlacedBy"];
    
    diag_log format ["Found the Matching Variables %1 -- %2 -- %3 -- %4",_vnPuid,_vnName,_vnAmount,_vnPlacedBy];
    
    ctrlSetText [9464,format ["%1",_vnAmount]];
    ctrlSetText [9463,format ["%1",_vnPlacedBy]];
    
};
