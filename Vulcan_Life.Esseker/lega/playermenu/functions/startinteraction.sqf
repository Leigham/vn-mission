private "_curTarget";
#define Btn1 13256
#define Btn2 13255
#define Btn3 13254
#define Btn4 13253
#define Btn5 13252
#define Btn6 13251
#define Btn7 13250
#define Btn8 13249


disableSerialization;
_curTarget = cursorTarget;
if(isNull _curTarget) exitWith {closeDialog 0;hint "Bad Target";}; //Bad target

if(!isPlayer cursorTarget || player distance cursorTarget > 7) exitWith {closeDialog 0;};
_display = findDisplay 13246;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;


_Btn1 ctrlEnable false;
_Btn2 ctrlEnable false;
_Btn3 ctrlEnable false;
_Btn4 ctrlEnable false;
_Btn5 ctrlEnable false;
_Btn6 ctrlEnable false;
_Btn7 ctrlEnable false;
_Btn8 ctrlEnable false;

if(isPlayer cursorTarget && player distance cursorTarget < 3.5)then{

  if(cursorTarget getVariable ["restrained",true])then{
  
		_Btn1 ctrlEnable true;
		_Btn1 ctrlSetText "Un-Tie";
		_Btn1 buttonSetAction "[cursorTarget] call life_fnc_unrestrain; closeDialog 0;";
		
		_Btn3 ctrlEnable true;
		_Btn3 ctrlSetText "Pat Down";
		_Btn3 buttonSetAction "[player] remoteExec [""legac_fnc_Patdown"",_curTarget];closeDialog 0;";
		
			if(_curTarget getVariable ["vn_hasComms",true])then{
			
			
				_Btn4 ctrlEnable True;
				_Btn4 ctrlSetText localize "STR_pInAct_PutInCar";
				_Btn4 buttonSetAction "[cursorTarget] call life_fnc_putInCar;closeDialog 0";

				_Btn5 ctrlEnable True;
				_Btn5 ctrlSetText "Rob Wallet";
				_Btn5 ButtonSetAction "hint 'Robbing Wallet';closeDialog 0;";
				

		  }else{
			_Btn4 ctrlEnable True;
			_Btn4 ctrlSetText localize "STR_pInAct_PutInCar";
			_Btn4 buttonSetAction "[cursorTarget] call life_fnc_putInCar;closeDialog 0";
      };

    if(_curTarget getVariable ["Escorting",true])then{
	
      _Btn2 ctrlEnable True;
      _Btn2 ctrlSetText "StopEscorting";
      _Btn2 buttonSetAction "[cursorTarget] call life_fnc_stopEscorting; [cursorTarget] call life_fnc_civInteractionMenu;";

    }else{
			_Btn2 ctrlEnable True;
			_Btn2 ctrlSetText "EscortPlayer";
			_Btn2 buttonSetAction "[cursorTarget] call life_fnc_escortAction; closeDialog 0;";

		};

  }else{
  
	if (_curTarget isKindOf "Man" && !(_curTarget isKindOf "Animal") && {!alive _curTarget})then{

    _Btn1 ctrlEnable True;
    _Btn1 ctrlSetText "Revive";
    _Btn1 buttonSetAction "hint 'Reviving Player';closeDialog 0;";
	
	 }else{
	 
		 _Btn1 ctrlEnable True;
		 _Btn1 ctrlSetText "Tie Up";
		 if( (animationState cursorTarget == "Incapacitated" || animationState cursorTarget == "amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon" ) ) then {
	 
	 } else {
	 
     };
    _Btn1 ctrlEnable false;
	 };
  };
 };
