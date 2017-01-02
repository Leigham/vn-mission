#include "..\script_macros.hpp"
/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']];
    };
     case west: {
    	//Boom Boom - Thunder
	    life_actions = player addAction ["Capture Crate","Legac_fnc_crate",["UN"],0,false,false,"",'
	    cursorObject getVariable ["AirPenis", true] && playerSide == west && ((typeOf cursorObject) == "Box_IND_AmmoVeh_F") && ((player distance cursorObject) < 3) && cursorTarget getVariable ["CumSplosion",false]'];
		
		if((FETCH_CONST(life_coplevel)) >= 1) then {
			Cop_Clothing_1 addAction["Infantry Clothing",life_fnc_clothingMenu,"UNInfantryClothing"];
			Cop_Clothing_2	addAction["Infantry Clothing",life_fnc_clothingMenu,"UNInfantryClothing"];
			Cop_Clothing_3 addAction["Infantry Clothing",life_fnc_clothingMenu,"UNInfantryClothing"];
			Cop_Weapons_1 addAction["Infantry Weapons",life_fnc_weaponShopMenu,"UNInfantry"];
			Cop_Weapons_2 addAction["Infantry Weapons",life_fnc_weaponShopMenu,"UNInfantry"];
			Cop_Weapons_3 addAction["Infantry Weapons",life_fnc_weaponShopMenu,"UNInfantry"];
		};
		if((FETCH_CONST(life_coplevel)) >= 2) then {
			Cop_Clothing_1 addaction["Supervisor Clothing",life_fnc_ClothingMenu,"UNSupervisorClothing"];
			Cop_Clothing_3	addaction["Supervisor Clothing",life_fnc_ClothingMenu,"UNSupervisorClothing"];
			Cop_Clothing_2 addaction["Supervisor Clothing",life_fnc_ClothingMenu,"UNSupervisorClothing"];
			Cop_Weapons_1 addAction["Supervisor Weapons",life_fnc_weaponShopMenu,"UNSupervisor"];
			Cop_Weapons_2 addAction["Supervisor Weapons",life_fnc_weaponShopMenu,"UNSupervisor"];
			Cop_Weapons_3 addAction["Supervisor Weapons",life_fnc_weaponShopMenu,"UNSupervisor"];
		};
		if((FETCH_CONST(life_coplevel)) >= 2) then {
			Cop_Weapons_1 addAction["Heavy Weapons",life_fnc_weaponShopMenu,"UNHeavyWeapons"];
			Cop_Weapons_2 addAction["Heavy Weapons",life_fnc_weaponShopMenu,"UNHeavyWeapons"];
			Cop_Weapons_3 addAction["Heavy Weapons",life_fnc_weaponShopMenu,"UNHeavyWeapons"];
		};

		if((FETCH_CONST(life_coplevel)) >= 4) then {
			Cop_Clothing_1 addaction["Low Command Clothing",life_fnc_ClothingMenu,"UNLowCommandClothing"];
			Cop_Clothing_3	addaction["Low Command Clothing",life_fnc_ClothingMenu,"UNLowCommandClothing"];
			Cop_Clothing_2 addaction["Low Command Clothing",life_fnc_ClothingMenu,"UNLowCommandClothing"];
			Cop_Weapons_1 addAction["Low Command Weapons",life_fnc_weaponShopMenu,"UNLowCommand"];
			Cop_Weapons_2 addAction["Low Command Weapons",life_fnc_weaponShopMenu,"UNLowCommand"];
			Cop_Weapons_3 addAction["Low Command Weapons",life_fnc_weaponShopMenu,"UNLowCommand"];
		};
		
		if((FETCH_CONST(life_coplevel)) >= 5) then {
			Cop_Clothing_1 addaction["Spec Ops Clothing",life_fnc_ClothingMenu,"UNSpecialForcesClothing"];
			Cop_Clothing_3	addaction["Spec Ops Clothing",life_fnc_ClothingMenu,"UNSpecialForcesClothing"];
			Cop_Clothing_2 addaction["Spec Ops Clothing",life_fnc_ClothingMenu,"UNSpecialForcesClothing"];
			Cop_Weapons_1 addAction["Spec Ops Weapons",life_fnc_weaponShopMenu,"UNSpecialForces"];
			Cop_Weapons_2 addAction["Spec Ops Weapons",life_fnc_weaponShopMenu,"UNSpecialForces"];
		    Cop_Weapons_3 addAction["Spec Ops Weapons",life_fnc_weaponShopMenu,"UNSpecialForces"];
		};
		if((FETCH_CONST(life_coplevel)) >= 6) then {
			Cop_Clothing_1 addaction["Undercover Clothing",life_fnc_ClothingMenu,"bruce"];
			Cop_Clothing_3	addaction["Undercover Clothing",life_fnc_ClothingMenu,"bruce"];
			Cop_Clothing_2 addaction["Undercover Clothing",life_fnc_ClothingMenu,"bruce"];
			Cop_Weapons_1 addAction["Undercover Weapons",life_fnc_weaponShopMenu,"UNUndercover"];
			Cop_Weapons_2 addAction["Undercover Weapons",life_fnc_weaponShopMenu,"UNUndercover"];
			Cop_Weapons_3 addAction["Undercover Weapons",life_fnc_weaponShopMenu,"UNUndercover"];
		};
		if((FETCH_CONST(life_coplevel)) >= 7) then {
			Cop_Clothing_1 addaction["High Command Clothing",life_fnc_ClothingMenu,"UNHighCommandClothing"];
			Cop_Clothing_3	addaction["High Command Clothing",life_fnc_ClothingMenu,"UNHighCommandClothing"];
			Cop_Clothing_2 addaction["High Command Clothing",life_fnc_ClothingMenu,"UNHighCommandClothing"];
			Cop_Weapons_1 addAction["High Command Weapons",life_fnc_weaponShopMenu,"UNHighCommand"];
			Cop_Weapons_2 addAction["High Command Weapons",life_fnc_weaponShopMenu,"UNHighCommand"];
			Cop_Weapons_3 addAction["High Command Weapons",life_fnc_weaponShopMenu,"UNHighCommand"];
		};
	};
};
life_actions pushBack (player addAction["<t color = '#D660D6'>Put on Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
life_actions pushBack (player addAction["<t color = '#D660D6'>Remove Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);

player addAction["<t color = '#D660D6'>Heal Player</t>",{[cursorTarget] spawn Legac_fnc_HealShit},"",7,false,false,"",'isNull objectParent cursorTarget && isplayer cursorTarget && life_inv_HealthPack >= 1 && damage cursorTarget < 0.90'];
player addAction["<t color = '#D660D6'>Heal Self</t>",{[player] spawn Legac_fnc_HealShit},"",7,false,false,"",'isNull objectParent player && life_inv_HealthPack >= 1 && damage player > 0.25'];