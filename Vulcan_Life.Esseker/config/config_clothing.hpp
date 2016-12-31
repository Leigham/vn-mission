/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";

      uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "vn_bravehorse", "", 250, { "", "", -1 } },
            { "vn_deathmetalunicorn", "", 250, { "", "", -1 } },
            { "vn_icebear", "", 250, { "", "", -1 } },
            { "vn_majesticaf", "", 250, { "", "", -1 } },
            { "vn_mrwolf", "", 250, { "", "", -1 } },
            { "vn_nestingeagles", "", 250, { "", "", -1 } },
            { "vn_panda", "", 250, { "", "", -1 } },
            { "vn_redfox", "", 250, { "", "", -1 } },
            { "vn_rooHappy", "", 250, { "", "", -1 } },
            { "vn_sexystormtrooper", "", 250, { "", "", -1 } },
            { "vn_spaceman", "", 250, { "", "", -1 } },
            { "vn_speedisrelative", "", 250, { "", "", -1 } },
            { "vn_teenagemutantninjapugs", "", 250, { "", "", -1 } },
            { "vn_theraven", "", 250, { "", "", -1 } },
            { "vn_uni-cone", "", 250, { "", "", -1 } },
            { "KAEL_SUITS_BR_F22", "", 250, { "", "", -1 } },
            { "KAEL_SUITS_BR_F34", "", 250, { "", "", -1 } },
            { "cg_mayan1", "Mayan Shirt", 250, { "", "", -1 } },
            { "cg_joker1", "The Joker Shirt", 250, { "", "", -1 } },
            { "cg_got1", "Game Of Thrones Shirt", 250, { "", "", -1 } },
            { "cg_bb1", "Dunkin' Doughnut Shirt", 250, { "", "", -1 } },
            { "vacationshirt_uni", "Vacation Shirt", 250, { "", "", -1 } },
            {"cg_burgerking1", "Burger King Shirt", 250, { "", "", -1 } },
            {"cg_condoms1", "Condoms Shirt", 250, { "", "", -1 } },
            {"cg_dad1", "Dad Polo Shirt", 250, { "", "", -1 } },
            {"cg_hearts1", "Heart Shirt <3", 250, { "", "", -1 } },
            {"skullshirt_uni", "Skull Shirt", 250, { "", "", -1 } },
            {"A3L_SkullBlack", "Skull Back", 250, { "", "", -1 } },
            {"A3L_SkidRow", "Skid Row", 250, { "", "", -1 } },
            {"cg_taylorswift1", "Taylor Swift", 250, { "", "", -1 } },
            {"cg_kfc1", "KFC Shirt", 250, { "", "", -1 } },
            {"TRYK_T_TAN_PAD", "", 250, { "", "", -1 } },
            {"TRYK_T_BLK_PAD", "", 250, { "", "", -1 } },
            {"TRYK_T_OD_PAD", "", 250, { "", "", -1 } },
            {"TRYK_shirts_BLK_PAD_YEL", "", 250, { "", "", -1 } },
            {"TRYK_shirts_TAN_PAD_RED2", "", 250, { "", "", -1 } },
            {"TRYK_U_B_fleece_UCP", "", 250, { "", "", -1 } },
            {"TRYK_U_B_fleece", "", 250, { "", "", -1 } },
	          {"TRYK_U_B_AOR2_BLK_R_CombatUniform", "", 250, { "", "", -1 } },
	          {"TRYK_U_B_PCUHsW2", "", 250, { "", "", -1 } },
            {"TRYK_U_B_PCUHsW6", "", 250, { "", "", -1 } },
	          {"TRYK_U_B_Denim_T_WH", "", 250, { "", "", -1 } },
	          {"TRYK_U_B_Denim_T_BK", "", 250, { "", "", -1 } },
		        {"TRYK_U_B_Denim_T_BG_WH", "", 250, { "", "", -1 } },
          	{"TRYK_U_B_Denim_T_BG_BK", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_RED_T_BR", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_RED_T_BG_BR", "", 250, { "", "", -1 } },
			      {"TRYK_T_camo_tan", "", 250, { "", "", -1 } },
			      {"TRYK_U_taki_BL", "", 250, { "", "", -1 } },
			      {"TRYK_U_taki_BLK", "", 250, { "", "", -1 } },
			      {"TRYK_U_taki_COY", "", 250, { "", "", -1 } },
			      {"TRYK_U_taki_wh", "", 250, { "", "", -1 } },
			      {"TRYK_U_taki_G_BL", "", 250, { "", "", -1 } },
			      {"TRYK_U_taki_G_BLK", "", 250, { "", "", -1 } },
			      {"TRYK_U_taki_G_COY", "", 250, { "", "", -1 } },
			      {"TRYK_U_taki_G_WH", "", 250, { "", "", -1 } },
			      {"TRYK_U_pad_j", "", 250, { "", "", -1 } },
			      {"TRYK_U_pad_j_blk", "", 250, { "", "", -1 } },
			      {"TRYK_U_denim_jersey_blu", "", 250, { "", "", -1 } },
			      {"TRYK_U_denim_jersey_blk", "", 250, { "", "", -1 } },
			      {"TRYK_U_denim_hood_nc", "", 250, { "", "", -1 } },
			      {"TRYK_U_denim_hood_mc", "", 250, { "", "", -1 } },
			      {"TRYK_U_denim_hood_blk", "", 250, { "", "", -1 } },
			      {"TRYK_U_denim_hood_3c", "", 250, { "", "", -1 } },
            {"TRYK_T_TAN_PAD", "", 250, { "", "", -1 } },
			      {"TRYK_T_OD_PAD", "", 250, { "", "", -1 } },
			      {"TRYK_T_BLK_PAD", "", 250, { "", "", -1 } },
			      {"TRYK_U_hood_nc", "", 250, { "", "", -1 } },
			      {"TRYK_U_hood_mc", "", 250, { "", "", -1 } },
			      {"TRYK_hoodie_Wood", "", 250, { "", "", -1 } },
			      {"TRYK_hoodie_FR", "", 250, { "", "", -1 } },
			      {"TRYK_U_pad_hood_tan", "", 250, { "", "", -1 } },
			      {"TRYK_U_pad_hood_Cl", "", 250, { "", "", -1 } },
			      {"TRYK_U_pad_hood_odBK", "", 250, { "", "", -1 } },
			      {"TRYK_U_nohoodPcu_gry", "", 250, { "", "", -1 } },
			      {"TRYK_U_pad_hood_BKT2", "", 250, { "", "", -1 } },
			      {"TRYK_U_pad_hood_Blk", "", 250, { "", "", -1 } },
			      {"TRYK_U_pad_hood_Blod", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_TAN_PAD_YEL", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_OD_PAD_YEL", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_BLK_PAD_YEL", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_PAD_YEL", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_TAN_PAD_RED2", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_OD_PAD_RED2", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_BLK_PAD_RED2", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_TAN_PAD", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_OD_PAD", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_BLK_PAD", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_TAN_PAD_BLU3", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_OD_PAD_BLU3", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_BLK_PAD_BLU3", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_TAN_PAD_BLW", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_OD_PAD_BLW", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_BLK_PAD_BLW", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_TAN_PAD_BL", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_TAN_PAD_BK", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_BLK_PAD_BK", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_WHB_Sleeve", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_WH_Sleeve", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_RED2_Sleeve", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_R_Sleeve", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_BWH_Sleeve", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_BL_Sleeve", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_BK_Sleeve", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_ylb_Sleeve", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_od_Sleeve", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_ylb", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_WHB", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_WH", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_RED2", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_R", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_od", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_BWH", "", 250, { "", "", -1 } },
			      {"TRYK_shirts_DENIM_BL", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_wh_tan_Rollup_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_wh_OD_Rollup_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_wh_blk_Rollup_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_BLK_tan_Rollup_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_BLK_OD_Rollup_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_AOR2_BLK_R_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_PCUODs", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_Wood_PCUs", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_Wood_PCUs_R", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_UCP_PCUs", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_UCP_PCUs_R", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_GRY_PCUs", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_GRY_PCUs_R", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_PCUGs_gry", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_PCUGs_BLK", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_PCUGs_OD_R", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_PCUGs_gry_R", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_PCUGs_BLK_R", "", 250, { "", "", -1 } },
       			{"TRYK_U_B_PCUODHs", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_PCUGHs", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_PCUHs", "", 250, { "", "", -1 } },
			      {"TRYK_U_Bts_GRYGRY_PCUs", "", 250, { "", "", -1 } },
			      {"TRYK_U_Bts_PCUGs", "", 250, { "", "", -1 } },
			      {"TRYK_U_Bts_PCUs", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_ODTANR_CombatUniformTshirt", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_ODTAN_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_OD_OD_R_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_OD_OD_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_NATO_OCP_BLK_R_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_OVERALL_SAGE_BLKboots", "", 250, { "", "", -1 } },
			      {"TRYK_OVERALL_flesh", "", 250, { "", "", -1 } },
			      {"TRYK_OVERALL_SAGE_BLKboots_nk_blk", "", 250, { "", "", -1 } },
			      {"TRYK_OVERALL_nok_flesh", "", 250, { "", "", -1 } },
			      {"TRYK_HRP_USMC", "", 250, { "", "", -1 } },
			      {"TRYK_HRP_khk", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_GRTANR_CombatUniformTshirt", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_GRTAN_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_fleece_UCP", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_fleece", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_3CD_BLK_BDUTshirt2", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_3CD_BLK_BDUTshirt", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_BLK_TAN_1", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_BLK_TAN_2", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_ODTAN_Tshirt", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_ODTAN", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_OD_BLK", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_OD_BLK_2", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_BLK_OD", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_BLK", "", 250, { "", "", -1 } },
    			  {"TRYK_U_B_BLK_Tshirt", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_BLKTAN", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_BLKTAN_Tshirt", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_C02_Tsirt", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_BLTAN_T", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_BLKTANR_CombatUniformTshirt", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_BLKTAN_CombatUniform", "", 250, { "", "", -1 } },
   			    {"TRYK_U_B_BLOD_T", "", 250, { "", "", -1 } },
	      		{"TRYK_U_B_BLKBLK_R_CombatUniform", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_PCUHsW3", "", 250, { "", "", -1 } },
			      {"TRYK_U_B_PCUHsW3nh", "", 250, { "", "", -1 } }
      };

      headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
	          {"TRYK_H_woolhat_WH", "", 150, { "", "", -1 } },
			      {"TRYK_H_woolhat_tan", "", 150, { "", "", -1 } },
			      {"TRYK_H_woolhat_CW", "", 150, { "", "", -1 } },
			      {"TRYK_H_woolhat_cu", "", 150, { "", "", -1 } },
			      {"TRYK_H_woolhat_br", "", 150, { "", "", -1 } },
			      {"TRYK_H_woolhat", "", 150, { "", "", -1 } },
			      {"TRYK_r_cap_tan_Glasses", "", 150, { "", "", -1 } },
			      {"TRYK_r_cap_od_Glasses", "", 150, { "", "", -1 } },
			      {"TRYK_r_cap_blk_Glasses", "", 150, { "", "", -1 } },
			      {"TRYK_R_CAP_OD_US", "", 150, { "", "", -1 } },
			      {"TRYK_R_CAP_TAN", "", 150, { "", "", -1 } },
			      {"TRYK_R_CAP_BLK", "", 150, { "", "", -1 } },
			      {"TRYK_H_pakol2", "", 150, { "", "", -1 } },
			      {"TRYK_H_headsetcap", "", 150, { "", "", -1 } },
			      {"TRYK_H_headsetcap_od", "", 150, { "", "", -1 } },
			      {"TRYK_H_headsetcap_blk", "", 150, { "", "", -1 } },
			      {"TRYK_H_headsetcap_blk_Glasses", "", 150, { "", "", -1 } },
			      {"TRYK_H_headsetcap_Glasses", "", 150, { "", "", -1 } },
			      {"TRYK_H_LHS_HEL_G", "", 150, { "", "", -1 } },
			      {"TRYK_H_Bandana_wig_g", "", 150, { "", "", -1 } },
			      {"TRYK_H_Bandana_wig", "", 150, { "", "", -1 } },
			      {"TRYK_H_Bandana_H", "", 150, { "", "", -1 } },
			      {"TRYK_Kio_Balaclava", "", 150, { "", "", -1 } }
      };

      goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } },
            { "G_Spectacles", "", 10, { "", "", -1 } },
            { "G_Sport_Red", "", 10, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 10, { "", "", -1 } },
            { "G_Shades_Red", "", 10, { "", "", -1 } },
            { "Masque_Alien1", "", 10, { "", "", -1 } },
            { "Masque_Anonymous", "", 10, { "", "", -1 } },
            { "Masque_Chains", "", 10, { "", "", -1 } },
            { "Payday_GeneralO", "", 10, { "", "", -1 } },
            { "Casque_Moto", "", 10, { "", "", -1 } },
            { "Masque_Clinton", "", 10, { "", "", -1 } },
            { "Masque_speedRunner", "", 10, { "", "", -1 } },
            { "Masque_Unic", "", 10, { "", "", -1 } },
            { "Masque_Aubrey", "", 10, { "", "", -1 } },
            { "Masque_Bonnie", "", 10, { "", "", -1 } },
            { "Masque_Bush", "", 10, { "", "", -1 } },
            { "Masque_Mempo", "", 10, { "", "", -1 } },
            { "Masque_Lincoln", "", 10, { "", "", -1 } },
            { "Masque_Wolfv2", "", 10, { "", "", -1 } },
            { "Masque_archNemesis", "", 10, { "", "", -1 } },
            { "Masque_Arnold", "", 10, { "", "", -1 } },
            { "Masque_Chuck", "", 10, { "", "", -1 } },
            { "Masque_Clover", "", 55, { "", "", -1 } },
            { "Masque_Fish", "", 55, { "", "", -1 } },
            { "Masque_Hockey", "", 55, { "", "", -1 } },
            { "Masque_Metalhead", "", 55, { "", "", -1 } },
            { "Masque_Religieuse", "", 55, { "", "", -1 } },
            { "Masque_Smiley", "", 55, { "", "", -1 } },
            { "Masque_Santa", "", 55, { "", "", -1 } },
            { "Masque_Momie", "", 55, { "", "", -1 } },
            { "Masque_Optimiste", "", 55, { "", "", -1 } },
            { "Masque_forceAlpha", "", 55, { "", "", -1 } },
            { "Masque_GdG", "", 55, { "", "", -1 } },
            { "Masque_Gombo", "", 55, { "", "", -1 } },
            { "Masque_Lion", "", 55, { "", "", -1 } },
            { "Masque_Orc", "", 55, { "", "", -1 } },
            { "Masque_Mark", "", 55, { "", "", -1 } },
            { "Masque_Macrilleuse", "", 55, { "", "", -1 } },
            { "Masque_Hoxton", "", 55, { "", "", -1 } },
            { "Masque_Incendiaire", "", 55, { "", "", -1 } },
            { "Masque_zeus", "", 55, { "", "", -1 } },
            { "Masque_Dallas", "", 55, { "", "", -1 } },
            { "Masque_Chirurgical", "", 55, { "", "", -1 } },
            { "Payday_Cagoule", "", 55, { "", "", -1 } },
            { "Masque_Solitaire", "", 55, { "", "", -1 } }
      };

      vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
      };

      backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 1000, { "", "", -1 } },
            { "VN_Space_B", "", 1000, { "", "", -1 } },
            { "VN_IceBear_B", "", 1000, { "", "", -1 } },
            { "VN_BraveHorse_B", "", 1000, { "", "", -1 } },
            { "VN_TheRaven_B", "", 1000, { "", "", -1 } },
            { "VN_SexyStormtrooper_B", "", 1000, { "", "", -1 } },
            { "VN_RedFox_B", "", 1000, { "", "", -1 } },
            { "VN_Panda_B", "", 1000, { "", "", -1 } }
        };
    };

    class UNInfantryClothing {
        title = "UN Infantry Clothing Shop";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "sab_UN_Officer_Clothing", "", 0, { "", "", -1 } },
            { "sab_UN_Soldier_ClothingP", "", 0, { "", "", -1 } },
            { "sab_UN_Soldier_Clothing", "", 0, { "", "", -1 } }
        };
        headgear[] =
        {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "sab_UN_Helmet", "", 0, { "", "", -1 } },
            { "sab_UN_capHP", "", 0, { "", "", -1 } },
            { "sab_UN_cap", "", 0, { "", "", -1 } },
            { "sab_UN_HelmetHeli", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "Mask_M40", "", 0, { "", "", -1 } },
            { "Mask_M40_OD", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "sab_UN_tVest", "", 0, { "", "", -1 } },
            { "sab_UN_CarrierRig", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "Invisible_Carryall", "", 0, { "", "", -1 } },
            { "AM_PoliceBelt", "", 0, { "", "", -1 } }
        };
    };
    class UNSupervisorClothing {
        title = "UN Supervisor Clothing Shop";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "sab_UN_Officer_Clothing", "", 0, { "", "", -1 } },
            { "sab_UN_Soldier_ClothingS", "", 0, { "", "", -1 } },
            { "sab_UN_Soldier_Clothing", "", 0, { "", "", -1 } }
        };
        headgear[] =
        {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "sab_UN_Helmet", "", 0, { "", "", -1 } },
            { "sab_UN_capHP", "", 0, { "", "", -1 } },
            { "sab_UN_cap", "", 0, { "", "", -1 } },
            { "sab_UN_HelmetHeli", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "Mask_M40", "", 0, { "", "", -1 } },
            { "Mask_M40_OD", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "vn_supervisorvest_unitednations", "", 0, { "", "", -1 } },
            { "sab_UN_CarrierRig", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "Invisible_Carryall", "", 0, { "", "", -1 } },
            { "AM_PoliceBelt", "", 0, { "", "", -1 } }
        };
    };
    class UNLowCommandClothing {
        title = "UN Low Command Clothing Shop";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "sab_UN_Officer_Clothing", "", 0, { "", "", -1 } },
            { "sab_UN_Soldier_ClothingS", "", 0, { "", "", -1 } },
            { "sab_UN_Soldier_Clothing", "", 0, { "", "", -1 } }
        };
        headgear[] =
        {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "vn_beret_unitednations", "", 0, { "", "", -1 } },
            { "sab_UN_Helmet", "", 0, { "", "", -1 } },
            { "sab_UN_capHP", "", 0, { "", "", -1 } },
            { "sab_UN_cap", "", 0, { "", "", -1 } },
            { "sab_UN_HelmetHeli", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "Mask_M40", "", 0, { "", "", -1 } },
            { "Mask_M40_OD", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "vn_lowcommandvest_unitednations", "", 0, { "", "", -1 } },
            { "sab_UN_CarrierRig", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "Invisible_Carryall", "", 0, { "", "", -1 } },
            { "AM_PoliceBelt", "", 0, { "", "", -1 } }
        };
    };
    class UNHighCommandClothing {
        title = "UN High Command Clothing Shop";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "sab_UN_Officer_Clothing", "", 0, { "", "", -1 } },
            { "sab_UN_Soldier_ClothingS", "", 0, { "", "", -1 } },
            { "sab_UN_Soldier_Clothing", "", 0, { "", "", -1 } }
        };
        headgear[] =
        {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "vn_beret_unitednations", "", 0, { "", "", -1 } },
            { "sab_UN_Helmet", "", 0, { "", "", -1 } },
            { "sab_UN_capHP", "", 0, { "", "", -1 } },
            { "sab_UN_cap", "", 0, { "", "", -1 } },
            { "sab_UN_HelmetHeli", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "Mask_M40", "", 0, { "", "", -1 } },
            { "Mask_M40_OD", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "vn_highcommandvest_unitednations", "", 0, { "", "", -1 } },
            { "sab_UN_CarrierRig", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "Invisible_Carryall", "", 0, { "", "", -1 } },
            { "AM_PoliceBelt", "", 0, { "", "", -1 } }
        };
    };
    class UNSpecialForcesClothing {
        title = "UN Special Forces Clothing Shop";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "vn_un_spcforces", "", 0, { "", "", -1 } },
            { "sab_UN_Officer_Clothing", "", 0, { "", "", -1 } },
            { "sab_UN_Soldier_ClothingS", "", 0, { "", "", -1 } },
            { "sab_UN_Soldier_Clothing", "", 0, { "", "", -1 } }
        };
        headgear[] =
        {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "vn_helmet_unitednations_spc", "", 0, { "", "", -1 } },
            { "vn_beret_unitednations_spc", "", 0, { "", "", -1 } },
            { "sab_UN_HelmetHeli", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "TRYK_kio_balaclava_ESS", "", 0, { "", "", -1 } },
            { "Mask_M40", "", 0, { "", "", -1 } },
            { "Mask_M40_OD", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "vn_specforces_vest", "", 0, { "", "", -1 } },
            { "sab_UN_CarrierRig", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "Invisible_Carryall", "", 0, { "", "", -1 } },
            { "AM_PoliceBelt", "", 0, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 50, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 2000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_blk", "", 1000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "redcross_novicemember_uniform_def", "NM - Uniform", 0, { "", "", -1 } },
            { "redcross_unitmember_uniform_def", "", 0, { "UM - Uniform", "", -1 } },
            { "redcross_subunitofficer_uniform_def", "SUO - Uniform", 0, { "", "", -1 } },
            { "redcross_unitofficer_uniform_def", "UO - Uniform", 0, { "", "", -1 } },
            { "redcross_areaunitdirector_uniform_def", "AUD - Uniform", 0, { "", "", -1 } },
            { "redcross_regionaldirector_uniform_def", "RD - Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "redcross_helmet", "", 0, { "", "", -1 } },
            { "redcross_highcommand_beret", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "Mask_M50", "", 0, { "", "", -1 } },
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "redcross_novicemember_vest", "NM - Vest", 0, { "", "", -1 } },
            { "redcross_unitmember_vest", "UM - Vest", 0, { "", "", -1 } },
            { "redcross_subunitofficer_vest", "SUO - Vest", 0, { "", "", -1 } },
            { "redcross_unitofficer_vest", "UO - Vest", 0, { "", "", -1 } },
            { "redcross_areaunitdirector_vest", "AUD - Vest", 0, { "", "", -1 } },
            { "redcross_regionaldirector_vest", "RD - Vest", 0, { "", "", -1 } }

        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "Invisible_Carryall", "", 0, { "", "", -1 } },
            { "AM_PoliceBelt", "", 0, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "TRYK_U_B_BLKTAN_CombatUniform", "", 500, {"", "", -1} },
            { "TRYK_U_Bts_PCUODs", "", 500, { "", "", -1 } },
            { "TRYK_U_B_OD_BLK_2", "", 500, { "", "", -1 } },
            { "TRYK_U_B_AOR2_BLK_R_CombatUniform", "", 500, { "", "", -1 } },
            { "TRYK_hoodie_Wood", "", 500, { "", "", -1 } },
            { "TRYK_U_B_WDL_GRY_R_CombatUniform", "", 500, { "", "", -1 } },
            { "TRYK_U_B_wood3c_CombatUniformTshirt", "", 500, { "", "", -1 } },
            { "TRYK_U_B_ARO1_GR_CombatUniform", "", 500, { "", "", -1 } },
            { "TRYK_U_B_BLKOCP_CombatUniform", "", 500, { "", "", -1 } },
            { "TRYK_U_B_wood_CombatUniform", "", 500, { "", "", -1 } },
            { "TRYK_U_B_BLK3CD", "", 500, { "", "", -1 } },
            { "U_I_FullGhillie_sard", "Ghillie Suit", 1500, { "", "", -1 } },
            { "U_I_GhillieSuit", "Ghillie Suit", 1500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "TRYK_H_Booniehat_WOOD", "", 850, { "", "", -1 } },
            { "TRYK_H_Helmet_WOOD", "", 850, { "", "", -1 } },
            { "TRYK_H_PASGT_OD", "", 800, { "", "", -1 } },
            { "TRYK_r_cap_od_Glasses", "", 2500, { "", "", -1 } },
            { "TRYK_H_woolhat", "", 1200, { "", "", -1 } },
            { "TRYK_H_GR", "", 650, { "", "", -1 } },
            { "TRYK_ESS_CAP", "", 650, { "", "", -1 } },
            { "H_Shemag_olive", "", 650, { "", "", -1 } },
            { "H_Cap_blk_Raven", "Green Digital Cap", 650, { "", "", -1 } },
            { "H_Cap_oli", "Green Cap", 650, { "", "", -1 } },
            { "H_Booniehat_oli", "Green Cap", 650, { "", "", -1 } },
            { "H_Watchcap_blk", "", 650, { "", "", -1 } },
            { "TRYK_H_woolhat", "", 650, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "TRYK_Shemagh_G", "", 20, { "", "", -1 } },
            { "G_Bandanna_oli", "", 20, { "", "", -1 } },
            { "G_Bandanna_beast", "", 20, { "", "", -1 } },
            { "TRYK_kio_balaclava_BLK", "", 20, { "", "", -1 } },
            { "RYK_US_ESS_Glasses_BLK", "", 20, { "", "", -1 } },
            { "TRYK_kio_balaclava_ear", "", 25, { "", "", -1 } },
            { "TRYK_Shemagh_ESS", "", 25, { "", "", -1 } },
            { "TRYK_headset_Glasses", "", 25, { "", "", -1 } },
            { "TRYK_Shemagh_EAR_WH", "", 25, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "TRYK_V_tacSVD_BK", "", 1200, { "", "", -1 } },
            { "TRYK_V_tacv1M_BK", "", 1300, { "", "", -1 } },
            { "TRYK_V_tacv1L_CY", "", 1500, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_wood_L", "", 1500, { "", "", -1 } },
            { "TRYK_Hrp_vest_ucp", "", 1500, { "", "", -1 } },
            { "TRYK_V_Sheriff_BA_TL2", "", 1500, { "", "", -1 } },
            { "TRYK_V_Sheriff_BA_T", "", 1500, { "", "", -1 } },
            { "TRYK_V_Sheriff_BA_TL", "", 2000, { "", "", -1 } },
            { "TRYK_V_Sheriff_BA_TBL3_BK", "", 5000, { "", "", -1 } },
            { "hk_rebel_9", "", 1500, { "", "", -1 } },
            { "hk_rebel_5", "", 1500, { "", "", -1 } },
            { "hk_rebel_13", "", 5000, { "", "", -1 } },
            { "hk_rebel_12", "", 5000, { "", "", -1 } },
            { "hk_rebel_2", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "TRYK_B_Carryall_blk", "", 800, { "", "", -1 } },
            { "TRYK_B_Carryall_JSDF", "", 800, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack_OD", "", 800, { "", "", -1 } },
            { "TRYK_B_AssaultPack_UCP", "", 400, { "", "", -1 } },
            { "TRYK_B_Belt_tan", "", 1000, { "", "", -1 } },
            { "TRYK_B_Belt", "", 1000, { "", "", -1 } },
            { "TRYK_B_BAF_BAG_CYT", "", 1000, { "", "", -1 } },
            { "TRYK_B_tube_cyt", "", 1000, { "", "", -1 } },
            { "TRYK_B_tube_blk", "", 1000, { "", "", -1 } },
            { "TRYK_B_Kitbag_aaf", "", 1000, { "", "", -1 } },
            { "TRYK_B_AssaultPack_Type2camo", "", 1000, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
    class groom {
        title = "STR_Shops_C_Groom";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "A3L_longhairblack", "", 15, { "", "", -1 } },
            { "A3L_longhairblond", "", 15, { "", "", -1 } },
            { "A3L_longhairbrown", "", 15, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "SFG_Tac_moustacheB", "", 15, { "", "", -1 } },
            { "SFG_Tac_moustacheD", "", 15, { "", "", -1 } },
            { "SFG_Tac_moustacheG", "", 15, { "", "", -1 } },
            { "SFG_Tac_moustacheO", "", 15, { "", "", -1 } },
            { "SFG_Tac_chinlessbB", "", 20, { "", "", -1 } },
            { "SFG_Tac_chinlessbD", "", 20, { "", "", -1 } },
            { "SFG_Tac_chinlessbG", "", 20, { "", "", -1 } },
            { "SFG_Tac_chinlessbO", "", 20, { "", "", -1 } },
            { "SFG_Tac_smallBeardB", "", 25, { "", "", -1 } },
            { "SFG_Tac_smallBeardD", "", 25, { "", "", -1 } },
            { "SFG_Tac_smallBeardG", "", 25, { "", "", -1 } },
            { "SFG_Tac_smallBeardO", "", 25, { "", "", -1 } },
            { "SFG_Tac_chinlessbB", "", 25, { "", "", -1 } },
            { "SFG_Tac_chinlessbD", "", 25, { "", "", -1 } },
            { "SFG_Tac_chinlessbG", "", 25, { "", "", -1 } },
            { "SFG_Tac_chinlessbO", "", 25, { "", "", -1 } },
            { "SFG_Tac_ChopsB", "", 25, { "", "", -1 } },
            { "SFG_Tac_ChopsD", "", 25, { "", "", -1 } },
            { "SFG_Tac_ChopsG", "", 25, { "", "", -1 } },
            { "SFG_Tac_ChopsO", "", 25, { "", "", -1 } },
            { "SFG_Tac_BeardB", "", 30, { "", "", -1 } },
            { "SFG_Tac_BeardD", "", 30, { "", "", -1 } },
            { "SFG_Tac_BeardG", "", 30, { "", "", -1 } },
            { "SFG_Tac_BeardO", "", 30, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
