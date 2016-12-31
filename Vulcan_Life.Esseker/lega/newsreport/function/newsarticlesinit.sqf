//NewsFunctions.sqf
//defining variable
vn_NewsArticles = [];
player setVariable ["vnplacedArticle",false,true];
player setVariable ["sameArticle",false,true];
player setVariable ["NewsReporter",false,true];
//when the player presses the place article button
Lega_fnc_placeArticle =
{
	disableSerialization;

	if (player getVariable["vnplacedArticle",true]) exitwith {hint "You have recently placed an article, please try again later"};

	private _thisArticleTitle = ctrlText 9992;
	private _thisAuthor = ctrlText 9993;
	private _thisArticleText = ctrlText 9994;

	diag_log format ["%1---%2---%3",_thisArticleText,_thisAuthor,_thisArticleTitle];

	private _thisArray = [_thisArticleText,_thisAuthor,_thisArticleTitle];
	private _index = [_thisAuthor, vn_NewsArticles] call TON_fnc_index;

	if !(_index isEqualTo -1) then {

	    (vn_NewsArticles select _index) params ["_articleTitle","_author","_articleText"];

	    diag_log format ["Found the Matching Variables %1 -- %2 -- %3",_articleText,_author,_articleTitle];
	    diag_log format str _articleText;
	    diag_log format str _articleTitle;
	    diag_log format str _author;

	    if (_thisArticleTitle isEqualTo _articleTitle) exitWith{player setVariable ["sameArticle",true,true];};
	    if (_thisArticleText isEqualTo _articleText) exitWith{player setVariable ["sameArticle",true,true];};
	    player setVariable ["sameArticle",false,true];
	};

	if (player getVariable ["sameArticle",true]) exitwith{hint "There is already an article with this title or text, please check your article and try again."};

	vn_NewsArticles pushBack [_thisArticleTitle,_thisAuthor,_thisArticleText];

	publicVariable "vn_NewsArticles";

	diag_log str vn_NewsArticles;

	hint format ["[ESSEKER NEWS] Article : %1 Placed, you have been paid 4000 as a bonus", _thisArticleTitle];

	life_cash = life_cash + 4000;
	[0] call SOCK_fnc_updatePartial;

	player setVariable ["vnplacedArticle",true,true];

	closeDialog 9991;

	[[1,2],"STR_BreakingNews",true,[_thisArticleTitle]] remoteExeccall ["life_fnc_broadcast", -2];
};


//updates the news article page depending on what they pick
Lega_fnc_updateArticle =
{
  disableSerialization;
  hint "function starting";
  private _display = findDisplay 13580;
  private _ArticleList = _display displayCtrl 13581;
  private _selectedArticle = lbCurSel _ArticleList;
  private _thisSelectedArticle = lbtext [13581,_selectedArticle];
  private _index = [_thisSelectedArticle, vn_NewsArticles] call TON_fnc_index;
  hint "";
  hint format ["%1 --- %2",_thisSelectedArticle,_index];

  if !(_index isEqualTo -1) then {

      (vn_NewsArticles select _index) params ["_articleTitle","_author","_articleText"];

      diag_log format ["Found the Matching Variables %1 -- %2",_articleTitle,_author];

      ctrlSetText [13583,format ["%1",_author]];
      ctrlSetText [13584,format ["%1",_articleTitle]];
      ctrlSetText [13582,format ["%1",_articleText]];

  };
};
//forces the player to hit the close article button twice so they dont accidenlt press c;pse
Lega_fnc_acceptnrclose =
{
	if(player getVariable["vn_CloseNR",true])then{
    closeDialog 9991;
  	player setVariable ["vn_CloseNR", false];
  	hint "You have Successfully Cancelled Your News Report";
    (findDisplay 9991) displayRemoveEventHandler ["KeyDown", noesckey];
  }else{

    player setVariable ["vn_CloseNR",true];
  	hint "Please Click Cancel Again To Close";
 };
};

for "_i" from 0 to 1 step 0 do {
  if(player getVariable ["vnplacedArticle",true])then{
    uiSleep (1 * 60);
    hint "You can now place another Article.";
    player setVariable ["vnplacedArticle",false,true];
  };
};
