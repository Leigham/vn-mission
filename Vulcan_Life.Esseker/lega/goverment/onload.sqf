_puid = GetplayerUID player;

//Govt 1
if(_Puid in ["76561198055339582",
	 		 "76561198057812333",
			 "76561198071097141",
			 "76561198118698747",
			 "76561198042402700",
			 "76561198109583767",
			 "76561198170100655",
			 "76561198090422448",
			 "76561198202386424",
			 "",
			 "",
			 "",
			 "",
			 "",
			 "",
			 "",
			 "",
			 "",
			 "",
			 "",
			 "",
			 "",
			 ""
			 ])then{
	VNPlayerGovt = "Ministry";
};



//systemchat format ["Gang:%1",VNPlayerGang];
//systemChat format ["GangCFG: %1",_GangCFG];
//systemChat format ["Weapon Array: %1",_WeaponArray];
//systemChat format ["Vehicle Array: %1",_VehicleArray];
//systemChat format ["Clothing Array: %1",_ClothingArray];

private _GovtName = getText (missionConfigFile >> "GovernmentConfig" >> VNPlayerGovt >> "Name");
private _GovtImage = getText (missionConfigFile >> "GovernmentConfig" >> VNPlayerGovt >> "Image");
systemChat format ["%1",_GovtName];
systemChat format ["%1",_GovtImage];
ctrlSetText [66534, _GovtName];
ctrlSetText [66540, _GovtImage];

{
   _index = lbAdd [66535,_x];
}foreach ["Weapons","Vehicles","Clothing","Attachments","Magazines","Misc"];
