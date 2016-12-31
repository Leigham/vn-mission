#include "..\..\script_macros.hpp"
/*
    File: fn_medicLoadout.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Loads the medic out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player addUniform "redcross_novicemember_uniform_def";
player addBackpack "AM_PoliceBelt";
player addVest "redcross_novicemember_vest";
player addHeadgear "redcross_helmet";
player addItem "Medikit";
player addItem "ToolKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
player addItem "tf_anprc152";
player assignItem "tf_anprc152";
player addItem "TRYK_Shemagh_G_NV";
player assignItem "TRYK_Shemagh_G_NV";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
