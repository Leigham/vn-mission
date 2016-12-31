
  player removeAction vn_addactionObject;
  player removeAction vn_addactionPlaceAction;
  player removeAction vn_addactionCancelAction;
  player removeAction vn_addactionPickupAction;
  vn_AddactionPlaceAction = player addaction ["<t color='#00EE14'>Drop Object</t>", {[]call legac_fnc_DropBuilding}];
  vn_AddactionCancelAction = player addAction ["<t color='#FF0000'>Cancel Building</t>", {_null = deleteVehicle vn_currentBuildable;player removeAction vn_AddactionCancelAction;player removeAction vn_addactionObject;player removeAction vn_AddactionPlaceAction;vn_currentBuildable =objNull;vn_buildingDrop = true;}];
