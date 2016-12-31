waitUntil {!isNull (findDisplay 13580)};



lbClear 13581;
{
  _x params ["_articleTitle","_author","_articleText"];
  	_articleTitlethis = lbAdd [13581, _articleTitle];
    _GetArticleData = lbSetData [13581, _articleTitle];
	   lbSetTooltip [13581, _articleTitlethis,_articleTitle];
} count vn_NewsArticles;
