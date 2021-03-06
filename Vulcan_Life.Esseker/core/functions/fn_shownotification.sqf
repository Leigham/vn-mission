/*
	File : fn_showNotification.sqf

	Author: UpperM

	Description:

	Show some infos with a nice move :-)
	You can edit the script whitout my permission but you are not allow to remove the credit (but you can add "Edit by : Your Name" )
	You are not allowed to sale my script !

	Contact : uppperm@gmail.com
	Youtube : upperm.fr/youtube
	Website : upperm.fr

	Parameter(s):
	_title 		: STRING - Default Value  : ""
	_text 		: STRING - Default Value  : ""
	_stripColor	: ARRAY  - Default Value  : [0.043,0.486,0.769,1][245, 0, 0, 0.94](RED)[0, 216, 245, 0.94]Cyan [0, 245, 8, 0.94](green)
	_sound 		: STRING - Default Value  : "additemfailed"

	If you don't want to use sound, add "" in the fourth params. ["Error","Oops it's not possible my friend",nil,"mySound"]
	If you want a sound but you don't want to change the strip color, use nil as third params : ["Error","Oops it's not possible my friend",nil,""]

	Exemple : ["Error","Oops it's not possible my friend",nil,""] call UPM_fnc_showNotification;

	Returns: -
*/
private ["_display","_ctrlText","_ctrlStrip","_ctrlCommited"];

params ["_title","_text","_stripColor","_sound"];

if (_text isEqualTo "") exitWith {diag_log " /!\ ERROR UPM_fnc_showNotification : No text was set as second params !"};

disableSerialization;
15 cutRsc ["RscNotification", "PLAIN"];

_display = uiNamespace getVariable "RscNotification";
_display2 = findDisplay 913651;
diag_log format ["Display 2 = %1",_display2];
_ctrlText = _display displayCtrl 913652;
_ctrlStrip = _display displayCtrl 913653;
diag_log format ["_ctrltext = %1",_ctrlText];
diag_log format ["_ctrlStrip = %1",_ctrlStrip];
_ctrlStrip ctrlSetBackgroundColor _stripColor;
_ctrlText ctrlSetStructuredText parseText format ["<t size='0.8' font='PuristaLight'>%1</t><br/><t size='0.8' font='PuristaLight' color='#c4c4c4'>%2</t>", _title, _text];


_ctrlText ctrlSetPosition [0.01 * safezoneW + safezoneX, (ctrlPosition _ctrlText) select 1, (ctrlPosition _ctrlText) select 2, ctrlTextHeight _ctrlText];
_ctrlText ctrlCommit 1;

_ctrlStrip ctrlSetPosition [0.0055 * safezoneW + safezoneX, (ctrlPosition _ctrlStrip) select 1, (ctrlPosition _ctrlStrip) select 2, ctrlTextHeight _ctrlText];
_ctrlStrip ctrlCommit 1;
diag_log format ["::::FOR DEGUG::::"];
diag_log format ["::::Displaye = %1::::",_display];
diag_log format ["::::title = %1::::",_title];
diag_log format ["::::text = %1::::",_text];
if (_sound != "") then {playSound _sound};