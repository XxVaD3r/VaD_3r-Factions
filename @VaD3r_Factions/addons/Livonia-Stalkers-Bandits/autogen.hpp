//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 208.149102 on Stable branch
// Generated with ALiVE version 1.15.0.2112041
//////////////////////////////////////////////////////////////////////////////////

class CfgFactionClasses {
    class O_BanditArmy {
        displayName = "Livonia STALKER : Bandits";
        side = 0;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 0;
    };
};

//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 208.149102 on Stable branch
// Generated with ALiVE version 1.15.0.2112041
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class rhsgref_ins_engineer;
    class rhsgref_ins_engineer_OCimport_01 : rhsgref_ins_engineer { scope = 0; class EventHandlers; };
    class rhsgref_ins_engineer_OCimport_02 : rhsgref_ins_engineer_OCimport_01 { class EventHandlers; };


    class O_BanditArmy_Unarmed_01 : rhsgref_ins_engineer_OCimport_02 {
        author = "VaD_3r";
        scope = 2;
        scopeCurator = 2;
        displayName = "Unarmed";
        side = 0;
        faction = "O_BanditArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS","rhs_scarf","G_CIVIL_male"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        linkedItems[] = {"ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_3_F",{{"FirstAidKit",1},{"rhs_mag_rgn",1,1}}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_BanditArmy_Leader_01 : O_BanditArmy_Unarmed_01 {
        author = "VaD_3r";
        scope = 2;
        scopeCurator = 2;
        displayName = "Leader";
        side = 0;
        faction = "O_BanditArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS","rhs_scarf","G_CIVIL_male"};

        uniformClass = "U_C_IDAP_Man_Tee_F";

        linkedItems[] = {"rhs_lifchik_light","rhs_6b26_digi_bala","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_lifchik_light","rhs_6b26_digi_bala","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_g36c","Binocular"};
        respawnWeapons[] = {"rhs_weap_g36c","Binocular"};

        magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36c","","","optic_Holosight_blk_F",{"rhssaf_30rnd_556x45_EPR_G36",30},{},""},{},{},{"U_C_IDAP_Man_Tee_F",{{"FirstAidKit",2},{"rhs_mag_rgn",1,1}}},{"rhs_lifchik_light",{{"rhssaf_30rnd_556x45_EPR_G36",12,30}}},{},"rhs_6b26_digi_bala","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_BanditArmy_Rifleman_01 : O_BanditArmy_Unarmed_01 {
        author = "VaD_3r";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "O_BanditArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS","rhs_scarf","G_CIVIL_male"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        linkedItems[] = {"rhs_6sh117_rifleman","rhsgref_helmet_m1942","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6sh117_rifleman","rhsgref_helmet_m1942","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_akms","Binocular"};
        respawnWeapons[] = {"rhs_weap_akms","Binocular"};

        magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};
        respawnMagazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akms","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{},{"U_I_C_Soldier_Bandit_3_F",{{"FirstAidKit",2},{"rhs_mag_rgn",1,1}}},{"rhs_6sh117_rifleman",{{"rhs_30Rnd_762x39mm_bakelite",10,30}}},{},"rhsgref_helmet_m1942","G_Shades_Red",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_BanditArmy_Grenadier_01 : O_BanditArmy_Unarmed_01 {
        author = "VaD_3r";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "O_BanditArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS","rhs_scarf","G_CIVIL_male"};

        uniformClass = "U_C_Mechanic_01_F";

        linkedItems[] = {"rhsusf_mbav_grenadier","H_MilCap_grn","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_mbav_grenadier","H_MilCap_grn","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m70b3n_pbg40","Binocular"};
        respawnWeapons[] = {"rhs_weap_m70b3n_pbg40","Binocular"};

        magazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhs_VOG25","rhssaf_30Rnd_762x39mm_M67","rhs_VOG25"};
        respawnMagazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhs_VOG25","rhssaf_30Rnd_762x39mm_M67","rhs_VOG25"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m70b3n_pbg40","","","",{"rhssaf_30Rnd_762x39mm_M67",30},{"rhs_VOG25",1},""},{},{},{"U_C_Mechanic_01_F",{{"FirstAidKit",1},{"rhs_mag_rgn",1,1},{"rhssaf_30Rnd_762x39mm_M67",1,30}}},{"rhsusf_mbav_grenadier",{{"rhssaf_30Rnd_762x39mm_M67",7,30},{"rhs_VOG25",6,1},{"CUP_1Rnd_SmokeYellow_GP25_M",1,1},{"CUP_1Rnd_SmokeGreen_GP25_M",1,1},{"CUP_1Rnd_SmokeRed_GP25_M",1,1},{"CUP_1Rnd_SMOKE_GP25_M",1,1}}},{},"H_MilCap_grn","G_Bandanna_blk",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_BanditArmy_Specialist_01 : O_BanditArmy_Unarmed_01 {
        author = "VaD_3r";
        scope = 2;
        scopeCurator = 2;
        displayName = "Specialist";
        side = 0;
        faction = "O_BanditArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS","rhs_scarf","G_CIVIL_male"};

        uniformClass = "U_C_Uniform_Farmer_01_F";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b26_bala_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b26_bala_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

        weapons[] = {"CUP_arifle_Mk16_STD","Binocular"};
        respawnWeapons[] = {"CUP_arifle_Mk16_STD","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16","CUP_30Rnd_556x45_Stanag_Mk16"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16","CUP_30Rnd_556x45_Stanag_Mk16"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk16_STD","","rhsusf_acc_anpeq15side","rhsusf_acc_su230a_mrds_c",{"CUP_30Rnd_556x45_Stanag_Mk16",30},{},"rhsusf_acc_harris_bipod"},{},{},{"U_C_Uniform_Farmer_01_F",{{"FirstAidKit",1},{"rhs_mag_rgn",1,1}}},{"rhs_6b45_rifleman",{{"CUP_30Rnd_556x45_Stanag_Mk16",12,30}}},{},"rhs_6b26_bala_green","G_Combat",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_BanditArmy_Auto_Rifleman_01 : O_BanditArmy_Unarmed_01 {
        author = "VaD_3r";
        scope = 2;
        scopeCurator = 2;
        displayName = "Auto Rifleman";
        side = 0;
        faction = "O_BanditArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS","rhs_scarf","G_CIVIL_male"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        linkedItems[] = {"rhs_6b45","rhs_6b28_flora","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45","rhs_6b28_flora","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74","Binocular"};
        respawnWeapons[] = {"CUP_arifle_RPK74","Binocular"};

        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"};
        respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"};

        backpack = "rhsusf_falconii";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74","","","",{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",75},{},""},{},{},{"U_I_C_Soldier_Bandit_3_F",{{"FirstAidKit",2},{"rhs_mag_rgn",1,1}}},{"rhs_6b45",{}},{"rhsusf_falconii",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",6,75}}},"rhs_6b28_flora","rhsusf_shemagh2_gogg_grn",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_BanditArmy_Sniper_01 : O_BanditArmy_Unarmed_01 {
        author = "VaD_3r";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 0;
        faction = "O_BanditArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS","rhs_scarf","G_CIVIL_male"};

        uniformClass = "U_OrestesBody";

        linkedItems[] = {"rhs_suspender_AK8_chestrig","H_Cap_brn_SPECOPS","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_suspender_AK8_chestrig","H_Cap_brn_SPECOPS","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_LeeEnfield_rail","Binocular"};
        respawnWeapons[] = {"CUP_srifle_LeeEnfield_rail","Binocular"};

        magazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};
        respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_LeeEnfield_rail","","","optic_Nightstalker",{"CUP_10x_303_M",10},{},"rhs_acc_harris_swivel"},{},{},{"U_OrestesBody",{{"FirstAidKit",1},{"rhs_mag_rgn",1,1}}},{"rhs_suspender_AK8_chestrig",{{"CUP_10x_303_M",11,10}}},{},"H_Cap_brn_SPECOPS","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_BanditArmy_Man_SMG_01 : O_BanditArmy_Unarmed_01 {
        author = "VaD_3r";
        scope = 2;
        scopeCurator = 2;
        displayName = "Man (SMG)";
        side = 0;
        faction = "O_BanditArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS","rhs_scarf","G_CIVIL_male"};

        uniformClass = "U_I_L_Uniform_01_camo_F";

        linkedItems[] = {"rhs_suspender_AK","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_suspender_AK","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_saiga9"};
        respawnWeapons[] = {"CUP_smg_saiga9"};

        magazines[] = {"CUP_10Rnd_9x19_Saiga9","CUP_10Rnd_9x19_Saiga9"};
        respawnMagazines[] = {"CUP_10Rnd_9x19_Saiga9","CUP_10Rnd_9x19_Saiga9"};

        backpack = "B_AssaultPack_dgtl";

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_saiga9","","","optic_Aco",{"CUP_10Rnd_9x19_Saiga9",10},{},""},{},{},{"U_I_L_Uniform_01_camo_F",{{"FirstAidKit",1},{"rhs_mag_rgn",1,1},{"CUP_30Rnd_9x19_Vityaz",2,30}}},{"rhs_suspender_AK",{{"CUP_30Rnd_9x19_Vityaz",6,30}}},{"B_AssaultPack_dgtl",{{"CUP_30Rnd_9x19_Vityaz",3,30}}},"H_Bandanna_sgg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_BanditArmy_Man_Shotgun_01 : O_BanditArmy_Unarmed_01 {
        author = "VaD_3r";
        scope = 2;
        scopeCurator = 2;
        displayName = "Man (Shotgun)";
        side = 0;
        faction = "O_BanditArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS","rhs_scarf","G_CIVIL_male"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"V_Rangemaster_belt","rhs_fieldcap_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_Rangemaster_belt","rhs_fieldcap_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_sgun_CZ584"};
        respawnWeapons[] = {"CUP_sgun_CZ584"};

        magazines[] = {"CUP_1Rnd_12Gauge_Pellets_No00_Buck","CUP_1Rnd_762x51_CZ584","CUP_1Rnd_12Gauge_Pellets_No00_Buck","CUP_1Rnd_762x51_CZ584"};
        respawnMagazines[] = {"CUP_1Rnd_12Gauge_Pellets_No00_Buck","CUP_1Rnd_762x51_CZ584","CUP_1Rnd_12Gauge_Pellets_No00_Buck","CUP_1Rnd_762x51_CZ584"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_sgun_CZ584","","","",{"CUP_1Rnd_12Gauge_Pellets_No00_Buck",1},{"CUP_1Rnd_762x51_CZ584",1},""},{},{},{"U_I_C_Soldier_Para_1_F",{{"FirstAidKit",2},{"rhs_mag_rgn",1,1},{"CUP_1Rnd_762x51_CZ584",1,1},{"CUP_1Rnd_12Gauge_Pellets_No00_Buck",15,1}}},{"V_Rangemaster_belt",{{"CUP_1Rnd_12Gauge_Pellets_No00_Buck",35,1}}},{},"rhs_fieldcap_khk","G_Aviator",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_BanditArmy_Man_Rifle_01 : O_BanditArmy_Unarmed_01 {
        author = "VaD_3r";
        scope = 2;
        scopeCurator = 2;
        displayName = "Man (Rifle)";
        side = 0;
        faction = "O_BanditArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS","rhs_scarf","G_CIVIL_male"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        linkedItems[] = {"rhs_6b13_Flora_6sh92","H_MilCap_gen_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b13_Flora_6sh92","H_MilCap_gen_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_SKS_rail"};
        respawnWeapons[] = {"CUP_SKS_rail"};

        magazines[] = {"CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_SKS_rail","","","rhsusf_acc_su230_mrds",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{},{"U_I_C_Soldier_Bandit_3_F",{{"FirstAidKit",2},{"rhs_mag_rgn",1,1}}},{"rhs_6b13_Flora_6sh92",{{"CUP_10Rnd_762x39_SKS_M",13,10}}},{},"H_MilCap_gen_F","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};

//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 208.149102 on Stable branch
// Generated with ALiVE version 1.15.0.2112041
//////////////////////////////////////////////////////////////////////////////////

class CfgGroups {
    class EAST {

        class O_BanditArmy {
            name = "Livonia STALKER : Bandits";

            class Infantry {
                name = "Infantry";

                class o_banditarmy_infantry_team {
                    name = "Team";
                    side = 0;
                    faction = "O_BanditArmy";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_BanditArmy_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Specialist_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Sniper_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Auto_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Rifleman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Man_SMG_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Man_Rifle_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Man_Shotgun_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Grenadier_01";
                    };
                };

                class o_banditarmy_infantry_recon {
                    name = "Recon";
                    side = 0;
                    faction = "O_BanditArmy";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_BanditArmy_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Specialist_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Sniper_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Rifleman_01";
                    };
                };

                class o_banditarmy_infantry_patrol {
                    name = "Patrol";
                    side = 0;
                    faction = "O_BanditArmy";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_BanditArmy_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Sniper_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Auto_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Rifleman_01";
                    };
                };

                class o_banditarmy_infantry_special {
                    name = "Special";
                    side = 0;
                    faction = "O_BanditArmy";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_BanditArmy_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Specialist_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Sniper_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Grenadier_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Auto_Rifleman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BanditArmy_Man_Rifle_01";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};