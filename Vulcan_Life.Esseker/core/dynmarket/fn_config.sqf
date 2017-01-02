/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// ███████████████████████████████████████████████████████████████████████
// █████████████████ DYNAMIC MARKET BASIC CONFIGURATION ██████████████████
// ███████████████████████████████████████████████████████████████████████

DYNMARKET_Serveruptime         = 05;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = false; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 01;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = true; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 03;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = false; // Should the user be informed with a hint whenever the prices got updated?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text =
[
	"Your prices have been updated!",
	"The new prices are being calculated by the server..."
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
	["Legal",
		[
			["apple",-1,10,50],
			["peach",-1,30,100]
		],
		0.5
	],
	["Illegal",
		[
			/*["peach",-1,30,100]*/
		],
		0.5
	]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        =
[
	["goldbar",10000],
	["pickaxe",350],
	["defibrillator",450],
	["toolkit",100],
	["fuelEmpty",10],
	["fuelFull",500],
	["spikeStrip",500],
	["lockPick",75],
	["goldbar",95000],
	["blastingcharge",10000],
	["boltcutter",1000],
	["defusekit",2000],
	["storagesmall",10000],
	["storagebig",12500],
	["oil_processed",65],
	["copper_refined",32],
	["iron_refined",30],
	["salt_refined",25],
	["glass",27],
	["diamond_cut",58],
	["cement",87],
	["heroin_processed",200],
	["marijuana",130],
	["cocaine_processed",155],
	["redgull",50],
	["coffee",5],
	["waterBottle",5],
	["apple",12],
	["peach",12],
	["tbacon",25],
	["donuts",60],
	["rabbit_raw",95],
	["salema_raw",45],
	["ornate_raw",40],
	["mackerel_raw",175],
	["mackerel",200],
	["tuna_raw",700],
	["mullet_raw",250],
	["catshark_raw",300],
	["turtle_raw",3000],
	["turtle_soup",750],
	["hen_raw",65],
	["hen",85],
	["rooster_raw",65],
	["rooster",85],
	["sheep_raw",95],
	["sheep",115],
	["goat_raw",115],
	["goat",135],
	["zipties",580],
	["campingTable",135],
	["plasticChair",135],
	["smallTent",135],
	["sandBag",135],
	["metalWall",135],
	["goodWall",135],
	["campFire",135],
	["portableLight",135],
	["cargoNet",135],
	["smallHut",135],
	["woodenCover",135],
	["fabricCover",135],
	["barrelContainer",135],
	["MilitaryCodeBreaker",27500]

];

//███████████████████████████████████████████████████████████████████████
//██████████████████ DO NOT MODIFY THE FOLLOWING CODE! ██████████████████
//███████████████████████████████████████████████████████████████████████

DYNMARKET_Items_CurrentPriceArr = [];
DYNMARKET_sellarraycopy = DYNMARKET_Items_ToTrack;
DYNMARKET_Serveruptime = (DYNMARKET_Serveruptime * 3600) - 300;
{
	_currentArray = _x;
	DYNMARKET_Items_CurrentPriceArr pushBack [_currentArray select 0,_currentArray select 1,0];
} forEach DYNMARKET_Items_ToTrack;
publicVariable "DYNMARKET_UserNotification";
publicVariable "DYNMARKET_UserNotification_Text";
if (DYNMARKET_UseExternalDatabase) then {[1] call TON_fnc_HandleDB;};
DYNMARKET_UpdateCount = 0;
if (DYNMARKET_UseExternalDatabase) then {
	[] spawn {
		sleep DYNMARKET_Serveruptime;
		diag_log "### DYNMARKET >> CURRENT PRICES ARE BEING WRITTEN TO THE DATABASE    ###";
		diag_log "### DYNMARKET >> AS PLANNED, AWAITING RESULT...                      ###";
		[0] call TON_fnc_HandleDB;
	};
};
sleep 5;
[] call TON_fnc_sleeper;
