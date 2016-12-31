//Check Items.
params ["_Classname","_Price"];
private _bountyDifference = _price - life_cash;

if (life_cash < _price) exitwith{hint format ["You dont have enough cash to make that purchase, you need %1 more !",_bountyDifference]};
_Item2Uniform = player canAddItemToUniform [_Classname,1];
_Item2Vest = player canAddItemtoVest [_Classname,1];
_Item2Backpack = player canAddItemToBackpack[_Classname,1];

if(_Item2Uniform)then{
  player addItemToUniform _classname;
  life_cash = life_cash - _price;
}else{
  if(_Item2Vest)then{
  player addItemToVest _classname;
  life_cash = life_cash - _price;
  }else{
    if(_item2Backpack)then{
    player addItemToBackpack _classname;
    life_cash = life_cash - _price;
  }else{
    hint "You dont have any space left for this item, please make some and try again.";
  };
  };
};
