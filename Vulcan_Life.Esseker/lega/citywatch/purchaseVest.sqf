//Check and Give Vest
_currentVest = vest player;

if(Lega_onServer)then{
    _priceDifference = CityVestPrice - life_cash;
    if(life_cash < CityVestPrice)exitwith{hint format ["You dont have enough cash to make that purchase, you need %1 to purchase it.",_priceDifference];};
};

if(Lega_ClientDebug)then{
    systemChat format ["%1",_currentVest];
};
if(_currentVest == "vn_citywatch")then{hint "You already have the City Watch vest on, you cant wear two of them at the same time!"};

if(_currentVest == "")then{
    player AddVest "vn_citywatch";
    hint "Congratulations on purchasing the City Watch vest, you can now go and start the job of City Watch";
    if(lega_onServer)then{life_cash = life_cash - CityVestPrice};
}else{
hint "You already have a vest on, please remove it and then come back.";
};
