#define GUI_GRID_X    (0)
#define GUI_GRID_Y    (0)
#define GUI_GRID_W    (0.025)
#define GUI_GRID_H    (0.04)
#define GUI_GRID_WAbs    (1)
#define GUI_GRID_HAbs    (1)

class Bounty_Board {
    idd = 9455;
    movingEnable = 0;
    enableSimulation = 1;
	 onLoad = "_this execVM 'lega\bountyboard\bountyboardvars.sqf'"; 

		class controlsBackground {
				class VN_BB_MainBG: Life_RscText
				{
					colorBackground[] = {0,0,0,0.7};
					idc = -1;
					x = 4 * GUI_GRID_W + GUI_GRID_X;
					y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
					w = 32.5 * GUI_GRID_W;
					h = 12 * GUI_GRID_H;
				};
				class VN_bountBoardHeaderBG: Life_RscText
				{
					idc = -1;
					text = "Bounty Board"; //--- ToDo: Localize;
					x = 0.335 * safezoneW + safezoneX;
					y = 0.2228 * safezoneH + safezoneY;
					w = 0.335156 * safezoneW;
					h = 0.033 * safezoneH;
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
				};
			};
		class controls {
				class vn_bb_bountyamounttoplace: Life_RscEdit
				{
					idc = 9459;
					text = "Input an amount for bounty."; //--- ToDo: Localize;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.379 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.022 * safezoneH;
					tooltip = "Input an amount for bounty."; //--- ToDo: Localize;
				};
				class vn_BB_playerlist: Life_RscCombo
				{
					idc = 9460;
					text = "Select a player"; //--- ToDo: Localize;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.335 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.022 * safezoneH;
					tooltip = "Select a player to place a bounty on."; //--- ToDo: Localize;
				};
				class vn_placeBounty: Life_RscButtonMenu
				{
					text = "Place Bounty";
					idc = 9461;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.423 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.022 * safezoneH;
					color[] = {0,0,0,0.7};
					colorText[] = {0,0,0,1};
					onButtonClick =  "[] call legac_fnc_setBountyInit";
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

				};
				class vn_currentBountys: Life_RscCombo
				{
					idc = 9462;
					x = 0.551562 * safezoneW + safezoneX;
					y = 0.335 * safezoneH + safezoneY;
					w = 0.0928125 * safezoneW;
					h = 0.022 * safezoneH;
					onLBSelChanged = "[] call legac_fnc_vnupdateBountyList";
				};
				class vn_bountyPlacedby: Life_RscText
				{
					idc = 9463;
					x = 0.551562 * safezoneW + safezoneX;
					y = 0.423 * safezoneH + safezoneY;
					w = 0.0928125 * safezoneW;
					h = 0.022 * safezoneH;
					text = "";
				};
				class vn_bb_bountyAmountindb: Life_RscText
				{
					idc = 9464;
					x = 0.551562 * safezoneW + safezoneX;
					y = 0.379 * safezoneH + safezoneY;
					w = 0.0928125 * safezoneW;
					h = 0.022 * safezoneH;
					text = "";
				};
			};
		};
