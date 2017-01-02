switch (playerSide) do {
	case west: {
		_EE = _this select 3 select 0;
		if (_EE == "UN") then {
			_container = cursorObject;
			diag_log format ["Container: %1", _container];
			if (_container getVariable ["CumSplosion",true]) exitWith {hintSilent "EXPLOSION ALREADY IMANENT"};
            disableSerialization;
            5 cutRsc ["life_progress","PLAIN"];
            _ui = uiNamespace getVariable "life_progress";
            _progress = _ui displayCtrl 38201;
            _pgText = _ui displayCtrl 38202;
            _pgText ctrlSetText format["%2 (1%1)...","%",_upp];
            _progress progressSetPosition 0.01;
            _cP = 0.01;

            while{true} do {
	            if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		            [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		            player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		            player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	            };

            	sleep 0.27;
	            _cP = _cP + 0.01;
	            _progress progressSetPosition _cP;
	            _pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	            if(_cP >= 1) exitWith {};
	            if(!alive player) exitWith {};
	            if(player != vehicle player) exitWith {};
	            if(life_interrupted) exitWith {};
            };
			_texttodisplay = "UN HAVE PLACED AN EXPLOSIVE ON THE AIR DROP, 60 SECONDS TILL EXPLOSION";
			{
				[[1,2],_texttodisplay,false,[]] remoteExecCall ["life_fnc_broadcast",_x];
			} forEach [civilian,west,independent];
			_timer = 60; 
		    while {_timer > 0} do {
		        _timer = _timer - 1;
		        sleep 1;
		    };
		    waitUntil {_timer == 0};
		    if (_container getVariable ["CumSplosion",false]) then {
		    	_container setVariable ["CumSplosion",true,true];
		    	[_container,false] remoteExec ["Lega_fnc_ExplodeBox",2];
		    } else {
		    	hintSilent "The Explosive has already been planted";
			};
		};
	};
	case civilian: {
		_EE = _this select 1;
		if (_EE == "Civ") then {
			_container = _this select 0;
			diag_log format ["Container: %1", _container];
			diag_log format ["Cumsplosion?: %1", _container getVariable ["CumSplosion",false]];
			if (_container getVariable ["CumSplosion",true]) exitWith {hintSilent "EXPLOSION ALREADY IMANENT"};
		    _timer = 60; 
		    while {_timer > 0} do {
		        hint format ["You have Acitvated a failsafe, %1 Seconds till Explosion!", _timer];
		        _timer = _timer - 1;
		        sleep 1;
		    };
		    waitUntil {_timer == 0};
		    	_container setVariable ["CumSplosion",true,true];
		    	[_container,false] remoteExec ["Lega_fnc_ExplodeBox",2];
		};
	};
};