waitUntil {!isNull player};
waitUntil {!(isNull (findDisplay 46))};

//Status Bar Config and Startup Options

//Choose Options
//--------------------------------------------------------------------------------------------------------------------------------------		
_WSC = false;  //Option whether to use and display world space coords in the admin status bar (true or false)


_sb_admin_list = ["76561197996565851","76561198029978132"];	
//--------------------------------------------------------------------------------------------------------------------------------------

//Start the Status Bar
	
if ((getPlayerUID player) in _sb_admin_list) then  //admins id here
{ 
	if (_WSC) then
	{
		[] execVM "core\functions\Status Bar\adminbar_ws.sqf";
	}
	else
	{
		[] execVM "core\functions\Status Bar\adminbar.sqf";
	};
} 
else 
{
	[] execVM "core\functions\Status Bar\PlayerBar.sqf";
};