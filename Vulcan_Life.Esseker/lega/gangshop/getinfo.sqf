//Get Classname Script by Lega 16/12/2016

_Lega_Debug = false;
private _className = _this;
private _itemType = [_ClassName] call BIS_fnc_itemType;


systemChat format ["%1",_itemType];
_ItemTypetoSend = _itemType select 0;
_Item2ndType = _itemType select 1;

//CfgVehicleActions
if(_ItemTypetoSend in ["Equipment","Item","Weapon"])then{
  private _info = _classname call ISSE_Cfg_WeaponInfo;
  private _Name = _info select 0;
  if(_Lega_Debug)then{
    diag_log format ["%1",_info];
    hint format ["%1",_info];
    systemChat format ["%1",_Name];
  };
};
