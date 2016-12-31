
player setVariable ["NewsReporter", true, true];
_theboard = _this select 0;
private _id = _this select 2;
_theboard removeAction _id;
_myName = name player;
hint format ["Welcome to the team %1, please come back when you have something to report! Your paycheck has increased by 300", _myName];
