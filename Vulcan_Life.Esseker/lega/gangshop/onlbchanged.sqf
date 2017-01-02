Lega_Debug = true;

disableSerialization;
hint "function starting";
private _display = findDisplay 94653;
private _bountyList = _display displayCtrl 94654;
private _selectedBounty = lbCurSel _bountyList;
private _CurSelection = lbtext [94654,_selectedBounty];

private _GangCFG = missionConfigFile >> "Gangs" >>  VNPlayerGang;
private _GangName = getText (missionConfigFile >> "Gangs" >> VNPlayerGang >> "Name");
private _GangImage = getText (missionConfigFile >> "Gangs" >> VNPlayerGang >> "Image");
private _WeaponArray = getArray (missionConfigFile >> "Gangs" >>  VNPlayerGang >> "Weapons");
private _VehicleArray = getArray (missionConfigFile >> "Gangs" >> VNPlayerGang >> "Vehicles");
private _ClothingArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang >> "Clothing");
private _MagazineArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang >> "Magazines");
private _AttachmentArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang >> "Attachments");
private _MiscArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang >> "Items");



if(_CurSelection == "Clothing")then{
  lbclear 94656;
{
  private _Classname = _x select 0;//Classname
  private _itemType = [_Classname] call BIS_fnc_itemType;
  if(Lega_Debug)then{
  Diag_log format ["%1",_itemType];
  };
  _ItemTypetoSend = _itemType select 0;
  _Item2ndType = _itemType select 1;

  if(_ItemTypetoSend in ["Equipment","Item","Weapon"])then{
    private _info = _classname call ISSE_Cfg_WeaponInfo;
    private _displayname = _info select 0;
    if(_displayname == "/")then{_displayname = _x select 1;};
    if(Lega_Debug)then{
      diag_log format ["%1",_info];
      hint format ["%1",_info];
      systemChat format ["%1",_displayname];
    };
    private _Price = _X select 2;//Price.
    _DataArray = format ["['%1',%2,'Clothing']",_Classname,_Price];
     if(lega_debug)then{systemChat format ["%1",_DataArray]};
    _index = lbAdd [94656,_displayname];
    private _data = lbSetData [94656, _index, _DataArray];//Setting the Data to listbox
  };

}count _ClothingArray;

};





if(_CurSelection == "Vehicles")then{
  lbclear 94656;
{
  private _Classname = _x select 0;//Classname
  _DisplayName = _classname call ISSE_Cfg_Vehicle_GetName;
  //private _DisplayName = _x select 1;//Display Name
  private _Price = _X select 2;//Price.
  _DataArray = format ["['%1',%2,'Vehicles']",_Classname,_Price];
   if(lega_debug)then{systemChat format ["%1",_DataArray]};
  _index = lbAdd [94656,_DisplayName];
  private _data = lbSetData [94656, _index, _DataArray];//Setting the Data to listbox
}count _VehicleArray;
};


if(_CurSelection == "Weapons")then{
  lbclear 94656;
{
  private _Classname = _x select 0;//Classname
  private _itemType = [_Classname] call BIS_fnc_itemType;
  if(Lega_Debug)then{
  Diag_log format ["%1",_itemType];
  };
  _ItemTypetoSend = _itemType select 0;
  _Item2ndType = _itemType select 1;

  if(_ItemTypetoSend in ["Equipment","Item","Weapon"])then{
    private _info = _classname call ISSE_Cfg_WeaponInfo;
    private _displayname = _info select 0;
    if(_displayname == "/")then{_displayname = _x select 1;};
    if(Lega_Debug)then{
      diag_log format ["%1",_info];
      hint format ["%1",_info];
      systemChat format ["%1",_displayname];
    };
    private _Price = _X select 2;//Price.
    _DataArray = format ["['%1',%2,'Weapons']",_Classname,_Price];
     if(lega_debug)then{systemChat format ["%1",_DataArray]};
    _index = lbAdd [94656,_displayname];
    private _data = lbSetData [94656, _index, _DataArray];//Setting the Data to listbox
  };

}count _WeaponArray;
};



if(_CurSelection in ["Attachments","Misc"])then{
  lbclear 94656;
{
  private _Classname = _x select 0;//Classname
  private _itemType = [_Classname] call BIS_fnc_itemType;
  if(lega_debug)then{
  Diag_log format ["%1",_itemType];
  };
  _ItemTypetoSend = _itemType select 0;
  _Item2ndType = _itemType select 1;

  if(_ItemTypetoSend in ["Equipment","Item","Weapon"])then{
    private _info = _classname call ISSE_Cfg_WeaponInfo;
    private _displayname = _info select 0;
    if(_displayname == "/")then{_displayname = _x select 1;};
    if(lega_debug)then{
      diag_log format ["%1",_info];
      hint format ["%1",_info];
      systemChat format ["%1",_displayname];
    };
    private _Price = _X select 2;//Price.
    _DataArray = format ["['%1',%2,'Attachments']",_Classname,_Price];
    if(lega_debug)then{systemChat format ["%1",_DataArray]};
    _index = lbAdd [94656,_displayname];
    private _data = lbSetData [94656, _index, _DataArray];//Setting the Data to listbox
  };

}count _AttachmentArray;
};



if(_CurSelection in ["Attachments","Misc"])then{
  lbclear 94656;
{
  private _Classname = _x select 0;//Classname
  private _itemType = [_Classname] call BIS_fnc_itemType;
  if(lega_debug)then{
  Diag_log format ["%1",_itemType];
  };
  _ItemTypetoSend = _itemType select 0;
  _Item2ndType = _itemType select 1;

  if(_ItemTypetoSend in ["Equipment","Item","Weapon"])then{
    private _info = _classname call ISSE_Cfg_WeaponInfo;
    private _displayname = _info select 0;
    if(_displayname == "/")then{_displayname = _x select 1;};
    if(lega_debug)then{
      diag_log format ["%1",_info];
      hint format ["%1",_info];
      systemChat format ["%1",_displayname];
    };
    private _Price = _X select 2;//Price.
    _DataArray = format ["['%1',%2,'Misc']",_Classname,_Price];
    if(lega_debug)then{systemChat format ["%1",_DataArray]};
    _index = lbAdd [94656,_displayname];
    private _data = lbSetData [94656, _index, _DataArray];//Setting the Data to listbox
  };

}count _MiscArray;
};

if(_CurSelection == "Magazines")then{
  lbclear 94656;
{
  private _Classname = _x select 0;//Classname
  _DisplayName = _classname call ISSE_Cfg_Magazine_GetName;
  //private _DisplayName = _x select 1;//Display Name
  private _Price = _X select 2;//Price.
  _DataArray = format ["['%1',%2,'Magazines']",_Classname,_Price];
   if(lega_debug)then{systemChat format ["%1",_DataArray]};
  _index = lbAdd [94656,_DisplayName];
  private _data = lbSetData [94656, _index, _DataArray];//Setting the Data to listbox
}count _MagazineArray;
};
