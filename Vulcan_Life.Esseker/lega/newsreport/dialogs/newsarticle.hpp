class NewsArticle {
    idd = 13580;
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "_this execVM 'lega\newsreport\dialogs\dialogfunctions\naonload.sqf'";


class controlsBackground{
class vn_naHeader: Life_RscText
{
  idc = -1;
  text = "Esseker News"; //--- ToDo: Localize;
  x = 0.29375 * safezoneW + safezoneX;
  y = 0.225 * safezoneH + safezoneY;
  w = 0.4125 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_naMainBG: Life_RscText
{
  idc = -1;
  x = 0.29375 * safezoneW + safezoneX;
  y = 0.2492 * safezoneH + safezoneY;
  w = 0.4125 * safezoneW;
  h = 0.528 * safezoneH;
  colorBackground[] = {0,0,0,0.7}; //--- ToDo: Localize;

};
class vn_naarticletext: Life_RscText
{
  idc = -1;
  text = "Articles"; //--- ToDo: Localize;
  x = 0.328813 * safezoneW + safezoneX;
  y = 0.2668 * safezoneH + safezoneY;
  w = 0.0464063 * safezoneW;
  h = 0.033 * safezoneH;

};
};
class controls{
class vn_naarticleList: Life_RscListNBox
{
  idc = 13581;
  x = 0.303031 * safezoneW + safezoneX;
  y = 0.3086 * safezoneH + safezoneY;
  w = 0.0979687 * safezoneW;
  h = 0.451 * safezoneH;
   access = 0;
   type = 5;
   style = 0;
   rowHeight = 0;
   colorText[] = {1,1,1,1};
   colorScrollbar[] = {1,1,1,1};
   colorSelect[] = {0,0,0,1};
   colorSelect2[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
   colorSelectBackground[] = {0.6,0.6,0.6,1};
   colorSelectBackground2[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
   colorBackground[] = {0,0,0,0.7};
   maxHistoryDelay = 1.0;
   soundSelect[] = {"",0.1,1};
   period = 1;
   autoScrollSpeed = -1;
   autoScrollDelay = 5;
   autoScrollRewind = 0;
   arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
   arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
   shadow = 0;
   class ListScrollBar : ScrollBar //ListScrollBar is class name required for Arma 3
   {
    color[] = {1,1,1,0.6};
    colorActive[] = {1,1,1,1};
    colorDisabled[] = {1,1,1,0.3};
    thumb = "#(argb,8,8,3)color(1,1,1,1)";
    arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
    arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
    border = "#(argb,8,8,3)color(1,1,1,1)";
    shadow = 0;
   };
   onLBSelChanged = "[] call lega_fnc_updateArticle";
  };
class vn_naarticleMaintext: Life_RscTextMulti
{
  idc = 13582;
  x = 0.41028 * safezoneW + safezoneX;
  y = 0.3812 * safezoneH + safezoneY;
  w = 0.283594 * safezoneW;
  h = 0.374 * safezoneH;
  colorBackground[] = {0,0,0,0.7}; //--- ToDo: Localize;

};
class vn_natitle: Life_RscText
{
  idc = 13584;
  x = 0.407187 * safezoneW + safezoneX;
  y = 0.313 * safezoneH + safezoneY;
  w = 0.108281 * safezoneW;
  h = 0.044 * safezoneH;

};
class vn_naauthor: Life_RscText
{
  idc = 13583;
  x = 0.587656 * safezoneW + safezoneX;
  y = 0.313 * safezoneH + safezoneY;
  w = 0.108281 * safezoneW;
  h = 0.044 * safezoneH;

};
};
};
