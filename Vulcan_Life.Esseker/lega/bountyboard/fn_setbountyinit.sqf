
disableSerialization;

diag_log "Script Started";


private _display = findDisplay 9455;
private _listbox = _display displayCtrl 9460;
private _selection = lbCurSel _listbox;
private _vnPlayerUID = (lbData [ 9460, ( lbCurSel 9460 ) ]);
if(_selection < 0) exitWith{};

private _listboxa = _listbox lbText _selection;
private _box = parseNumber ctrlText 9459;
diag_log format ["The Puid for the player selected is %1",_vnPlayerUID];
diag_log format["%1 --- %2",_listboxa,_box];
_playerName = name player;
if(_listboxa isEqualTo "") exitwith {hint "Please Select a player to place a bounty on!"};
if(_listboxa isEqualTo _playerName)exitwith{hint "You cant place a bounty on yourself!"};


if(_box <= 0 )exitwith{ hint "Please enter an amount for the bounty"};

private _bountyDifference = _box - life_cash;

if (life_cash < _box) exitwith{hint format ["You dont have Enough to place that bounty, you need %1 more to complete!",_bountyDifference]};


private _object = objNull;

{
    if (getPlayerUID _x isEqualTo _vnPlayerUID) exitWith {
        _object = _x;
    };
    true
} count playableUnits;

private _vnGetPuid = getPlayerUID _object;
[_vnGetPuid,_object] remoteExecCall ["Lega_fnc_vnCheckBounty",2];
diag_log format ["Sending %1 -- %2 to server",_vnGetPuid, _object];

if(_object getVariable ["vnHasBounty",true])exitwith {hint format ["%1 already has a bounty on his head",_listboxa]};

hint format ["Placing a bounty on %1 for %2!",_listboxa,_box];
life_cash = life_cash - _box;
[6] call SOCK_fnc_updatePartial;

//Getting the variables ready to send to the server.
_vnPuidToSend = getPlayerUID _object;
_vnNameToSend = _listboxa;
_vnAmountToSend = _box;
_vnPlacedByToSend = name player;

_arrToSend = [_object,_vnPuidToSend,_vnNameToSend,_vnAmountToSend,_vnPlacedByToSend];

diag_log format ["Adding %1 to Database",_arrToSend];
[_object,_vnPuidToSend,_vnNameToSend,_vnAmountToSend,_vnPlacedByToSend] remoteExecCall ["Lega_fnc_vnSaveBounty",2];