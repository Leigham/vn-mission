class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
        { "Mrshounka_Vandura_civ_noir", { "", "", -1 } },
	    { "Mrshounka_Vandura_civ_bleufonce", { "", "", -1 } },
	    { "Mrshounka_Vandura_civ_grise", { "", "", -1 } },
	    { "Mrshounka_Vandura_civ_orange", { "", "", -1 } },
	    { "Mrshounka_Vandura_civ_rouge", { "", "", -1 } },
	    { "Mrshounka_r5_bleufonce", { "", "", -1 } },
	    { "Mrshounka_r5_rouge", { "", "", -1 } },
	    { "Mrshounka_r5_violet", { "", "", -1 } },
	    { "Mrshounka_r5_jaune", { "", "", -1 } },
	    { "Mrshounka_r5_noir", { "", "", -1 } },
	    { "Jonzie_Mini_Cooper", { "", "", -1 } },
	    { "Jonzie_30CSL", { "", "", -1 } },
	    { "Mrshounka_lincoln_civ", { "", "", -1 } },
	    { "Mrshounka_lincoln_noir", { "", "", -1 } },
	    { "Mrshounka_lincoln_orange", { "", "", -1 } },
	    { "Mrshounka_lincoln_grise", { "", "", -1 } },
	    { "Mrshounka_lincoln_bleufonce", { "", "", -1 } },
	    { "Mrshounka_Alfa_Romeo_noir", { "", "", -1 } },
	    { "Mrshounka_Alfa_Romeo_bleufonce", { "", "", -1 } },
	    { "Mrshounka_Alfa_Romeo_civ", { "", "", -1 } },
	    { "Mrshounka_Alfa_Romeo_grise", { "", "", -1 } },
	    { "Mrshounka_a3_smart_civ_noir", { "", "", -1 } },
	    { "Mrshounka_a3_smart_civ", { "", "", -1 } },
	    { "Mrshounka_a3_smart_civ_bleu", { "", "", -1 } },
	    { "Mrshounka_a3_ds3_civ_civ_grise", { "", "", -1 } },
	    { "Mrshounka_a3_ds3_civ_noir", { "", "", -1 } },
	    { "Mrshounka_a3_ds3_civ_civ_rouge", { "", "", -1 } },
	    { "Mrshounka_a3_308_civ_violet", { "", "", -1 } },
	    { "Mrshounka_a3_308_civ_noir", { "", "", -1 } },
	    { "Jonzie_Galant", { "", "", -1 } },
	    { "Mrshounka_c4_p_civ", { "", "", -1 } },
	    { "Mrshounka_c4_p_noir", { "", "", -1 } },
	    { "Mrshounka_c4_p_orange", { "", "", -1 } },
	    { "Mrshounka_cherokee_noir", { "", "", -1 } },
	    { "Mrshounka_cherokee_noir_bleu", { "", "", -1 } },
	    { "Mrshounka_cherokee_noir_rouge", { "", "", -1 } },
	    { "Jonzie_Escalade", { "", "", -1 } },
	    { "shounka_avalanche", { "", "", -1 } },
	    { "shounka_avalanche_noir", { "", "", -1 } },
	    { "shounka_avalanche_orange", { "", "", -1 } },
	    { "shounka_avalanche_violet", { "", "", -1 } },
	    { "shounka_avalanche_grise", { "", "", -1 } },
	    { "shounka_avalanche_bleufonce", { "", "", -1 } },
	    { "shounka_porsche911_rouge", { "", "", -1 } },
	    { "shounka_porsche911_noir", { "", "", -1 } },
	    { "shounka_rs6_rouge", { "", "", -1 } },
	    { "shounka_rs6_orange", { "", "", -1 } },
	    { "shounka_rs6_noir", { "", "", -1 } },
	    { "shounka_rs6_grise", { "", "", -1 } },
	    { "Mrshounka_bmwm6_noir", { "", "", -1 } },
	    { "Mrshounka_bmwm6_bleufonce", { "", "", -1 } },
	    { "Mrshounka_bmwm6_rouge", { "", "", -1 } },
	    { "Mrshounka_bmwm6_orange", { "", "", -1 } },
	    { "shounka_a3_rs5_civ", { "", "", -1 } },
	    { "Mrshounka_mustang_bleufonce", { "", "", -1 } },
	    { "Mrshounka_mustang_jaune", { "", "", -1 } },
	    { "Mrshounka_mustang_noir", { "", "", -1 } },
	    { "shounka_clk_noir", { "", "", -1 } },
	    { "shounka_clk_orange", { "", "", -1 } },
	    { "shounka_clk_grise", { "", "", -1 } },
	    { "C_Hatchback_01_sport_F", { "", "", -1 } },
	    { "Mrshounka_mustang_jaune", { "", "", -1 } },
	    { "Mrshounka_mustang_noir", { "", "", -1 } },
	    { "shounka_clk_noir", { "", "", -1 } },
	    { "shounka_clk_orange", { "", "", -1 } },
	    { "shounka_clk_grise", { "", "", -1 } },
	    { "Mrshounka_a3_dodge15_civ_noir", { "", "", -1 } },
	    { "Mrshounka_a3_dodge15_civ_bleufonce", { "", "", -1 } },
	    { "Mrshounka_a3_dodge15_civ_rouge", { "", "", -1 } },
	    { "Mrshounka_a3_dodge15_civ_grise", { "", "", -1 } },
	    { "Mrshounka_a3_dodge15_civ_rose", { "", "", -1 } },
	    { "Mrshounka_a3_dodge15_civ_violet", { "", "", -1 } },
	    { "Mrshounka_bmwm1_civ_grise", { "", "", -1 } },
	    { "Mrshounka_bmwm1_civ_noir", { "", "", -1 } },
	    { "Mrshounka_bmwm1_civ_violet", { "", "", -1 } },
	    { "Jonzie_VE", { "", "", -1 } },
	    { "C_Van_01_transport_F", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "shounka_nemo_grise", { "", "", -1 } },
            { "shounka_nemo_noir", { "", "", -1 } },
            { "shounka_nemo_orange", { "", "", -1 } },
            { "Jonzie_Transit", { "", "", -1 } },
            { "shounka_a3_spr_civ_grise", { "", "", -1 } },
            { "Jonzie_Tanker_Truck", { "", "", -1 } },
            { "Jonzie_Box_Truck", { "", "", -1 } },
            { "shounka_ivceco_bleufonce", { "", "", -1 } },
        };
    };

    class civ_exotic {
        side = "civ";
        vehicles[] = {
            { "Mrshounka_yamaha_p_rose", { "", "", -1 } },
            { "Mrshounka_ducati_p", { "", "", -1 } },
            { "shounka_transam_rouge", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_grise", { "", "", -1 } },
            { "Mrshounka_subaru08_bleufonce", { "", "", -1 } },
            { "Mrshounka_a3_gtr_civ_noir", { "", "", -1 } },
            { "Mrshounka_bmwm6_civ", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ_bleufonce", { "", "", -1 } },
	        { "Jonzie_STI", { "", "", -1 } },
	        { "Mrshounka_evox_civ", { "", "", -1 } },
	        { "Jonzie_Viper", { "", "", -1 } },
	        { "shounka_f430_spider", { "", "", -1 } },
	        { "shounka_mp4_grise", { "", "", -1 } },
	        { "Mrshounka_veneno_c_noir", { "", "", -1 } },
	        { "Mrshounka_pagani_c_grise", { "", "", -1 } },
	        { "shounka_limo_civ", { "", "", -1 } }


        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "vn_cvpi_redcross", { "", "", -1 } },
            { "vn_taurus_redcross1", { "", "", -1 } },
            { "vn_taurus_redcross2", { "", "", -1 } },
            { "vn_charger_redcross", { "", "", -1 } },
            { "vn_evo_redcross1", { "", "", -1 } },
            { "vn_evo_redcross2", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "sab_UN_Car", { "", "", -1 } },
            { "sab_UN_Offroad", { "", "", -1 } },
	          { "sab_UN_SUV", { "", "", -1 } },
            { "vn_taurus_unitednations1", { "", "", -1 } },
            { "vn_taurus_unitednations2", { "", "", -1 } },
            { "vn_cvpi_unitednations", { "", "", -1 } },
            { "vn_charger_unitednations", { "", "", -1 } },
            { "vn_evo_unitednations", { "", "", -1 } },
            { "vn_suv_unitednations_spc", { "", "", -1 } },
	        { "sab_UN_Hunter", { "", "", -1 } },
	        { "sab_UN_Truck_O", { "", "", -1 } },
	        { "sab_UN_Strider", { "", "", -1 } },
	        { "sab_UN_Offroad_gun", { "", "", -1 } },
	        { "sab_UN_Panther", { "", "", -1 } },
	        { "sab_UN_CRV", { "", "", -1 } },
	        { "sab_UN_APC", { "", "", -1 } },
	        { "sab_UN_Kuma", { "", "", -1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "sab_UN_bird_civil", { "", "", -1 } },
	        { "sab_UN_bird", { "", "", -1 } },
	        { "sab_UN_pawnee", { "", "", -1 } },
	        { "sab_UN_Heli", { "", "", -1 } },
	        { "sab_UN_Large_Heli", { "", "", -1 } },
	        { "sab_UN_attackHeli", { "", "", -1 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = { };
    };

    class Mrshounka_Vandura_civ_noir {
        vItemSpace = 500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 3500;
        textures[] = { };
    };

    class Mrshounka_Vandura_civ_bleufonce {
        vItemSpace = 500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 3500;
        textures[] = { };
    };

    class Mrshounka_Vandura_civ_grise {
        vItemSpace = 500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 3500;
        textures[] = { };
    };

    class Mrshounka_Vandura_civ_orange {
        vItemSpace = 500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 3500;
        textures[] = { };
    };

    class Mrshounka_Vandura_civ_rouge {
        vItemSpace = 500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 3500;
        textures[] = { };
    };

    class Mrshounka_r5_bleufonce {
        vItemSpace = 190;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 4500;
        textures[] = { };
    };

    class Mrshounka_r5_rouge {
        vItemSpace = 190;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 4500;
        textures[] = { };
    };


    class Mrshounka_r5_violet {
        vItemSpace = 190;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 4500;
        textures[] = { };
    };


    class Mrshounka_r5_jaune {
        vItemSpace = 190;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 4500;
        textures[] = { };
    };


    class Mrshounka_r5_noir {
        vItemSpace = 190;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 4500;
        textures[] = { };
    };


    class Jonzie_Mini_Cooper {
        vItemSpace = 190;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 6500;
        textures[] = { };
    };

     class Jonzie_30CSL {
        vItemSpace = 190;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 8000;
        textures[] = { };
    };

    class Mrshounka_lincoln_civ {
        vItemSpace = 233;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 9000;
        textures[] = { };
    };

    class Mrshounka_lincoln_noir {
        vItemSpace = 233;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 9000;
        textures[] = { };
    };


    class Mrshounka_lincoln_orange {
        vItemSpace = 233;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 9000;
        textures[] = { };
    };


    class Mrshounka_lincoln_grise {
        vItemSpace = 233;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 9000;
        textures[] = { };
    };


    class Mrshounka_lincoln_bleufonce {
        vItemSpace = 233;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 9000;
        textures[] = { };
    };

    class Mrshounka_Alfa_Romeo_noir {
        vItemSpace = 120;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 9900;
        textures[] = { };
    };

    class Mrshounka_Alfa_Romeo_bleufonce {
        vItemSpace = 120;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 9900;
        textures[] = { };
    };

    class Mrshounka_Alfa_Romeo_civ {
        vItemSpace = 120;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 9900;
        textures[] = { };
    };

    class Mrshounka_Alfa_Romeo_grise {
        vItemSpace = 120;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 9900;
        textures[] = { };
    };

    class Mrshounka_a3_smart_civ_noir {
        vItemSpace = 120;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 10500;
        textures[] = { };
    };

    class Mrshounka_a3_smart_civ {
        vItemSpace = 120;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 10500;
        textures[] = { };
    };

    class Mrshounka_a3_smart_civ_bleu {
        vItemSpace = 120;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 10500;
        textures[] = { };
    };

    class Mrshounka_a3_ds3_civ_civ_grise {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 11500;
        textures[] = { };
    };
    class Mrshounka_a3_ds3_civ_noir {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 11500;
        textures[] = { };
    };

    class Mrshounka_a3_ds3_civ_civ_rouge {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 11500;
        textures[] = { };
    };

    class Mrshounka_a3_308_civ_violet {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 11500;
        textures[] = { };
    };

    class Mrshounka_a3_308_civ_noir {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 11500;
        textures[] = { };
    };

    class Jonzie_Galant {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 13000;
        textures[] = { };
    };

     class Mrshounka_c4_p_civ {
        vItemSpace = 380;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 13500;
        textures[] = { };
    };

    class Mrshounka_c4_p_noir {
        vItemSpace = 380;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 13500;
        textures[] = { };
    };
    class Mrshounka_c4_p_orange {
        vItemSpace = 380;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 13500;
        textures[] = { };
    };

    class Mrshounka_cherokee_noir {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 16000;
        textures[] = { };
    };

    class Mrshounka_cherokee_noir_bleu {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 16000;
        textures[] = { };
    };

    class Mrshounka_cherokee_noir_rouge {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 16000;
        textures[] = { };
    };

    class Jonzie_Escalade {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 18000;
        textures[] = { };
    };

    class shounka_avalanche {
        vItemSpace = 800;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class shounka_avalanche_noir {
        vItemSpace = 800;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class shounka_avalanche_orange {
        vItemSpace = 800;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class shounka_avalanche_violet {
        vItemSpace = 800;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class shounka_avalanche_grise {
        vItemSpace = 800;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class shounka_avalanche_bleufonce {
        vItemSpace = 800;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class shounka_porsche911_rouge {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 23000;
        textures[] = { };
    };
    class shounka_porsche911_noir {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 23000;
        textures[] = { };
    };

    class shounka_rs6_rouge {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 27000;
        textures[] = { };
    };

    class shounka_rs6_orange {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 27000;
        textures[] = { };
    };

    class shounka_rs6_noir {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 27000;
        textures[] = { };
    };

    class shounka_rs6_grise {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 27000;
        textures[] = { };
    };

    class Mrshounka_bmwm6_noir {
        vItemSpace = 400;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };

    class Mrshounka_bmwm6_bleufonce {
        vItemSpace = 400;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };

    class Mrshounka_bmwm6_rouge {
        vItemSpace = 400;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };

    class Mrshounka_bmwm6_orange {
        vItemSpace = 400;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };

    class shounka_a3_rs5_civ {
        vItemSpace = 500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 33000;
        textures[] = { };
    };

    class Mrshounka_mustang_bleufonce {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };

    class Mrshounka_mustang_jaune {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };

    class Mrshounka_mustang_noir {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };

    class shounka_clk_noir {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 37000;
        textures[] = { };
    };

    class shounka_clk_orange {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 37000;
        textures[] = { };
    };
    class shounka_clk_grise {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 37000;
        textures[] = { };
    };
    class Mrshounka_a3_dodge15_civ_noir {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 42000;
        textures[] = { };
    };

    class Mrshounka_a3_dodge15_civ_bleufonce {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 42000;
        textures[] = { };
    };

    class Mrshounka_a3_dodge15_civ_rouge {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 42000;
        textures[] = { };
    };

    class Mrshounka_a3_dodge15_civ_grise {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 42000;
        textures[] = { };
    };
	
	class Mrshounka_a3_dodge15_civ_violet {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 42000;
        textures[] = { };
    };

    class Mrshounka_a3_dodge15_civ_rose {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 42000;
        textures[] = { };
    };

    class Mrshounka_bmwm1_civ_grise {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = { };
    };

    class Mrshounka_bmwm1_civ_noir {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = { };
    };

    class Mrshounka_bmwm1_civ_violet {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = { };
    };

    class Jonzie_VE {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 49000;
        textures[] = { };
    };

    class shounka_nemo_grise {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 49000;
        textures[] = { };
    };

    class shounka_nemo_noir {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 49000;
        textures[] = { };
    };

    class shounka_nemo_orange {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 49000;
        textures[] = { };
    };

    class Jonzie_Transit {
        vItemSpace = 850;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 59000;
        textures[] = { };
    };

    class shounka_a3_spr_civ_grise {
        vItemSpace = 900;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 68000;
        textures[] = { };
    };

    class Jonzie_Tanker_Truck {
        vItemSpace = 950;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 78000;
        textures[] = { };
    };

    class Jonzie_Box_Truck {
        vItemSpace = 980;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 88000;
        textures[] = { };
    };

    class shounka_ivceco_bleufonce {
        vItemSpace = 1000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class Mrshounka_yamaha_p_rose {
        vItemSpace = 10;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class Mrshounka_ducati_p {
        vItemSpace = 10;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 120500;
        textures[] = { };
    };

    class shounka_transam_rouge {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };

     class Mrshounka_mercedes_190_p_grise {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 160000;
        textures[] = { };
    };

    class Mrshounka_subaru08_bleufonce {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 180000;
        textures[] = { };
    };

    class Mrshounka_a3_gtr_civ_noir {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };

    class Mrshounka_bmwm6_civ {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 210000;
        textures[] = { };
    };

    class Mrshounka_bmwm1_civ_bleufonce {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 240000;
        textures[] = { };
    };

    class Jonzie_STI {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 280000;
        textures[] = { };
    };

    class Mrshounka_evox_civ {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };
    class Jonzie_Viper {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 330000;
        textures[] = { };
    };
    class shounka_f430_spider {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 400000;
        textures[] = { };
    };

    class shounka_mp4_grise {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 430000;
        textures[] = { };
    };

    class Mrshounka_veneno_c_noir {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 470000;
        textures[] = { };
    };

    class Mrshounka_pagani_c_grise {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 500000;
        textures[] = { };
    };

    class shounka_limo_civ {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 520000;
        textures[] = { };
    };

    class sab_UN_SUV {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = { };
    };

    class sab_UN_Offroad {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = { };
    };

    class sab_UN_Hunter {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = { };
    };

    class sab_UN_Truck_O {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = { };
    };

     class sab_UN_Offroad_gun {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };

    class sab_UN_APC {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 15000;
        textures[] = { };
    };

    class sab_UN_CRV {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class sab_UN_Panther {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = { };
    };

    class sab_UN_Kuma {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };

    class sab_UN_bird_civil {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = { };
    };

    class sab_UN_Heli {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = { };
    };

    class sab_UN_Large_Heli {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = { };
    };

     class sab_UN_pawnee {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };

    class sab_UN_Heli_armed {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };


    class sab_UN_attackHeli {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {""}, {"cAir"}, {"mAir"}, {""} };
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        licenses[] = { {"" }, {""}, {"mAir"}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };
};
