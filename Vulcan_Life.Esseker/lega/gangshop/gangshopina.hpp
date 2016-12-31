class GangShopina {
    idd = 94653;
    movingEnable = 1;
    enableSimulation = 1;
		 onLoad = "_this execVM 'lega\GangShop\onload.sqf'";


class controlsBackground{
  class vn_GangshopBG: Life_RscText
  {
	   idc = -1;
	   x = 0.304062 * safezoneW + safezoneX;
	   y = 0.247 * safezoneH + safezoneY;
	   w = 0.144375 * safezoneW;
	   h = 0.44 * safezoneH;
     colorBackground[] = {0,0,0,0.7};

 };
};

class controls{
class vn_GangShopHeader: Life_RscText
{
	idc = 94653;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.2228 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_gangItemType: Life_RscCombo
{
	idc = 94654;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.022 * safezoneH;
	tooltip = "Pick an ItemType"; //--- ToDo: Localize;
  colorBackground[] = {0,0,0,0.7};
  onLBSelChanged = "[] execVM 'lega\GangShop\onlbChanged.sqf'";

};
class vn_GangLogo: Life_RscPicture
{
  style = 0x30 + 0x800;
  text = "";
	idc = 94655;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.176 * safezoneH;
  colorBackground[] = {0,0,0,0.7};
};
class vn_GangItemList: Life_RscListbox
{
	idc = 94656;
	text = "";
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.121 * safezoneH;
	tooltip = "Select an Item";
  colorBackground[] = {0,0,0,0.7};
  sizeEx = 0.03;
  onLBSelChanged = "[] execVM 'lega\GangShop\onlbpriceChanged.sqf'";
};
class vn_GangBuy: Life_RscButtonMenu
{
	idc = 94656;
	text = "Purchase"; //--- ToDo: Localize;
	x = 0.386563 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
  onButtonClick =  "[] call Legac_fnc_CheckAll";
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_GangExit: Life_RscButtonMenu
{
	idc = 94657;
	text = "Exit"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_GangCost: Life_RscText
{
	idc = 94658;
	x = 0.345313 * safezoneW + safezoneX;
	y = 0.643 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
  colorBackground[] = {0,0,0,0.7};

};
};
};
