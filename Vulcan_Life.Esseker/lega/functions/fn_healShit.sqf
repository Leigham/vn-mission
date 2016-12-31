params ["_unit"];
diag_log format ["%1",_unit];
life_interrupted = false;
if(life_action_inUse)exitwith{};
if(!isplayer _unit)exitwith{};
if([false,"HealthPack",1] call life_fnc_handleInv)then{ 
if(_unit == player)then{
life_action_inUse = true; 
        player playMove "AinvPknlMstpSlayWrflDnon_medic"; 
        sleep 10;
            if(playerSide isEqualTo independent)then{ 
                player setDamage 0; 
            }else{ 
                player setDamage 0.25; 
            }; 
        life_action_inUse = false; 
        hint "You now feel 75%, please seek a medical professional to get further medical help!";
}else{
        life_action_inUse = true; 
        cursorTarget playMove "AinvPknlMstpSlayWrflDnon_medic"; 
        sleep 10; 
            if(playerSide isEqualTo independent)then{ 
                cursorTarget setDamage 0; 
                 hint format ["You have healed %1 to 100%",name _unit]; 
            }else{ 
                cursorTarget setDamage 0.25; 
                 hint format ["You have healed %1 to 75%",name _unit]; 
            }; 
        life_action_inUse = false;
};
}else{hint "You shouldnt even be getting this error :( somethings broke, contact jesus"};
