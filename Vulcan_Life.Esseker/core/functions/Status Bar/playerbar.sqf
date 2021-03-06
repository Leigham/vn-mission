waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

	_rscLayer = "statusBar" call BIS_fnc_rscLayer;
	_rscLayer cutRsc["statusBar","PLAIN"];
	systemChat format["Loading Player info...", _rscLayer];
	[] spawn
	{

		sleep 5;
		//set the color values.
		//Additional color codes can be found here:  http://html-color-codes.com/
		_colourDefault  = parseText "#FFFFFF"; //set your default colour here
		_colour100 		= parseText "#336600";
		_colour90 		= parseText "#339900";
		_colour80 		= parseText "#33CC00";
		_colour70 		= parseText "#33FF00";
		_colour60 		= parseText "#66FF00";
		_colour50 		= parseText "#CCFF00";
		_colour40 		= parseText "#CCCC00";
		_colour30 		= parseText "#CC9900";
		_colour20 		= parseText "#CC6600";
		_colour10 		= parseText "#CC3300";
		_colour0 		= parseText "#CC0000";
		_colourDead 	= parseText "#000000";


	while {true} do
	{
		sleep 1;

		//moved the creation of the status bar inside the loop and create it if it is null,
		//this is to handle instance where the status bar is disappearing
		if(isNull ((uiNamespace getVariable "statusBar")displayCtrl 55555)) then
		{
			diag_log "statusbar is null create";
			disableSerialization;
			_rscLayer = "statusBar" call BIS_fnc_rscLayer;
			_rscLayer cutRsc["statusBar","PLAIN"];
		};

		//initialize variables and set values
		_unit = _this select 0;
		_damage = round ((1 - (damage player)) * 100);
		//_damage = (round(_damage * 100));
		_hunger = round((life_hunger/100) * 100);
		_thirst = round((life_thirst/100) * 100);
		_wallet = life_cash;
		//_stamina = round(EPOCH_playerStamina * 100) / 100;
		//_toxPercent = round (EPOCH_playerToxicity);
		//_energy = round(EPOCH_playerEnergy);
		//_energyPercent =  floor((_energy / 2500 ) * 100);
		_fps = format["%1", diag_fps];
		_grid = mapGridPosition  player;
		_xx = (format[_grid]) select  [0,3];
		_yy = (format[_grid]) select  [3,3];
		_time = (round(240-(serverTime)/60));  //edit the '240' value (60*4=240) to change the countdown timer if your server restarts are shorter or longer than 4 hour intervals
		_hours = (floor(_time/60));
		_minutes = (_time - (_hours * 60));
		_players = (count playableUnits -1);


		switch(_minutes) do	{
			case 9: {_minutes = "09"};
			case 8: {_minutes = "08"};
			case 7: {_minutes = "07"};
			case 6: {_minutes = "06"};
			case 5: {_minutes = "05"};
			case 4: {_minutes = "04"};
			case 3: {_minutes = "03"};
			case 2: {_minutes = "02"};
			case 1: {_minutes = "01"};
			case 0: {_minutes = "00"};
		};


		//Colour coding
		//Damage
		_colourDamage = _colourDefault;

		switch true do {
			case(_damage >= 100) : {_colourDamage = _colour100;};
			case((_damage >= 90) && (_damage < 100)) : {_colourDamage =  _colour90;};
			case((_damage >= 80) && (_damage < 90)) : {_colourDamage =  _colour80;};
			case((_damage >= 70) && (_damage < 80)) : {_colourDamage =  _colour70;};
			case((_damage >= 60) && (_damage < 70)) : {_colourDamage =  _colour60;};
			case((_damage >= 50) && (_damage < 60)) : {_colourDamage =  _colour50;};
			case((_damage >= 40) && (_damage < 50)) : {_colourDamage =  _colour40;};
			case((_damage >= 30) && (_damage < 40)) : {_colourDamage =  _colour30;};
			case((_damage >= 20) && (_damage < 30)) : {_colourDamage =  _colour20;};
			case((_damage >= 10) && (_damage < 20)) : {_colourDamage =  _colour10;};
			case((_damage >= 1) && (_damage < 10)) : {_colourDamage =  _colour0;};
			case(_damage < 1) : {_colourDamage =  _colourDead;};
		};

		//Hunger
		_colourHunger = _colourDefault;
		switch true do {
			case(_hunger >= 100) : {_colourHunger = _colour100;};
			case((_hunger >= 90) && (_hunger < 100)) :  {_colourHunger =  _colour90;};
			case((_hunger >= 80) && (_hunger < 90)) :  {_colourHunger =  _colour80;};
			case((_hunger >= 70) && (_hunger < 80)) :  {_colourHunger =  _colour70;};
			case((_hunger >= 60) && (_hunger < 70)) :  {_colourHunger =  _colour60;};
			case((_hunger >= 50) && (_hunger < 60)) :  {_colourHunger =  _colour50;};
			case((_hunger >= 40) && (_hunger < 50)) :  {_colourHunger =  _colour40;};
			case((_hunger >= 30) && (_hunger < 40)) :  {_colourHunger =  _colour30;};
			case((_hunger >= 20) && (_hunger < 30)) :  {_colourHunger =  _colour20;};
			case((_hunger >= 10) && (_hunger < 20)) :  {_colourHunger =  _colour10;};
			case((_hunger >= 1) && (_hunger < 10)) :  {_colourHunger =  _colour0;};
			case(_hunger < 1) : {_colourHunger =  _colourDead;};
		};

		//Thirst
		_colourThirst = _colourDefault;
		switch true do{

			case(_thirst >= 100) : {_colourThirst = _colour100;};
			case((_thirst >= 90) && (_thirst < 100)) :  {_colourThirst =  _colour90;};
			case((_thirst >= 80) && (_thirst < 90)) :  {_colourThirst =  _colour80;};
			case((_thirst >= 70) && (_thirst < 80)) :  {_colourThirst =  _colour70;};
			case((_thirst >= 60) && (_thirst < 70)) :  {_colourThirst =  _colour60;};
			case((_thirst >= 50) && (_thirst < 60)) :  {_colourThirst =  _colour50;};
			case((_thirst >= 40) && (_thirst < 50)) :  {_colourThirst =  _colour40;};
			case((_thirst >= 30) && (_thirst < 40)) :  {_colourThirst =  _colour30;};
			case((_thirst >= 20) && (_thirst < 30)) :  {_colourThirst =  _colour20;};
			case((_thirst >= 10) && (_thirst < 20)) :  {_colourThirst =  _colour10;};
			case((_thirst >= 1) && (_thirst < 10)) :  {_colourThirst =  _colour0;};
			case(_thirst < 1) : {_colourThirst =  _colourDead;};
		};

		//Energy
		//_colourEnergy = _colourDefault;
		/*switch true do{

			case(_energyPercent >= 100) : {_colourEnergy = _colour100;};
			case((_energyPercent >= 90) && (_energyPercent < 100)) :  {_colourEnergy =  _colour90;};
			case((_energyPercent >= 80) && (_energyPercent < 90)) :  {_colourEnergy =  _colour80;};
			case((_energyPercent >= 70) && (_energyPercent < 80)) :  {_colourEnergy =  _colour70;};
			case((_energyPercent >= 60) && (_energyPercent < 70)) :  {_colourEnergy =  _colour60;};
			case((_energyPercent >= 50) && (_energyPercent < 60)) :  {_colourEnergy =  _colour50;};
			case((_energyPercent >= 40) && (_energyPercent < 50)) :  {_colourEnergy =  _colour40;};
			case((_energyPercent >= 30) && (_energyPercent < 40)) :  {_colourEnergy =  _colour30;};
			case((_energyPercent >= 20) && (_energyPercent < 30)) :  {_colourEnergy =  _colour20;};
			case((_energyPercent >= 10) && (_energyPercent < 20)) :  {_colourEnergy =  _colour10;};
			case((_energyPercent >= 1) && (_energyPercent < 10)) :  {_colourEnergy =  _colour0;};
			case(_energyPercent < 1) : {_colourEnergy =  _colour0;};
		};*/

		/*//Toxicity
		_colourToxicity = _colourDefault;
		switch true do{
			case(_toxPercent >= 100) : {_colourToxicity = _colourDead;};
			case((_toxPercent >= 90) && (_toxPercent < 100)) :  {_colourToxicity =  _colour0;};
			case((_toxPercent >= 80) && (_toxPercent < 90)) :  {_colourToxicity =  _colour10;};
			case((_toxPercent >= 70) && (_toxPercent < 80)) :  {_colourToxicity =  _colour20;};
			case((_toxPercent >= 60) && (_toxPercent < 70)) :  {_colourToxicity =  _colour30;};
			case((_toxPercent >= 50) && (_toxPercent < 60)) :  {_colourToxicity =  _colour40;};
			case((_toxPercent >= 40) && (_toxPercent < 50)) :  {_colourToxicity =  _colour50;};
			case((_toxPercent >= 30) && (_toxPercent < 40)) :  {_colourToxicity =  _colour60;};
			case((_toxPercent >= 20) && (_toxPercent < 30)) :  {_colourToxicity =  _colour70;};
			case((_toxPercent >= 10) && (_toxPercent < 20)) :  {_colourToxicity =  _colour80;};
			case((_toxPercent >= 1) && (_toxPercent < 10)) :  {_colourToxicity =  _colour90;};
			case(_toxPercent < 1) : {_colourToxicity =  _colour100;};
		};*/

		/*//Stamina
		_colourStamina = _colourDefault;
        */
		//display the information
		((uiNamespace getVariable "statusBar")displayCtrl 55555)ctrlSetStructuredText parseText
			format["
			<t shadow='1' shadowColor='#000000' color='%7'><img size='1.6'  shadowColor='#000000' image='' color='%7'/> Cops:%14</t>
			<t shadow='1' shadowColor='#000000' color='%7'><img size='1.6'  shadowColor='#000000' image='' color='%7'/> Medics:%15</t>
			<t shadow='1' shadowColor='#000000' color='%7'><img size='1.6'  shadowColor='#000000' image='' color='%7'/> Civilians:%16</t>
			<t shadow='1' shadowColor='#000000' color='%7'><img size='1.6'  shadowColor='#000000' image='media\ico_money.paa' color='%7'/> %3</t>
			<t shadow='1' shadowColor='#000000' color='%7'><img size='1.6'  shadowColor='#000000' image='media\bank.paa' color='%7'/> %13</t>
			<t shadow='1' shadowColor='#000000' color='%7'><img size='1.6'  shadowColor='#000000' image='media\damage.paa' color='%8'/> %2%12</t>
			<t shadow='1' shadowColor='#000000' color='%7'><img size='1.6'  shadowColor='#000000' image='media\hunger.paa' color='%9'/> %4%12</t>
			<t shadow='1' shadowColor='#000000' color='%7'><img size='1.6'  shadowColor='#000000' image='media\thirst.paa' color='%10'/> %5%12</t>
			<t shadow='1' shadowColor='#000000' color='%7'>FPS: %6</t>
			<t shadow='1' shadowColor='#000000' color='%7'>%11</t>",
					_players,
					_damage,
					life_cash,
					_hunger,
					_thirst,
					round diag_fps,
					_colourDefault,
					_colourDamage,
					_colourHunger,
					_colourThirst,
					name player,
					"%",
					life_atmbank,
					west countSide playableUnits,
					independent countSide playableUnits,
					civilian countSide playableUnits
				];




	};
};
