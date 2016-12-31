player removeAction vn_AddactionCancelAction;
player removeAction vn_addactionObject;
player removeAction vn_addactionPickupObject;

_objectHelper = vn_currentBuildable;
_objectHelperDir = getDir _objectHelper;
_objectHelper attachTo [player];
_objectHelper setDir _objectHelperDir-(getDir player);
_objectHelper setVelocity [0,0,0];
[] call legac_fnc_buildingActions;
