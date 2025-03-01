class CUP_B_USArmy_Soldier_BDUv2_ERDL_lowland;
class CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_lowland: CUP_B_USArmy_Soldier_BDUv2_ERDL_lowland
{
    modelSides[] = {3,1,2};
};

class CI_Base: I_Soldier_base_F
{
	_generalMacro="CI_base";
	author="Saxon";
	scope=1;
	displayName="Chaos Soldier Base";
	faction="TWC_CI_Units";
	nakedUniform="U_BasicBody";
	uniformClass="CUP_U_B_BDUv2_gloves_ERDL_lowland";
	linkedItems[]=
	{
		"CUP_V_B_Interceptor_Rifleman_Olive",
		"CUP_H_PASGTv2_NVG_OD",
		"CUP_NVG_1PN138",
		"G_RegulatorMask_F",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_B_Interceptor_Rifleman_Olive",
		"CUP_H_PASGTv2_NVG_OD",
		"CUP_NVG_1PN138",
		"G_RegulatorMask_F",
		"ItemCompass",
		"ItemWatch"
	};
	Items[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_tourniquet"
	};
	respawnItems[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_tourniquet"
	};
};
class CI_Rifleman: CI_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="Rifleman";
	weapons[]=
	{
		"CUP_arifle_AKS74_Early",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"CUP_arifle_AKS74_Early",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_HandGrenade_RGD5"
	};
};

class CI_SMG: CI_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="Submachinegunner";
	weapons[]=
	{
		"CUP_smg_MP5A5",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"CUP_smg_MP5A5",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_30Rnd_9x19_MP5",
		"CUP_HandGrenade_RGD5"
	};
};

class CI_Rifleman_G3: CI_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="Rifleman (G3)";
	weapons[]=
	{
		"CUP_arifle_G3A3_ris",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"CUP_arifle_G3A3_ris",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_20Rnd_762x51_G3",
		"CUP_HandGrenade_RGD5"
	};
};

class CI_Shotgunner: CI_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="Shotgunner";
	weapons[]=
	{
		"CUP_sgun_M1014",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"CUP_sgun_M1014",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_8Rnd_12Gauge_Pellets_No00_Buck",
		"CUP_HandGrenade_RGD5"
	};
};

class CI_AutoRifleman: CI_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="Automatic Rifleman";
	weapons[]=
	{
		"CUP_lmg_minimi",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"CUP_lmg_minimi",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
		"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
		"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
		"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
		"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
		"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
		"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
		"CUP_HandGrenade_RGD5"
	};
};

class CI_Machinegunner: CI_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="Machinegunner";
	weapons[]=
	{
		"CUP_lmg_FNMAG_RIS_modern",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"CUP_lmg_FNMAG_RIS_modern",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
		"CUP_HandGrenade_RGD5"
	};
};

