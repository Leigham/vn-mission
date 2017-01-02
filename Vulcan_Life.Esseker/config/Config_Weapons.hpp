/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_m9", "", 8500, 500 },
            { "ice123_seeker_bow", "", 8500, 500 },
            { "RH_fn57", "", 10000, -1 },
            { "RH_fnp45", "", 12000, -1 },
            { "RH_g17", "", 13000, -1 },
	        { "RH_usp", "", 16000, -1 },
	        { "RH_tec9", "", 17000, -1 }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 25 },
            { "RH_20Rnd_57x28_FN", "", 50 },
            { "RH_15Rnd_45cal_fnp", "", 50 },
	        { "RH_12Rnd_45cal_usp", "", 50 },
	        { "RH_32Rnd_9x19_tec", "", 50 },
            { "RH_17Rnd_9x19_g17", "", 75 },
	        { "ice123_bowmag", "", 75 }
        };
        accs[] = {
            { "optic_MRD", "", 3500 },
	        { "RH_gemtech9", "", 3500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
           { "RH_bull", "", 35000, 2500 },
           { "RH_kimber_nw", "", 36000, 5000 },
           { "RH_Deagles", "", 37000, -1 },
           { "RH_muzi", "", 40000, 7500 },
	       { "hlc_rifle_SLRchopmod", "", 54000, 7500 },
	       { "UK3CB_BAF_L22A2", "", 58000, 7500 },
	       { "UK3CB_BAF_L91A1", "", 61000, 7500 },
	       { "hlc_rifle_ak74", "", 78000, 7500 },
	       { "hlc_rifle_rpk", "", 81000, 7500 },
	       { "hlc_rifle_honeybadger", "", 98000, 7500 },
	       { "hlc_rifle_CQBR", "", 100000, 7500 },
	       { "hlc_rifle_bcmjack", "", 127000, 7500 },
	       { "hlc_rifle_FAL5000", "", 132000, 7500 },
	       { "UK3CB_BAF_L115A3", "", 140000, 7500 },
	       { "HandGrenade", "", 52000, 7500 },
           { "optic_ACO_grn", "", 3500 },
           { "optic_Holosight", "", 3500 },
           { "optic_Hamr", "", 3500 },
           { "hlc_optic_kobra", "", 3500 },
           { "optic_LRPS", "", 7500 },
           { "muzzle_snds_M", "", 7500 },
           { "hlc_muzzle_545SUP_AK", "", 7500 },
           { "muzzle_snds_B", "", 7500 }
        };
        mags[] = {
        { "RH_6Rnd_454_Mag", "", 300 },
        { "RH_7Rnd_45cal_m1911", "", 275 },
        { "RH_7Rnd_50_AE", "", 500 },
        { "RH_30Rnd_9x19_UZI", "", 125 },
	    { "UK3CB_BAF_30Rnd", "", 125 },
	    { "UK3CB_BAF_30Rnd_9mm", "", 125 },
	    { "hlc_30Rnd_545x39_B_AK", "", 125 },
	    { "hlc_75Rnd_762x39_m_rpk", "", 125 },
	    { "29rnd_300BLK_STANAG", "", 125 },
	    { "hlc_30rnd_556x45_EPR", "", 125 },
	    { "hlc_20Rnd_762x51_B_fal", "", 125 },
	    { "UK3CB_BAF_L115A3_Mag", "", 125 },
	    { "UK3CB_BAF_AT4_Mag_Used", "", 125 }


        };
        accs[] = {
        { "optic_ACO_grn", "", 3500 },
        { "optic_Holosight", "", 3500 },
        { "optic_Hamr", "", 3500 },
	    { "hlc_optic_kobra", "", 3500 },
	    { "optic_LRPS", "", 7500 },
	    { "muzzle_snds_M", "", 7500 },
	    { "hlc_muzzle_545SUP_AK", "", 7500 },
        { "muzzle_snds_B", "", 7500 }
        };
    };

    class bow {
        name = "Aarons Archery";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ice123_seeker_bow", "", 6500, 500 }
        };
        mags[] = {
            { "ice123_bowmag", "", 75 }
        };
        accs[] = {
            { "optic_MRD", "", 3500 },
	    { "RH_gemtech9", "", 3500 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class f_station_store {
        name = "Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };
    class genstore {
        name = "General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "NVGoggles", "", 2000, 980 },
            { "tf_anprc152", "", 1200, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };




    //Cop Shops
      class UNInfantry {
        name = "UN Infantry Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {

			{ "DDOPP_X3", "X3 Taser", 0,0}, //Taser
            { "UN_arifle_TRG20_F", "", 1500, 1500 },  //TAR 21 (Blue)
			{ "hlc_rifle_M4", "", 1500, 1500 }, //Colt M4 Carbine
            { "acc_flashlight", "", 650 },
			{ "tf_anprc152", "", 0, 0 },
            { "Binocular", "", 0, 0 },
            { "ItemGPS", "", 0, 0 },
            { "TRYK_Shemagh_G_NV", "TRYK Shemagh NV", 0, 0 }
        };
        mags[] = {

			{ "DDOPP_3Rnd_X3", "", 25 },
            { "30Rnd_556x45_Stanag", "", 25 },
			{ "hlc_30rnd_556x45_EPR", "", 25 }
        };
        accs[] = {
            { "optic_Aco", "", 650 },
            { "optic_Aco_grn", "", 650 },
            { "UK3CB_BAF_Eotech", "", 650 }
        };
    };

   class UNSupervisor {
        name = "UN Supervisor Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {

			{ "DDOPP_X3", "X3 Taser", 0,0}, //Taser
            { "hlc_rifle_CQBR", "", 1500, 1500 },  //M4 CQB-R
			{ "hlc_rifle_M4", "", 1500, 1500 }, //Colt M4 Carbine
            { "hlc_rifle_bcmjack", "", 1500, 1500 },  //Jack Carbine
			{ "hlc_rifle_RU556", "", 1500, 1500 }, //Sanatised Carbine
            { "RH_g17", "", 1500, 1500 }, //Glock 17
            { "acc_flashlight", "", 650 },
			{ "tf_anprc152", "", 0, 0 },
            { "Binocular", "", 0, 0 },
            { "ItemGPS", "", 0, 0 },
            { "TRYK_Shemagh_G_NV", "TRYK Shemagh NV", 0, 0 }
        };
        mags[] = {

			{ "DDOPP_3Rnd_X3", "", 25 },
            { "30Rnd_556x45_Stanag", "", 25 },
			{ "hlc_30rnd_556x45_EPR", "", 25 }
        };
        accs[] = {
            { "optic_Hamr", "", 650 },
            { "optic_Arco_blk_F", "", 650 },
            { "UK3CB_BAF_SpecterLDS_Dot_3D", "", 650 },
            { "UK3CB_BAF_Eotech", "", 650 }
        };
    };
    
    class UNHeavyWeapons {
        name = "UN Heavy Weapons/Marksman Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {

			{ "UK3CB_BAF_L129A1_FGrip", "L129A1 DMR", 0,0}, //DMR
            { "UK3CB_BAF_L115A3", "L115A3 .338 Lapua", 1500, 1500 },  //.338 Lapua
			{ "UK3CB_BAF_L110A2_FIST", "L110A2 LMG", 1500, 1500 }, //LMG
            { "UK3CB_BAF_NLAW_Launcher", "NLAW Launcher", 1500, 1500 }, //Rocket Launcher
            { "IEDUrbanSmall_Remote_Mag", "", 1500, 0 },
			{ "SatchelCharge_Remote_Mag", "", 1500, 0 },
            { "DemoCharge_Remote_Mag", "", 1500, 0 }
        };
        mags[] = {

			{ "UK3CB_BAF_20Rnd", "", 25 },
            { "UK3CB_BAF_L115A3_Mag", "", 25 },
			{ "UK3CB_BAF_200Rnd", "", 25 },
            { "UK3CB_BAF_NLAW_Mag", "", 25 }
            
        };
        accs[] = {
            { "UK3CB_BAF_TA648", "", 650 },
            { "optic_LRPS", "", 650 },
            { "optic_AMS", "", 650 },
            { "UK3CB_BAF_Eotech", "", 650 },
            { "UK3CB_BAF_TA31F_3D", "", 650 },
            { "UK3CB_BAF_Silencer_L115A3", "", 650 },
            { "hlc_muzzle_556NATO_KAC", "", 650 },
            { "hlc_muzzle_300blk_KAC", "", 650 }
        };
    };
    
    class UNLowCommand {
        name = "UN Low Command Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {

			{ "DDOPP_X3", "X3 Taser", 0,0}, //Taser
            { "hlc_rifle_honeybadger", "", 1500, 1500 },  //Honey Badger
			{ "hlc_rifle_falosw", "", 1500, 1500 }, //FAL
            { "RH_fnp45", "", 1500, 1500 }, //Fnp45
            { "RH_g17", "", 1500, 1500 }, //Glock 17
			{ "tf_anprc152", "", 0, 0 },
            { "Binocular", "", 0, 0 },
            { "ItemGPS", "", 0, 0 },
            { "TRYK_Shemagh_G_NV", "TRYK Shemagh NV", 0, 0 }
        };
        mags[] = {

			{ "DDOPP_3Rnd_X3", "", 25 },
            { "29rnd_300BLK_STANAG", "", 25 },
			{ "29rnd_300BLK_STANAG_S", "", 25 },
            { "hlc_20Rnd_762x51_mk316_fal", "", 25 },
            { "hlc_50rnd_762x51_M_FAL", "", 25 }
            
        };
        accs[] = {
            { "optic_Holosight", "", 650 },
            { "optic_Hamr", "", 650 },
            { "optic_Arco_blk_F", "", 650 },
            { "UK3CB_BAF_SpecterLDS_Dot_3D", "", 650 },
            { "UK3CB_BAF_Eotech", "", 650 }
        };
    };
    
     class UNHighCommand {
        name = "UN High Command Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {

			{ "DDOPP_X3", "X3 Taser", 0,0}, //Taser
            { "hlc_rifle_CQBR", "", 1500, 1500 },  //M4 CQB-R
			{ "hlc_rifle_M4", "", 1500, 1500 }, //Colt M4 Carbine
            { "hlc_rifle_bcmjack", "", 1500, 1500 },  //Jack Carbine
            { "hlc_rifle_RU556", "", 1500, 1500 }, //Sanatised Carbine
            { "RH_fnp45", "", 1500, 1500 }, //Fnp45
            { "RH_g17", "", 1500, 1500 }, //Glock 17
			{ "tf_anprc152", "", 0, 0 },
            { "Binocular", "", 0, 0 },
            { "ItemGPS", "", 0, 0 },
            { "TRYK_Shemagh_G_NV", "TRYK Shemagh NV", 0, 0 }
        };
         mags[] = {

			{ "DDOPP_3Rnd_X3", "", 25 },
			{ "hlc_30rnd_556x45_EPR", "", 25 },
            { "hlc_50rnd_556x45_EPR", "", 25 },
            { "RH_15Rnd_45cal_fnp", "", 25 },
            { "RH_17Rnd_9x19_g17", "", 25 }
        };
        accs[] = {
            { "optic_Holosight", "", 650 },
            { "optic_Hamr", "", 650 },
            { "optic_Arco_blk_F", "", 650 },
            { "UK3CB_BAF_SpecterLDS_Dot_3D", "", 650 },
            { "UK3CB_BAF_Eotech", "", 650 }
        };
    };
    class UNUndercover {
        name = "UN Undercover Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {

            { "hlc_rifle_ak12", "", 1500, 1500 },  //AK12
            { "RH_fnp45", "", 1500, 1500 }, //Fnp45
			{ "tf_anprc152", "", 0, 0 },
            { "Binocular", "", 0, 0 },
            { "ItemGPS", "", 0, 0 },
            { "TRYK_Shemagh_G_NV", "TRYK Shemagh NV", 0, 0 }
        };
         mags[] = {

			{ "hlc_30Rnd_545x39_B_AK", "", 25 },
			{ "RH_15Rnd_45cal_fnp", "", 25 }
        };
        accs[] = {
            { "RH_gemtech45", "", 650 },
            { "hlc_muzzle_545SUP_AK", "", 650 },
            { "UK3CB_BAF_Eotech", "", 650 }
        };
    };
    
    class UNSpecialForces {
        name = "UN Special Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {

			{ "DDOPP_X3", "X3 Taser", 0,0}, //Taser
            { "hlc_rifle_samr2", "", 1500, 1500 },  //RRA LAR-15
			{ "hlc_rifle_bcmjack", "", 1500, 1500 }, //Jack Carbine
            { "RH_fnp45", "", 1500, 1500 }, //Fnp45
            { "RH_g17", "", 1500, 1500 }, //Glock 17
			{ "tf_anprc152", "", 0, 0 },
            { "Binocular", "", 0, 0 },
            { "ItemGPS", "", 0, 0 },
            { "TRYK_Shemagh_G_NV", "TRYK Shemagh NV", 0, 0 }
        };
         mags[] = {

			{ "DDOPP_3Rnd_X3", "", 25 },
			{ "hlc_30rnd_556x45_EPR", "", 25 },
            { "hlc_50rnd_556x45_EPR", "", 25 },
            { "RH_15Rnd_45cal_fnp", "", 25 },
            { "RH_17Rnd_9x19_g17", "", 25 }
        };
        accs[] = {
            { "hlc_muzzle_556NATO_KAC", "", 650 },
            { "RH_gemtech45", "", 650 },
            { "acc_pointer_IR", "", 650 },
            { "optic_Hamr", "", 650 },
            { "optic_DMS", "", 650 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "Red Cross Equipment";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_uspm", "", 500, 45 },
            { "UK3CB_BAF_L91A1", "", 500, 45 },
            { "hlc_rifle_Colt727", "", 500, 45 },
            { "UK3CB_BAF_Eotech", "", 500, 45 },
            { "hlc_rifle_Bushmaster300", "", 500, 45 },
            { "optic_Hamr", "", 100, 45 },
            { "optic_Arco", "", 100, 45 },
            { "optic_Aco", "", 100, 45 },
            { "optic_MRCO", "", 100, 45 },
			{ "tf_anprc152", "", 0, 0 },
            { "ItemGPS", "", 0, 45 },
            { "Binocular", "", 0, -1 },
            { "TRYK_Shemagh_G_NV", "TRYK Shemagh NV", 0, 0 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 25},
            { "RH_16Rnd_40cal_usp", "", 25},
            { "UK3CB_BAF_30Rnd_9mm", "", 25},
			{ "29rnd_300BLK_STANAG", "", 25}
        };
        accs[] = {};
    };
};
