private _object = "Land_TentA_F" createVehicle [0,0,0];

life_tent_active = true;
life_container_activeObj = _object;
private _attachPos = [0.16, 3, ((boundingBoxReal _object) select 1) select 2];
[_object] remoteExecCall ["life_fnc_simDisable",RANY];
_object attachTo[player, _attachPos];

titleText [localize "STR_NOTF_PlaceContainer", "PLAIN"];