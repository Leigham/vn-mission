suckmydonkeydick = true;
if(suckmydonkeydick)then{systemchat "Haha, your Sucking Donkey Dick"};

disableSerialization;
//Because Arma
CategoryTypeName = "";
ItemTypeName = "";
FuckyouClassname = "";
FuckyouPrice = "";
FuckYouCategory = "";


if(!(VNPlayerGang == ""))then{

	private _WeaponArray = getArray (missionConfigFile >> "Gangs" >>  VNPlayerGang >> "Weapons");
	private _VehicleArray = getArray (missionConfigFile >> "Gangs" >> VNPlayerGang >> "Vehicles");
	private _ClothingArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang >> "Clothing");
	private _MagazineArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang >> "Magazines");
	private _AttachmentArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang >> "Attachments");
	private _ItemArray = getArray (missionconfigfile >> "Gangs" >> VNPlayerGang  >> "Items");
	_display = findDisplay 94653;
	_typelistbox = _display displayCtrl 94654;
	_typeselection = lbCurSel _typelistbox;
	_Itemlistbox = _display displayCtrl 94656;
	_Itemselection = lbCurSel _Itemlistbox;
	CategoryTypeName = lbtext [94656,_Itemselection];
	ItemTypeName = lbtext [94656,_typeselection];
	private _data = _Itemlistbox lbData _Itemselection;
	private _CallCompileArray = Call compile _data;
	FuckyouClassname = _CallCompileArray select 0;
	Fuckyouprice = _CallCompileArray select 1;
	FuckYouCategory = _CallCompileArray select 2;
};

if(!(VNPlayerGovt == ""))then{
	private _WeaponArray = getArray (missionConfigFile >> "GovernmentConfig" >>  VNPlayerGovt  >> "Weapons");
	private _VehicleArray = getArray (missionConfigFile >> "GovernmentConfig" >> VNPlayerGovt  >> "Vehicles");
	private _ClothingArray = getArray (missionconfigfile >> "GovernmentConfig" >> VNPlayerGovt  >> "Clothing");
	private _MagazineArray = getArray (missionconfigfile >> "GovernmentConfig" >> VNPlayerGovt  >> "Magazines");
	private _AttachmentArray = getArray (missionconfigfile >> "GovernmentConfig" >> VNPlayerGovt  >> "Attachments");
	private _ItemArray = getArray (missionconfigfile >> "GovernmentConfig" >> VNPlayerGovt  >> "Items");
	_display = findDisplay 66534;
	_Typelistbox = _display displayCtrl 66535;
	_Typeselection = lbCurSel _typelistbox;
	_Itemlistbox = _display displayCtrl 66536;
	_Itemselection = lbCurSel _Itemlistbox;
	CategoryTypeName = lbtext [66535,_Itemselection];
	ItemTypeName = lbtext [66536,_Typeselection];
	private _data = _Itemlistbox lbData _Itemselection;
	private _CallCompileArray = Call compile _data;
	FuckyouClassname = _CallCompileArray select 0;
	Fuckyouprice = _CallCompileArray select 1;
	FuckYouCategory = _CallCompileArray select 2;
};
if(FuckYouCategory == "")exitwith{hint "Please Select an Item before you press Purchase."};
if(FuckyouClassname == "")exitwith{hint "Please Select an Item before you press Purchase."};
if(suckmydonkeydick)then{
	systemchat format ["TypeSelection = %1",CategoryTypeName];
	systemchat format ["ItemSelection = %1",ItemTypeName];
	systemchat format ["FuckyouClassname = %1",FuckyouClassname];
	systemChat format ["FuckyouPrice = %1",FuckyouPrice];
	systemChat format ["FuckyouPrice = %1",FuckYouCategory];
};

if(FuckYouCategory == "Misc")then{
	[FuckyouClassname,Fuckyouprice] call legac_fnc_CheckItems;
};

if(FuckYouCategory == "Weapons")then{
	[FuckyouClassname,Fuckyouprice] call legac_fnc_CheckWeapon;
};

if(FuckYouCategory == "Vehicles")then{
	[FuckyouClassname,Fuckyouprice] call legac_fnc_CheckVehicle;
};

if(FuckYouCategory == "Clothing")then{
	[FuckyouClassname,Fuckyouprice] call legac_fnc_CheckClothing;
};

if(FuckYouCategory == "Attachments")then{
	[FuckyouClassname,Fuckyouprice] call legac_fnc_CheckItems;
};

if(FuckYouCategory == "Magazines")then{
	[FuckyouClassname,Fuckyouprice] call legac_fnc_CheckItems;
};




