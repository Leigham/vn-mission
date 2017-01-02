//Gang Purchase Weapons.

params ["_Classname","_Price"];
private _bountyDifference = _price - life_cash;

if (life_cash < _price) exitwith{hint format ["You dont have enough cash to make that purchase, you need %1 more !",_bountyDifference]};
_item = [fuckyouclassname] call BIS_fnc_itemType;
systemChat format ["%1",_item];
_PrimaryWeaponList = ["SniperRifle","AssaultRifle"];//Add Weapon Types Here as Needed.
_HandgunList = ["Handgun"];
private _ItemType = _Item Select 1;

If(_ItemType in _PrimaryWeaponList)then{
  if((primaryWeapon player) == "")then{
    //Give the player Weapon Here
    life_cash = life_cash - _price;
    player addWeapon fuckyouclassname;
  }else{
    hint "You Already Have a Primary Weapon.";
  };
};
if(_ItemType in _HandgunList)then{
  if((HandGunWeapon player) == "")then{
    life_cash = life_cash - _price;
    player addWeapon fuckyouclassname;
  }else{
    hint "You Already Have a HandGun.";
  };
};
