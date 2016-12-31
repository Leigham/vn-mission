hint "Purchasing Item";
disableSerialization;
if(!VNPlayerGang == "")then{
private _WeaponArray = getArray (missionConfigFile >> "Gangs" >>  VNPlayerGang >> "Weapons");
private _VehicleArray = getArray (missionConfigFile >> "Gangs" >> VNPlayerGang >> "Vehicles");
private _ClothingArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang >> "Clothing");
private _MagazineArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang >> "Magazines");
private _AttachmentArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang >> "Attachments");
private _ItemArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang  >> "Items");
};
if{!VNPlayerGovt == "")then{
private _WeaponArray = getArray (missionConfigFile >> "GovernmentConfig" >>  VNPlayerGovt  >> "Weapons");
private _VehicleArray = getArray (missionConfigFile >> "GovernmentConfig" >> VNPlayerGovt  >> "Vehicles");
private _ClothingArray = getArray (missionconfigfile >> "GovernmentConfig" >> VNPlayerGovt  >> "Clothing");
private _MagazineArray = getArray (missionconfigfile >> "GovernmentConfig" >> VNPlayerGovt  >> "Magazines");
private _AttachmentArray = getArray (missionconfigfile >> "GovernmentConfig" >> VNPlayerGovt  >> "Attachments");
private _ItemArray = getArray (missionconfigfile >> "GovernmentConfig" >> VNPlayerGovt  >> "Items");
};


private _display = findDisplay 94653;
private _listbox = _display displayCtrl 94656;
private _selection = lbCurSel _listbox;
//if(_selection == 0)exitwith{};//stop erroring on no sleection.

private _data = _listbox lbData _selection;

private _CallCompileArray = Call compile _data;

private _Classname = _CallCompileArray select 0;
private _price = _CallCompileArray select 1;
if(_classname == "")exitwith{hint "Please Select an Item before you press Purchase."};
//Weapons Purchase//////////////////////////////////////////////
{
_ClassnametoCheck = _x select 0;

if(_Classname == _ClassnametoCheck)then{
hint "Is Weapon";                                                   /////////DONE////////////
[_Classname,_Price] call legac_fnc_CheckWeapon;
};
}foreach _WeaponArray;
///////////////////////////////////////////////////////////////
//Vehicle Purchase/////////////////////////////////////////////
{
_ClassnametoCheck = _x select 0;

if(_Classname == _ClassnametoCheck)then{
hint "Is vehicle";
[_Classname,_Price] call legac_fnc_CheckVehicle;     ///////DONE////////
};
}foreach _VehicleArray;
////////////////////////////////////////////////////////////////
//Clothing Purchase////////////////////////////////////////////
{
_ClassnametoCheck = _x select 0;

if(_Classname == _ClassnametoCheck)then{
hint "Is Clothing";
[_Classname,_Price] call legac_fnc_CheckClothing;
};
}foreach _ClothingArray;
///////////////////////////////////////////////////////////////
//Magazine Purchase
{
_ClassnametoCheck = _x select 0;

if(_Classname == _ClassnametoCheck)then{
[_Classname,_Price] call legac_fnc_CheckItems;
};
}foreach _MagazineArray;

//Attachement Purcase
{
_ClassnametoCheck = _x select 0;

if(_Classname == _ClassnametoCheck)then{
[_Classname,_Price] call legac_fnc_CheckItems;
};
}foreach _AttachmentArray;
