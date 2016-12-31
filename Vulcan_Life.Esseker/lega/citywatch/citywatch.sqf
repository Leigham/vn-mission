if(side player != civilian) exitwith {hint "You must be a civilian to join City Watch."};
if(Player_cwWorker)exitwith{hint "You Already work for City Watch."};

CW_neededVest = "vn_citywatch";

_1 = _this select 0;
_2 = _this select 1;
_3 = _this select 2;
_vest = vest player;
_uniform = uniform player;
player_cwWorker = false;


if (_vest isEqualTo CW_neededVest && {player inArea "cityWatchAread"}) then {
  hint "Welcome to the City Watch, stay within the settlement checkpoint to keep your job, if you wish to resign from the post, simply just leave the area. Your role is to help the UN check incoming survivors, welcome survivors to the settlement and provide information, and look out for bandits and stop incoming attacks. You will receive a cash bonus for your work.";
  player_cwWorker = true;
} else {
  hint "You must be wearing the City Watch Vest to commence this job, please buy one at your local clothing store";
};


waitUntil {
    if (player_cwWorker && !(player inArea "cityWatchAread")) exitWith {
        hint "You have left the area, you have now lost your postition as City Watch, you will need to re-apply";
        player_cwWorker = false;
        //Declare Variables (theyaredoingstuff = false)
        true
    };
    sleep 0.1;
    false
};
