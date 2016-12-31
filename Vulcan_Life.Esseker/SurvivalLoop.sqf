//Damages player based on food and water 
While {true} do
{
_playerDamage = Damage player;

 if (life_hunger < 2) then {
 player setDammage (_playerDamage + 0.05);
 hint "You are starving, eat something to stop taking damage";
 };
  if (life_thirst < 2) then {
 player setDammage (_playerDamage + 0.05);
 hint "You need a drink, drink something to stop taking damage";
 };
};