scopeName "main";

{
  if (player inArea _x) then {hint "You can not Build here";breakOut "main"};
} count vn_noBuildAreas;

if(vn_isBuilding)exitWith{hint "You are already Building, please finish/cancel what you are building, then try again!"};

systemChat "Starting Build Script";
params ["_object"];
vn_currentBuildableClassname = _object;
player setVariable ["vnIsBuilding",true,true];
player setVariable ["StopBuild",false,true];
if(_object == "Flag_Red_F")exitWith{systemChat "FLAG";[_object] spawn Legac_fnc_StartBuildPlot;};
if(_object == "Land_Slum_House02_F" || _object == "CampEastC")then{
[_object] spawn legac_fnc_startBuildLarge;
systemchat "YES";
}else{
[_object] spawn legac_fnc_startBuildSmall;
systemchat "NO";
};


hint "Use Page up and Page down Keys with Ctrl or Shift, or without, to raise and lower the buildable.";
//while {true}do{if (player getVariable ["StopBuild",true])exitwith{_null = deleteVehicle _buildable};};
