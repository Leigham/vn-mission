disableSerialization;
private _display = findDisplay 94653;
private _listbox = _display displayCtrl 94656;
private _selection = lbCurSel _listbox;
private _data = _listbox lbData _selection;
diag_log format ["%1",_data];
private _CallCompileArray = Call compile _data;
diag_log format ["%1",_CallCompileArray];
private _Classname = _CallCompileArray select 0;
private _price = _CallCompileArray select 1;
private _ItemCategory = _CallCompileArray select 2;

systemChat format ["Classname:%1",_Classname];
_test = [_Classname] call BIS_fnc_itemType;
systemChat format ["%1",_ItemCategory];
SystemChat format ["Price:%1",_Price];
Diag_log format ["ItemsType = %1",_test];
_pricebox = _display displayctrl 94658;
_pricetoDisplay = format ["$%1",_price];
_pricebox ctrlSetText _pricetoDisplay;// for Displays
