hint "hello";
hint "";
noesckey = (findDisplay 9991) displayAddEventHandler ["KeyDown", "hint format['Please use the Cancel button if you wish you clear your work.',(_this select 1)];if ((_this select 1) == 1) then { true }"];
