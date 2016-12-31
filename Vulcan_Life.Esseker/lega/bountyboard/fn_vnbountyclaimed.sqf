

params ["_unitName","_killerName","_unit","_killer","_vnAmount","_vnPlacedBy"];

hint format ["Congratulations, %1, you have just killed %2, and claimed the bounty of %3 placed by %4, the money has been wired to your bank.",_killerName,_unitName,_vnAmount,_vnPlacedBy];
life_atmbank = life_atmbank + _vnAmount;
