#define ST_MULTI
#define RscEdit
class RscEdit{};
class NewsReport {
    idd = 9991;
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "_this execVM 'lega\newsreport\dialogs\dialogfunctions\onload.sqf'";

    class controlsBackground {
      class vn_nrmainbackground: Life_RscText
        {
	         idc = -1;
	         x = 0.293751 * safezoneW + safezoneX;
	         y = 0.2514 * safezoneH + safezoneY;
           w = 0.4125 * safezoneW;
	         h = 0.528 * safezoneH;
           colorBackground[] = {0,0,0,0.7}; //--- ToDo: Localize;
        };
      class vn_nrheaderbackground: Life_RscText
        {
	        idc = -1;
	        text = "New Report"; //--- ToDo: Localize;
	        x = 0.29375 * safezoneW + safezoneX;
	        y = 0.225 * safezoneH + safezoneY;
	        w = 0.4125 * safezoneW;
	        h = 0.022 * safezoneH;
          colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
          };
      };
    class controls {
class vn_nrtitle: Life_RscEdit
{
	idc = 9992;
	text = "Title"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.044 * safezoneH;
	tooltip = "Type the title to your News Report here ";
};
class vn_nrreportername: Life_RscEdit
{
	idc = 9993;
	text = "Reporter Name Here "; //--- ToDo: Localize;
	x = 0.520625 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.044 * safezoneH;
	tooltip = "Your reporter name here "; //--- ToDo: Localize;
};
class vn_nrmaintext: Life_RscEdit
{
	idc = 9994;
	text = "Your Report Here "; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.391875 * safezoneW;
	h = 0.374 * safezoneH;
	tooltip = "Type your news report here ! "; //--- ToDo: Localize
  style = 16;
  lineSpacing = 1;
  sizeEx = 0.03;
};
class vn_nrplacereport: Life_RscButtonMenu
{
	idc = 9995;
	text = "Publish Report"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.044 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
  tooltip = "Click this to publish the report"; //--- ToDo: Localize;
  onButtonClick = "[] call Lega_fnc_placeArticle";
};
class vn_nrexitreport: Life_RscButtonMenu
{
	idc = 9996;
	text = "Exit Report"; //--- ToDo: Localize;
	x = 0.530937 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.044 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
	tooltip = "Click this to publish the report"; //--- ToDo: Localize;
  onButtonClick = "[]call Lega_fnc_acceptnrclose";
};
};
};
