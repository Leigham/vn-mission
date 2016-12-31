_puid = GetplayerUID player;
VNPlayerGang = "";
MinistryVar = "";


//Regiment
if(_Puid in ["", "UID2"])then{
	VNPlayerGang = "LastRegiment";
};
//Regiment
if(_Puid in ["", "UID2"])then{
VNPlayerGang = "LastRegiment";
};

//Division

if(_Puid in ["", "UID2"])then{
  VNPlayerGang = "Division";

};

//ThePact

if(_Puid in ["", "UID2"])then{
	VNPlayerGang = "ThePact";
};

//OutSiders
if(_Puid in ["", "UID2"])then{

};

//905

if(_Puid in ["_SP_PLAYER_", "UID2"])then{
VNPlayerGang = "905";
};

//Ghost

if(_Puid in ["", "UID2"])then{
VNPlayerGang = "TheSaviors";
};
if(_Puid in ["76561198132926159", "UID2"])then{
VNPlayerGang = "VersaceGladiators";
};
if(VNPlayerGang ==)exitwith{closeDialog 0);


//systemchat format ["Gang:%1",VNPlayerGang];
//systemChat format ["GangCFG: %1",_GangCFG];
//systemChat format ["Weapon Array: %1",_WeaponArray];
//systemChat format ["Vehicle Array: %1",_VehicleArray];
//systemChat format ["Clothing Array: %1",_ClothingArray];

private _GangName = getText (missionConfigFile >> "Gangs" >> VNPlayerGang >> "Name");
private _GangImage = getText (missionConfigFile >> "Gangs" >> VNPlayerGang >> "Image");
systemChat format ["%1",_GangName];
systemChat format ["%1",_GangImage];
ctrlSetText [94653, _GangName];
ctrlSetText [94655, _GangImage];

{
   _index = lbAdd [94654,_x];
}foreach ["Weapons","Vehicles","Clothing","Attachments","Magazines"];
