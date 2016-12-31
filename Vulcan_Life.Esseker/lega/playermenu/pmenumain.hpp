class vn_PMenu {
    idd = 13246;
    movingEnable = 0;
    enableSimulation = 1;
    onload = "execVM 'Lega\PlayerMenu\functions\StartInteraction.sqf'";

class controlsbackground {
class vn_PMenuHeader: Life_RscText
{
  idc = 13247;
  text = "Player Menu"; //--- ToDo: Localize;
  x = 0.448437 * safezoneW + safezoneX;
  y = 0.2844 * safezoneH + safezoneY;
  w = 0.103125 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
};
class vm_PmenuBackground: Life_RscText
{
  idc = 13248;
  x = 0.448437 * safezoneW + safezoneX;
  y = 0.3086 * safezoneH + safezoneY;
  w = 0.103125 * safezoneW;
  h = 0.297 * safezoneH;
  colorBackground[] = {0,0,0,0.7};
};
};
class controls
{
class vn_PMenubtn6: Life_RscButtonMenu
{
  idc = 13249;
  x = 0.45875 * safezoneW + safezoneX;
  y = 0.489 * safezoneH + safezoneY;
  w = 0.0825 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_Pmenubtn7: Life_RscButtonMenu
{
  idc = 13250;
  x = 0.45875 * safezoneW + safezoneX;
  y = 0.522 * safezoneH + safezoneY;
  w = 0.0825 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_Pmenubtn8: Life_RscButtonMenu
{
  idc = 13251;
  text = "Kill ?"; //--- ToDo: Localize;
  x = 0.45875 * safezoneW + safezoneX;
  y = 0.555 * safezoneH + safezoneY;
  w = 0.0825 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
  onButtonClick = "[cursorTarget] execVM 'Lega\PlayerMenu\functions\Kill.sqf';((ctrlParent (_this select 0)) closeDisplay 13246);";
};
class vn_Pmenubtn5: Life_RscButtonMenu
{
  idc = 13252;
  text = "Rob"; //--- ToDo: Localize;
  x = 0.45875 * safezoneW + safezoneX;
  y = 0.456 * safezoneH + safezoneY;
  w = 0.0825 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_PMenubtn4: Life_RscButtonMenu
{
  idc = 13253;
  text = "Release"; //--- ToDo: Localize;
  x = 0.45875 * safezoneW + safezoneX;
  y = 0.423 * safezoneH + safezoneY;
  w = 0.0825 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_PMenubtn3: Life_RscButtonMenu
{
  idc = 13254;
  text = "Destroy Comms"; //--- ToDo: Localize;
  x = 0.45875 * safezoneW + safezoneX;
  y = 0.39 * safezoneH + safezoneY;
  w = 0.0825 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_PMenuButton2: Life_RscButtonMenu
{
  idc = 13255;
  text = "Pat Down"; //--- ToDo: Localize;
  x = 0.45875 * safezoneW + safezoneX;
  y = 0.357 * safezoneH + safezoneY;
  w = 0.0825 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
class vn_PMenuBtn1: Life_RscButtonMenu
{
  idc = 13256;
  text = "Tie Up"; //--- ToDo: Localize;
  x = 0.45875 * safezoneW + safezoneX;
  y = 0.324 * safezoneH + safezoneY;
  w = 0.0825 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

};
};
};
