private ["_SetBountyAmount","_SetBountyAmountEdit","_SetBountyListbot","_data","_getBountyAmount","_getBountyOnPuid","_getBountyPlacedBy","_index","_vnAmount","_vnName","_vnPlacedBy","_vnPuid","_x"];
waitUntil {!isNull (findDisplay 9455)};

_SetBountyListbot = 9460;
_SetBountyAmountEdit = 9459;

_getBountyOnPuid = 9462; //should list names from the puids of the bounty
_getBountyPlacedBy = 9463; //want this to update text matching with the bounty on puid
_getBountyAmount = 9464;	//want this to update text matching with the bounty on puid
lbClear 9460;
lbClear 9462;

{
	  _SetBountyIndex = lbAdd [9460, name _x];
    //_SetBountyData = lbSetData [9460, _SetBountyIndex, getPosATL _x];
    lbSetTooltip [9460, _SetBountyIndex, name _x];
	  _thisPlayerPuid = getPlayerUID _x;
    //_SetBountyListbot= lbSetData [1,_thisPlayerPuid];
		_setDataForListbox = lbSetData [9460, _SetBountyIndex, _thisPlayerPuid ];
	  diag_log format ["%1 ---- %2",_x,_thisPlayerPuid];
} count playableUnits;
{
_x params ["_vnPuid","_vnName","_vnAmount","_vnPlacedBy"];
	_GetBountyIndex = lbAdd [9462, _vnName];
  _GetBountyData = lbSetData [9462, _GetBountyIndex];
	lbSetTooltip [9462, _GetBountyIndex,_vnName];
} count vn_bountyarrayfordialog;
