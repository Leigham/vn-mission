//Gang Purchase Weapons.
params ["_Classname","_Price"];
private _bountyDifference = _price - life_cash;

if (life_cash < _price) exitwith{hint format ["You dont have enough cash to make that purchase, you need %1 more !",_bountyDifference]};
life_cash = Life_cash - _price;
[0] call SOCK_fnc_updatePartial;
if(!VNPlayerGang == "")then{
private _thisMarker = getText (missionConfigFile >> "Gangs" >> VNPlayerGang >> "Marker");
};
if(!MinistryVar == "")then{
private _thisMarker = getText (missionConfigFile >> "Ministry" >> MinistryVar >> "Marker");
};
systemChat format ["%1",_thisMarker];
private _pos = getMarkerPos _thisMarker;
systemChat format ["%1",_pos];
if(player distance _pos > 100)exitwith{hint "You can only purchase your gang vehicles at your own base"};
_vehicle = createVehicle [_className, _pos, [], 0, "NONE"];
waitUntil {!isNil "_vehicle" && {!isNull _vehicle}}; //Wait?
_vehicle allowDamage false; //Temp disable damage handling..
_vehicle setPos _pos;
_vehicle setVectorUp (surfaceNormal (getpos Player));
_vehicle setDir (getDir player);

//Online Specific
_vehicle lock 2;
[_vehicle,_colorIndex] call life_fnc_colorVehicle;
[_vehicle] call life_fnc_clearVehicleAmmo;
[_vehicle,"trunk_in_use",false,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
[_vehicle,"vehicle_info_owners",[[getPlayerUID player,profileName]],true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
_vehicle disableTIEquipment true; //No Thermals.. They're cheap but addictive.

_vehicle allowDamage true;

life_vehicles pushBack _vehicle;

//Always handle key management by the server
[getPlayerUID player,playerSide,_vehicle,1] remoteExecCall ["TON_fnc_keyManagement",RSERV];
[(getPlayerUID player),playerSide,_vehicle,_colorIndex] remoteExecCall ["TON_fnc_vehicleCreate",RSERV];


closeDialog 0; //Exit the menu.
true;
