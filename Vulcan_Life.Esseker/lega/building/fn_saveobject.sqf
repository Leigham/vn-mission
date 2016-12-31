hint "Saving Object";
_vnPlayerUID = getplayerUID Player;
_diameterOfPlot = 30;
_vnPostoSend = getPosATL vn_currentBuildable;
_vnDirToSend = vectorDir vn_currentBuildable;
player removeAction vn_AddactionCancelAction;
player removeAction vn_addactionPickupObject;
player removeAction vn_addactionObject;
player removeAction vn_addactionLowerObject;
vn_currentBuildable setMass vn_OriginalMass;
vn_currentBuildable EnableSimulation true;
vn_currentBuildable = objNull;
//vn_buildingDrop = true;


vn_buildingPlot = false; 
if(vn_buildingPlot)then{
  [_vnPostoSend,_vnDirToSend,_vnPlayerUID,_diameterOfPlot,vn_currentBuildableClassname] remoteExecCall ["Lega_fnc_SavePlot",2];
}else{
  [_vnPostoSend,_vnDirToSend,_vnPlayerUID,_diameterOfPlot,vn_currentBuildableClassname] remoteExecCall ["Lega_fnc_SaveObject",2];
};
