vn_fnc_DropBuilding =
{
  detach vn_currentBuildable;
  hint "Press Space To Confirm";
  vn_currentBuildable setVariable["TempBuilding",true,true];
  vn_currentBuildable EnableSimulation true;

  if(vn_buildingDrop)then{
  vn_currentBuildable setPosATL [getPosATL vn_currentBuildable select 0, getPosATL vn_currentBuildable select 1, (getPosATL vn_currentBuildable select 2) - 0.5];
  vn_buildingDrop = false;
  };
  player removeAction vn_AddactionPlaceAction;
  vn_currentBuildable setVelocity [0,0,0];
  vn_addactionPickupObject = player addAction ["<t color='#FF0000'>Pickup Object</t>", {[] call vn_fnc_pickupObject}];
  vn_addactionObject = player addAction ["<t color='#FF0000'>Save Object</t>", {[] call vn_fnc_SaveObject}];
};


vn_fnc_buildingActions =
{
  player removeAction vn_addactionObject;
  player removeAction vn_addactionPlaceAction;
  player removeAction vn_addactionCancelAction;
  player removeAction vn_addactionPickupAction;
  vn_AddactionPlaceAction = player addaction ["<t color='#00EE14'>Drop Object</t>", {[]call vn_fnc_DropBuilding}];
  vn_AddactionCancelAction = player addAction ["<t color='#FF0000'>Cancel Building</t>", {_null = deleteVehicle vn_currentBuildable;player removeAction vn_AddactionCancelAction;player removeAction vn_addactionObject;player removeAction vn_AddactionPlaceAction;vn_currentBuildable =objNull;vn_buildingDrop = true;}];
};

vn_fnc_pickupObject =
{
  player removeAction vn_AddactionCancelAction;
  player removeAction vn_addactionObject;
  player removeAction vn_addactionPickupObject;
  _objectHelper = vn_currentBuildable;
  _objectHelperDir = getDir _objectHelper;
  _objectHelper attachTo [player];
  _objectHelper setDir _objectHelperDir-(getDir player);
  _objectHelper setVelocity [0,0,0];
  [] call vn_fnc_buildingActions;

};

vn_fnc_SaveObject =
{
   hint "Saving Object";
  _vnPlayerUID = getplayerUID Player;
  _diameterOfPlot = 30;
  _vnPostoSend = getPosATL vn_currentBuildable;
  _vnDirToSend = vectorDir vn_currentBuildable;
  player removeAction vn_AddactionCancelAction;
  player removeAction vn_addactionPickupObject;
  player removeAction vn_addactionObject;
  vn_currentBuildable setMass vn_OriginalMass;
  vn_currentBuildable EnableSimulation true;
  vn_currentBuildable = objNull;
  vn_buildingDrop = true;



if(vn_buildingPlot)then{
  [_vnPostoSend,_vnDirToSend,_vnPlayerUID,_diameterOfPlot,vn_currentBuildableClassname] remoteExecCall ["Lega_fnc_VN_SavePlot",2];
}else{
  [_vnPostoSend,_vnDirToSend,_vnPlayerUID,_diameterOfPlot,vn_currentBuildableClassname] remoteExecCall ["Lega_fnc_VN_SaveObject",2];
};
};
