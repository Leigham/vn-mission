_Lega_Debug = false;

disableSerialization;
hint "function starting";
private _display = findDisplay 66534;
private _bountyList = _display displayCtrl 66535;
private _selectedBounty = lbCurSel _bountyList;
private _CurSelection = lbtext [66535,_selectedBounty];

private _GangCFG = missionConfigFile >> "GovernmentConfig" >>  VNPlayerGovt;
private _GangName = getText (missionConfigFile >> "GovernmentConfig" >> VNPlayerGovt >> "Name");
private _GangImage = getText (missionConfigFile >> "GovernmentConfig" >> VNPlayerGovt >> "Image");
private _WeaponArray = getArray (missionConfigFile >> "GovernmentConfig" >>  VNPlayerGovt >> "Weapons");
private _VehicleArray = getArray (missionConfigFile >> "GovernmentConfig" >> VNPlayerGovt >> "Vehicles");
private _ClothingArray = getArray (missionconfigfile >> "GovernmentConfig" >> VNPlayerGovt >> "Clothing");
private _MagazineArray = getArray (missionconfigfile >> "GovernmentConfig" >> VNPlayerGovt >> "Magazines");
private _AttachmentArray = getArray (missionconfigfile >> "GovernmentConfig" >> VNPlayerGovt >> "Attachments");

if(_CurSelection == "Clothing")then{
  lbclear 66536;
{
  private _Classname = _x select 0;//Classname
  private _itemType = [_Classname] call BIS_fnc_itemType;
  if(_Lega_Debug)then{
  Diag_log format ["%1",_itemType];
  };
  _ItemTypetoSend = _itemType select 0;
  _Item2ndType = _itemType select 1;

  if(_ItemTypetoSend in ["Equipment","Item","Weapon"])then{
    private _info = _classname call ISSE_Cfg_WeaponInfo;
    private _displayname = _info select 0;
    if(_displayname == "/")then{_displayname = _x select 1;};
    if(_Lega_Debug)then{
      diag_log format ["%1",_info];
      hint format ["%1",_info];
      systemChat format ["%1",_displayname];
    };
    private _Price = _X select 2;//Price.
    _DataArray = format ["['%1',%2]",_Classname,_Price];
    _index = lbAdd [66536,_displayname];
    private _data = lbSetData [66536, _index, _DataArray];//Setting the Data to listbox
  };

}count _ClothingArray;

};





if(_CurSelection == "Vehicles")then{
  lbclear 66536;
{
  private _Classname = _x select 0;//Classname
  _DisplayName = _classname call ISSE_Cfg_Vehicle_GetName;
  //private _DisplayName = _x select 1;//Display Name
  private _Price = _X select 2;//Price.
  _DataArray = format ["['%1',%2]",_Classname,_Price];
  _index = lbAdd [66536,_DisplayName];
  private _data = lbSetData [66536, _index, _DataArray];//Setting the Data to listbox
}count _VehicleArray;
};
if(_CurSelection == "Weapons")then{
  lbclear 66536;
{
  private _Classname = _x select 0;//Classname
  private _itemType = [_Classname] call BIS_fnc_itemType;
  if(_Lega_Debug)then{
  Diag_log format ["%1",_itemType];
  };
  _ItemTypetoSend = _itemType select 0;
  _Item2ndType = _itemType select 1;

  if(_ItemTypetoSend in ["Equipment","Item","Weapon"])then{
    private _info = _classname call ISSE_Cfg_WeaponInfo;
    private _displayname = _info select 0;
    if(_displayname == "/")then{_displayname = _x select 1;};
    if(_Lega_Debug)then{
      diag_log format ["%1",_info];
      hint format ["%1",_info];
      systemChat format ["%1",_displayname];
    };
    private _Price = _X select 2;//Price.
    _DataArray = format ["['%1',%2]",_Classname,_Price];
    _index = lbAdd [66536,_displayname];
    private _data = lbSetData [66536, _index, _DataArray];//Setting the Data to listbox
  };

}count _WeaponArray;
};
if(_CurSelection == "Attachments")then{
  lbclear 66536;
{
  private _Classname = _x select 0;//Classname
  private _itemType = [_Classname] call BIS_fnc_itemType;
  if(_Lega_Debug)then{
  Diag_log format ["%1",_itemType];
  };
  _ItemTypetoSend = _itemType select 0;
  _Item2ndType = _itemType select 1;

  if(_ItemTypetoSend in ["Equipment","Item","Weapon"])then{
    private _info = _classname call ISSE_Cfg_WeaponInfo;
    private _displayname = _info select 0;
    if(_displayname == "/")then{_displayname = _x select 1;};
    if(_Lega_Debug)then{
      diag_log format ["%1",_info];
      hint format ["%1",_info];
      systemChat format ["%1",_displayname];
    };
    private _Price = _X select 2;//Price.
    _DataArray = format ["['%1',%2]",_Classname,_Price];
    _index = lbAdd [66536,_displayname];
    private _data = lbSetData [66536, _index, _DataArray];//Setting the Data to listbox
  };

}count _AttachmentArray;
};
if(_CurSelection == "Magazines")then{
  lbclear 66536;
{
  private _Classname = _x select 0;//Classname
  _DisplayName = _classname call ISSE_Cfg_Magazine_GetName;
  //private _DisplayName = _x select 1;//Display Name
  private _Price = _X select 2;//Price.
  _DataArray = format ["['%1',%2]",_Classname,_Price];
  _index = lbAdd [66536,_DisplayName];
  private _data = lbSetData [66536, _index, _DataArray];//Setting the Data to listbox
}count _MagazineArray;
};
