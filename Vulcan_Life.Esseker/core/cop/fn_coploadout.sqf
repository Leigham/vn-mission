/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka

    Description:
    Loads the cops out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "U_Rangemaster";
player addVest "V_Rangemaster_belt";

player addMagazine "DDOPP_3Rnd_X3";
player addWeapon "DDOPP_X3";
player addMagazine "DDOPP_3Rnd_X3";
player addMagazine "DDOPP_3Rnd_X3";
player addMagazine "DDOPP_3Rnd_X3";
player addMagazine "DDOPP_3Rnd_X3";
player addMagazine "DDOPP_3Rnd_X3";

/* ITEMS */
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
