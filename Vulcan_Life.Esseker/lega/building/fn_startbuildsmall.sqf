
params ["_object"];
_buildable = _object createVehicle [0,0,0];
private _attachPos = [0.16, 3, ((boundingBoxReal _buildable) select 1) select 2];
_buildable attachTo[player, _attachPos];
vn_currentBuildable = _buildable;
systemchat format ["%1",_object];
private _Puid = getPlayerUID player;
_buildable setVariable ["Owner",_Puid];
_buildable enableSimulation false;
vn_OriginalMass = getMass _buildable;
_buildable setMass 0;

vn_addactionPickupObject = -1;
vn_addactionObject = -1;
vn_AddactionPlaceAction = player addaction ["<t color='#00EE14'>Drop Object</t>", {[]call legac_fnc_DropBuilding}];
vn_AddactionCancelAction = player addAction ["<t color='#FF0000'>Cancel Building</t>", {_null = deleteVehicle vn_currentBuildable;player removeAction vn_AddactionCancelAction;player removeAction vn_addactionObject;player removeAction vn_AddactionPlaceAction;vn_currentBuildable =objNull;}];
