
  detach vn_currentBuildable;
  hint "Press Space To Confirm";
  vn_currentBuildable setVariable["TempBuilding",true,true];
  vn_currentBuildable EnableSimulation true;
  vn_buildingDrop = false;
  if(vn_buildingDrop)then{
  vn_currentBuildable setPosATL [getPosATL vn_currentBuildable select 0, getPosATL vn_currentBuildable select 1, (getPosATL vn_currentBuildable select 2) - 0.05];
  vn_buildingDrop = false;
  };
  player removeAction vn_AddactionPlaceAction;
 
  vn_currentBuildable setVelocity [0,0,0];
  vn_addactionPickupObject = player addAction ["<t color='#FF0000'>Pickup Object</t>", {[] call legac_fnc_pickupObject}];
  vn_addactionObject = player addAction ["<t color='#FF0000'>Save Object</t>", {[] call legac_fnc_SaveObject}];
