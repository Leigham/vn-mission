class Goverment {
    idd = 66534;
    movingEnable = 1;
    enableSimulation = 1;
	onLoad = "_this execVM 'lega\goverment\onload.sqf'";


class controlsBackground{
  class vn_GovtshopBG: Life_RscText
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
class vn_govtheaders: Life_RscText
{
	idc = 66534;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.2228 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_govtitemtype: Life_RscCombo
{
	idc = 66535;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.022 * safezoneH;
	tooltip = "Pick an ItemType"; //--- ToDo: Localize;
  colorBackground[] = {0,0,0,0.7};
  onLBSelChanged = "[] execVM 'lega\GangShop\onlbChanged.sqf'";

};
class vn_govtlogo: Life_RscPicture
{
  style = 0x30 + 0x800;
  text = "";
	idc = 66540;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.176 * safezoneH;
  colorBackground[] = {0,0,0,0.7};
};
class vn_govtitemlist: Life_RscListbox
{
	idc = 66536;
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
class vn_govtbuy: Life_RscButtonMenu
{
	idc = 66537;
	text = "Purchase"; //--- ToDo: Localize;
	x = 0.386563 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
  onButtonClick =  "[] call Legac_fnc_CheckAll";
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_govtexit: Life_RscButtonMenu
{
	idc = 66538;
	text = "Exit"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
  	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_GovtCost: Life_RscText
{
	idc = 66539;
	x = 0.345313 * safezoneW + safezoneX;
	y = 0.643 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
  colorBackground[] = {0,0,0,0.7};

};
};
};
