/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "HealthPack","waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "toolkit", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "zipTies", "rooster_raw", "sheep_raw", "goat_raw" };
    };
	
	class med_market {
       name = "STR_MAR_EMS_vItem_Shop";
       side = "med";
       license = "";
       level[] = { "", "", -1, "" };
       items[] = { "HealthPack","waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = { "HealthPack","MilitaryCodeBreaker","waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge", "zipTies" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "HealthPack","waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class building {
        name = "STR_Shops_Build";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {"campingTable","plasticChair","bigTent","smallTent","sandBag","metalWall","goodWall","campFire","portableLight","cargoNet","woodenCover","fabricCover","barrelContainer"};
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "HealthPack","MilitaryCodeBreaker","donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "media\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defib";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "media\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 1100;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };
	

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "media\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "media\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 500;
        sellPrice = 500;
        illegal = true;
        edible = -1;
        icon = "media\ico_spikeStrip.paa";
    };
	    class HealthPack {
        variable = "HealthPack";
        displayName = "STR_Item_HealthPack";
        weight = 15;
        buyPrice = 500;
        sellPrice = 122;
        illegal = false;
        edible = -1;
        icon = "media\healing.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "media\ico_lockpick.paa";
    };
	//BUILDABLES
	
    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "media\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 25000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "media\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 5000;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "media\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "media\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 10000;
        sellPrice = 10000;
        illegal = false;
        edible = -1;
        icon = "media\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 15000;
        sellPrice = 12500;
        illegal = false;
        edible = -1;
        icon = "media\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "media\Gem1.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 190;
        illegal = false;
        edible = -1;
        icon = "media\Gem1.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "media\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 230;
        illegal = false;
        edible = -1;
        icon = "media\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "media\Log1.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 210;
        illegal = false;
        edible = -1;
        icon = "media\Plank1.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "media\Herb1.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 3;
        buyPrice = -1;
        sellPrice = 180;
        illegal = false;
        edible = -1;
        icon = "media\Herb1.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "media\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 3;
        buyPrice = -1;
        sellPrice = 230;
        illegal = false;
        edible = -1;
        icon = "media\Sand1.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "media\Scrap1.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 3;
        buyPrice = -1;
        sellPrice = 225;
        illegal = false;
        edible = -1;
        icon = "media\Scrap1.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "media\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 3;
        buyPrice = -1;
        sellPrice = 266;
        illegal = false;
        edible = -1;
        icon = "media\ico_cement.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "media\Explosive1.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 350;
        illegal = true;
        edible = -1;
        icon = "media\Explosive1.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "media\Bullets1.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = -1;
        sellPrice = 340;
        illegal = true;
        edible = -1;
        icon = "media\Bullets1.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "media\Drugs1.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 410;
        illegal = true;
        edible = -1;
        icon = "media\Drugs1.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 50;
        sellPrice = 50;
        illegal = false;
        edible = 100;
        icon = "media\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 30;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "media\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "media\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 12;
        illegal = false;
        edible = 10;
        icon = "media\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 65;
        sellPrice = 12;
        illegal = false;
        edible = 10;
        icon = "media\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "media\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "media\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "media\ico_rabbitRaw.paa";
		cooked = "rabbit";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 100;
        sellPrice = 75;
        illegal = false;
        edible = 20;
        icon = "media\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "media\ico_salemaRaw.paa";
		cooked = "salema";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "media\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "media\ico_ornateRaw.paa";
		cooked = "ornate";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "media\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "media\ico_mackerelRaw.paa";
		cooked = "mackerel";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "media\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "media\ico_tunaRaw.paa";
		cooked = "tuna";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "media\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "media\ico_mulletRaw.paa";
		cooked = "mullet";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "media\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "media\ico_catsharkRaw.paa";
		cooked = "catshark";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "media\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "media\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        icon = "media\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "media\ico_wholeChickenRaw.paa";
		cooked = "hen";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "media\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "media\ico_chickenDrumstickRaw.paa";
		cooked = "rooster";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "media\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "media\ico_lambChopRaw.paa";
		cooked = "sheep";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "media\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "media\ico_muttonLegRaw.paa";
		cooked = "goat";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "media\ico_muttonLeg.paa";
    };
	
	class zipties {
        variable = "zipties";
        displayName = "STR_Item_ZipTies";
        weight = 0;
        buyPrice = 200;
        sellPrice = 580;
        illegal = true;
        edible = -1;
        icon = "media\ziptie.paa";
    };
	
	class campingTable {
        variable = "campingTable";
        displayName = "STR_Item_campingTable";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "acd_CampingTable_F";
        icon = "media\building.paa";
    };
	
	class plasticChair {
        variable = "plasticChair";
        displayName = "STR_Item_plasticChair";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "xcam_ChairPlastic_F";
        icon = "media\building.paa";
    };
	
	class bigTent {
        variable = "bigTent";
        displayName = "STR_Item_bigTent";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "CampEastC";
        icon = "media\building.paa";
    };
	
	class smallTent {
        variable = "smallTent";
        displayName = "STR_Item_smallTent";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "Land_A_tent";
        icon = "media\building.paa";
    };
	
	class sandBag {
        variable = "sandBag";
        displayName = "STR_Item_sandBag";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "Land_BagFence_Long_F";
        icon = "media\building.paa";
    };
	
	class metalWall {
        variable = "metalWall";
        displayName = "STR_Item_metalWall";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "Land_wall_tin_4";
        icon = "media\building.paa";
    };
	
	class goodWall {
        variable = "goodWall";
        displayName = "STR_Item_goodWall";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "zed2_civil";
        icon = "media\building.paa";
    };
	
	class campFire {
        variable = "campFire";
        displayName = "STR_Item_campFire";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "Campfire_burning_F";
        icon = "media\building.paa";
    };
	
	class portableLight {
        variable = "portableLight";
        displayName = "STR_Item_portableLight";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "acd_PortableLight_double_F";
        icon = "media\building.paa";
    };
	
	class cargoNet {
        variable = "cargoNet";
        displayName = "STR_Item_cargoNet";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "acd_C_CargoNet_01_box_F";
        icon = "media\building.paa";
    };
	
	class smallHut {
        variable = "smallHut";
        displayName = "STR_Item_smallHut";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "Land_Hut02";
        icon = "media\building.paa";
    };
	
	class woodenCover {
        variable = "woodenCover";
        displayName = "STR_Item_woodenCover";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "Land_Hut03";
        icon = "media\building.paa";
    };
	
		class fabricCover {
        variable = "fabricCover";
        displayName = "STR_Item_fabricCover";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "Land_covering_hut_big_EP1";
        icon = "media\building.paa";
    };
	
	class barrelContainer {
        variable = "barrelContainer";
        displayName = "STR_Item_barrelContainer";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = true;
        edible = 0;
		classname  = "Barrel4";
        icon = "media\building.paa";
    };
		class MilitaryCodeBreaker {
        variable = "MilitaryCodeBreaker";
        displayName = "STR_Item_MCB";
        weight = 2;
        buyPrice = 35000;
        sellPrice = 27500;
        illegal = true;
        edible = 0;
        icon = "media\hacking.paa";
    };
	
};