class TWC_Infantry_Millennial_Base;
class MTF_P90: TWC_Infantry_Millennial_Base
{
	author="Saxon";
	scope=2;
	scopeCurator = 2;
	faction="TWC_MTF_Units";
	nakedUniform="U_BasicBody";
	uniformClass="CUP_U_B_BDUv2_gloves_Tpattern";
	displayName="MTF (P90)";
	Items[] =
	{
		MEDICAL_LOADOUT,
		"ACRE_PRC343",
		"ACRE_PRC148"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACRE_PRC343",
		"ACRE_PRC148"
	};
	linkedItems[]=
	{
		"CUP_V_PMC_IOTV_Black_Patrol",
		"CUP_H_Ger_M92_Black_GG",
		"CUP_NVG_GPNVG_black",
		"G_Balaclava_TI_blk_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_PMC_IOTV_Black_Patrol",
		"CUP_H_Ger_M92_Black_GG",
		"CUP_NVG_GPNVG_black",
		"G_Balaclava_TI_blk_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[]=
	{
		"SMG_03C_black",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"SMG_03C_black",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_7("50Rnd_570x28_SMG_03"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		MAG_7("50Rnd_570x28_SMG_03"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
};

class MTF_HK416: TWC_Infantry_Millennial_Base
{
	author="Saxon";
	scope=2;
	scopeCurator = 2;
	faction="TWC_MTF_Units";
	nakedUniform="U_BasicBody";
	uniformClass="CUP_U_B_BDUv2_gloves_Tpattern";
	displayName="MTF (HK416)";
	linkedItems[]=
	{
		"CUP_V_PMC_IOTV_Black_Patrol",
		"CUP_H_Ger_M92_Black_GG",
		"CUP_NVG_GPNVG_black",
		"G_Balaclava_TI_blk_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_PMC_IOTV_Black_Patrol",
		"CUP_H_Ger_M92_Black_GG",
		"CUP_NVG_GPNVG_black",
		"G_Balaclava_TI_blk_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"CUP_optic_HoloBlack",
		"ACRE_PRC343",
		"ACRE_PRC148"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"CUP_optic_HoloBlack",
		"ACRE_PRC343",
		"ACRE_PRC148"
	};
	weapons[]=
	{
		"CUP_arifle_HK416_Black",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"CUP_arifle_HK416_Black",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_7("CUP_30Rnd_556x45_PMAG_QP"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		MAG_7("CUP_30Rnd_556x45_PMAG_QP"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
};

class TWC_BLUFOR_SCP_Modern_Guard_Light: B_Soldier_base_F {
	author = "[TWC] Rik";
	scope = 2;
	displayName = "Facility Guard (Light)";
	faction = "TWC_MTF_Units";
	vehicleClass = "EdSubcat_Personnel";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_Marshal";
	backpack = "";
	linkedItems[] =
	{
		"CUP_V_C_Police_Holster",
		"CUP_H_PMC_Cap_Grey",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_C_Police_Holster",
		"CUP_H_PMC_Cap_Grey",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	items[] =
	{
		MEDICAL_LOADOUT,
		"ACRE_BF888S"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACRE_BF888S"
	};
	weapons[] =
	{
		"CUP_hgun_Glock17_blk",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"CUP_hgun_Glock17_blk",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("CUP_17Rnd_9x19_glock17")
	};
	respawnMagazines[] =
	{
		MAG_7("CUP_17Rnd_9x19_glock17")
	};
};

class TWC_BLUFOR_SCP_Modern_Guard_Heavy: TWC_BLUFOR_SCP_Modern_Guard_Light {
	displayName = "Facility Guard (Heavy)";
	linkedItems[] =
	{
		"CUP_V_PMC_CIRAS_Black_Veh",
		"CUP_H_PMC_Cap_Grey",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_PMC_CIRAS_Black_Veh",
		"CUP_H_PMC_Cap_Grey",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] =
	{
		"CUP_smg_MP7_zeiss",
		"CUP_hgun_Glock17_blk",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"CUP_smg_MP7_zeiss",
		"CUP_hgun_Glock17_blk",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("CUP_40Rnd_46x30_MP7"),
		MAG_3("CUP_17Rnd_9x19_glock17"),
		MAG_2("ACE_M84")
	};
	respawnMagazines[] =
	{
		MAG_7("CUP_40Rnd_46x30_MP7"),
		MAG_3("CUP_17Rnd_9x19_glock17"),
		MAG_2("ACE_M84")
	};
};

class TWC_OPFOR_GRUP_Modern_Base: O_Soldier_base_F {
	author = "[TWC] Rik";
	scope = 1;
	displayName = "Soldier Base";
	faction = "TWC_GRUP_Units";
	vehicleClass = "EdSubcat_Personnel";
	nakedUniform = "U_BasicBody";
	uniformClass = "CUP_U_CRYE_MCAM_RUS2_Full";
	backpack = "";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
	linkedItems[] =
	{
		"CUP_V_CPC_Fastbelt_mc",
		"CUP_H_OpsCore_Covered_MCAM",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_CPC_Fastbelt_mc",
		"CUP_H_OpsCore_Covered_MCAM",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	items[] =
	{
		MEDICAL_LOADOUT,
		"ACRE_BF888S"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACRE_BF888S"
	};
	nightLinkedItems[] = {
		"CUP_NVG_1PN138"
	};
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"B_IR_Grenade"
	};
};

class TWC_OPFOR_GRUP_Modern_Rifleman: TWC_OPFOR_GRUP_Modern_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	backpack = "TWC_Backpack_GRUP_Modern_Rifleman";
	linkedItems[] =
	{
		"CUP_V_CPC_Fastbelt_mc",
		"CUP_H_OpsCore_Covered_MCAM",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_CPC_Fastbelt_mc",
		"CUP_H_OpsCore_Covered_MCAM",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_GRUP_AK12",
		"CUP_launch_RPG26",
		"hgun_Rook40_F",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"TWC_Weapon_GRUP_AK12",
		"CUP_launch_RPG26",
		"hgun_Rook40_F",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("CUP_30Rnd_545x39_AK12_Tan_M"),
		MAG_2("16Rnd_9x21_Mag"),
		MAG_2("CUP_HandGrenade_RGD5")
	};
	respawnMagazines[] =
	{
		MAG_7("CUP_30Rnd_545x39_AK12_Tan_M"),
		MAG_2("16Rnd_9x21_Mag"),
		MAG_2("CUP_HandGrenade_RGD5")
	};
};

class TWC_OPFOR_GRUP_Modern_Breacher: TWC_OPFOR_GRUP_Modern_Rifleman {
	displayName = "Breacher";
	backpack = "TWC_Backpack_GRUP_Modern_Breacher";
	linkedItems[] =
	{
		"CUP_V_CPC_Fastbelt_mc",
		"CUP_H_OpsCore_Covered_MCAM",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_CPC_Fastbelt_mc",
		"CUP_H_OpsCore_Covered_MCAM",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_GRUP_Saiga12K",
		"hgun_Rook40_F",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"TWC_Weapon_GRUP_Saiga12K",
		"hgun_Rook40_F",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("CUP_12Rnd_B_Saiga12_Slug"),
		MAG_3("CUP_12Rnd_B_Saiga12_Buck_00"),
		MAG_2("16Rnd_9x21_Mag"),
		MAG_2("CUP_HandGrenade_RGD5")
	};
	respawnMagazines[] =
	{
		MAG_3("CUP_12Rnd_B_Saiga12_Slug"),
		MAG_3("CUP_12Rnd_B_Saiga12_Buck_00"),
		MAG_2("16Rnd_9x21_Mag"),
		MAG_2("CUP_HandGrenade_RGD5")
	};
};

class TWC_OPFOR_GRUP_Modern_MG: TWC_OPFOR_GRUP_Modern_Rifleman {
	displayName = "Machinegunner";
	backpack = "TWC_Backpack_GRUP_Modern_MG";
	linkedItems[] =
	{
		"CUP_V_CPC_Fastbelt_mc",
		"CUP_H_OpsCore_Covered_MCAM",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"CUP_optic_Eotech553_Black",
		"CUP_acc_LLM_black",
		"CUP_muzzle_mfsup_Flashhider_PK_Black"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_CPC_Fastbelt_mc",
		"CUP_H_OpsCore_Covered_MCAM",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"CUP_optic_Eotech553_Black",
		"CUP_acc_LLM_black",
		"CUP_muzzle_mfsup_Flashhider_PK_Black"
	};
	weapons[] =
	{
		"TWC_Weapon_GRUP_PKP",
		"hgun_Rook40_F",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"TWC_Weapon_GRUP_PKP",
		"hgun_Rook40_F",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_2("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		MAG_2("16Rnd_9x21_Mag")
	};
	respawnMagazines[] =
	{
		MAG_2("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		MAG_2("16Rnd_9x21_Mag")
	};
};

class TWC_OPFOR_GRUP_Modern_ASSMG: TWC_OPFOR_GRUP_Modern_Rifleman {
	displayName = "Assistant Machinegunner";
	backpack = "TWC_Backpack_GRUP_Modern_ASSMG";
};

class TWC_OPFOR_GRUP_Modern_2iC: TWC_OPFOR_GRUP_Modern_Rifleman {
	displayName = "Group Subcommander";
	backpack = "TWC_Backpack_GRUP_Modern_2iC";
};

class TWC_OPFOR_GRUP_Modern_GroupCommander: TWC_OPFOR_GRUP_Modern_Rifleman {
	displayName = "Group Commander";
	TWC_isCommandRole = 1;
	backpack = "TWC_Backpack_GRUP_Modern_GroupCommander";
	weapons[] =
	{
		"TWC_Weapon_GRUP_AK12",
		"hgun_Rook40_F",
		"ACE_Yardage450",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"TWC_Weapon_GRUP_AK12",
		"hgun_Rook40_F",
		"ACE_Yardage450",
		"Throw",
		"Put"
	};
};

class TWC_OPFOR_GRUP_Modern_PlatoonCommander: TWC_OPFOR_GRUP_Modern_GroupCommander {
	displayName = "Platoon Commander";
	TWC_isCommandRole = 1;
};

class TWC_OPFOR_GRUP_Modern_PlatoonSergeant: TWC_OPFOR_GRUP_Modern_GroupCommander {
	displayName = "Platoon Sergeant";
	TWC_isCommandRole = 1;
	backpack = "TWC_Backpack_GRUP_Modern_PlatoonSergeant";
};

class TWC_OPFOR_GRUP_Modern_PlatoonMedic: TWC_OPFOR_GRUP_Modern_GroupCommander {
	displayName = "Platoon Medic";
	TWC_isCommandRole = 1;
	backpack = "TWC_Backpack_GRUP_Modern_PlatoonMedic";
};