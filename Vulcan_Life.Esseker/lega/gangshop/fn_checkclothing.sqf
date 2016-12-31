params ["_Classname","_Price"];
systemChat format ["%1--%2",_price,_Classname];
_item = [_Classname] call BIS_fnc_itemType;
hint format ["%1",_Item];
_Type = _Item select 1;
private _bountyDifference = _price - life_cash;

if (life_cash < _price) exitwith{hint format ["You dont have enough cash to make that purchase, you need %1 more !",_bountyDifference]};
_test2 = uniform player;
systemChat format ["%1",_test2];
if(_type == "Uniform")then{
  //Check for Uniform.
  _CheckUniform = Uniform player;
  hint format ["%1",_CheckUniform];
  if(_CheckUniform == "")then{
    player addUniform _Classname;
    life_cash = Life_cash - _price;
  }else{
    hint "You can not buy a Uniform as you already have one on.";
  };
};
if(_type == "BackPack")then{
  _CheckBackpack = Backpack player;
  if(_CheckBackpack == "")then{
    player addBackpack _Classname;
    life_cash = Life_cash - _price;

  }else{
    hint "You can not buy a Backpack as you already have one on.";
  };
};
if(_type == "Headgear")then{
  _CheckHeadgear = Headgear player;
  if(_checkHeadgear == "")then{
    player AddHeadgear _classname;
    life_cash = Life_cash - _price;

  }else{
    hint "You can Not Buy any headgear as you already have some.";
  };
};
if(_type == "Glasses")then{
  _checkEyewear = goggles player;
  if(_CheckEyewear == "")then {
    player addgoggles _Classname;
    life_cash = Life_cash - _price;
  }else {
    hint "You already have eyewear, you cant equip more than one at a time.";
  };
};
if(_type == "Vest")then{
  _CheckVest = vest Player;
  if (_CheckVest == "")then{
    player AddVest _classname;
    life_cash = Life_cash - _price;

  }else{
    hint "You already have a vest, you will need to remove it, if you wish to purchase another one.";
  };
};
