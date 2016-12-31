/*
*    Format:
*        licenses: ARRAY (This is for limiting spawn to certain things)
*           0: License Name
*           1: License Check Type
*                false: If license isn't set
*                true: If license is set
*           Example:
*                licenses[] = { { "pilot", true }, { "rebel", false } }; //Shows up for players with pilot and without rebel license.
*
*        level: ARRAY (This is for limiting spawn to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / INVERSE)
*                SCALAR: VALUE => VALUE
*                BOOL: VALUE EXISTS
*                EQUAL: VALUE == VALUE
*                INVERSE: VALUE <= VALUE
*            2: What to compare to (-1 = Check Disabled)
*
*/
class CfgSpawnPoints {
	class Esseker{
    class Civilian {
        class Athira {
            displayName = "Dawn City (Settlement)";
            spawnMarker = "civ_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Esseker";
            spawnMarker = "civ_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Kavala {
            displayName = "Bandit Outpost";
            spawnMarker = "rebel1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

        class Sofia {
            displayName = "Petlov Grad";
            spawnMarker = "civ_spawn_4";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };

    class Cop {
        class Kavala {
            displayName = "Settlement HQ";
            spawnMarker = "cop_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Airfield HQ";
            spawnMarker = "cop_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Esseker HQ";
            spawnMarker = "cop_spawn_2";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };

    class Medic {
        class Athira {
            displayName = "Settlement HQ";
            spawnMarker = "medic_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Esseker Old Hospital";
            spawnMarker = "medic_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };
	};
};
