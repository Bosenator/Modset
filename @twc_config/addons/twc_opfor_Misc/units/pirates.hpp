/////////////////////////////
///////// GREENFOR //////////
/////////////////////////////

//////////// Africans//////////
class Afr_Pirate_Base: I_G_Soldier_base_F
{
	author="Saxon";
	scope=1;
	displayName="African Pirate Base";
	faction="TWC_Afr_Pirates";
	nakedUniform="U_BasicBody";
	uniformClass="U_C_Poor_1";
	genericNames="AfroMen";
	identityTypes[]=
	{
		"LanguageENG_F",
		"Head_African"
	};
	Items[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage"
	};
	respawntems[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage"
	};
	
};
class Afr_Pirate_Skipper: Afr_Pirate_Base
{
	scope=2;
	displayName="Skipper";
	icon="iconManOfficer";
	uniformClass="CUP_I_B_PMC_Unit_3";
	backpack="";
	linkedItems[]=
	{
		"H_Cap_blk",
		"V_LegStrapBag_coyote_F",
		"ItemMap",
		"ItemCompass",
		"Binocular"
	};
	respawnLinkedItems[]=
	{
		"H_Cap_blk",
		"V_LegStrapBag_coyote_F",
		"ItemMap",
		"ItemCompass",
		"Binocular"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_glaunch_M79",
		"CUP_hgun_Colt1911"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_glaunch_M79",
		"CUP_hgun_Colt1911"
	};
	magazines[]=
	{
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_Captain: Afr_Pirate_Base
{
	scope=2;
	displayName="Cap'n";
	icon="iconManLeader";
	uniformClass="U_I_C_Soldier_Para_5_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_H_NAPA_Fedora",
		"V_LegStrapBag_coyote_F",
		"ItemMap",
		"ItemCompass",
		"Binocular"
	};
	respawnLinkedItems[]=
	{
		"CUP_H_NAPA_Fedora",
		"V_LegStrapBag_coyote_F",
		"ItemMap",
		"ItemCompass",
		"Binocular"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_hgun_SA61"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_hgun_SA61"
	};
	magazines[]=
	{
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_AK: Afr_Pirate_Base
{
	scope=2;
	displayName="Pirate (AK)";
	uniformClass="U_I_C_Soldier_Bandit_1_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_01",
		"G_Bandanna_blk"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_01",
		"G_Bandanna_blk"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AK47"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AK47"
	};
	magazines[]=
	{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_AKM: Afr_Pirate_AK
{
	scope=2;
	displayName="Pirate (AKM)";
	uniformClass="U_I_C_Soldier_Bandit_3_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_03",
		"G_Shades_Black",
		"H_Booniehat_khk"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_03",
		"G_Shades_Black",
		"H_Booniehat_khk"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKM"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKM"
	};
};
class Afr_Pirate_AKS: Afr_Pirate_AKM
{
	scope=2;
	displayName="Pirate (AKS)";
	uniformClass="U_I_C_Soldier_Bandit_4_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_05",
		"G_Bandanna_shades"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_05",
		"G_Bandanna_shades"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKS"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKS"
	};
};
class Afr_Pirate_RPG: Afr_Pirate_Base
{
	scope=2;
	displayName="AT-Pirate";
	uniformClass="CUP_U_I_GUE_Anorak_01";
	backpack="Afr_Backpack_AT";
	linkedItems[]=
	{
		"CUP_V_O_Ins_Carrier_Rig_Light",
		"H_Bandanna_gry"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_O_Ins_Carrier_Rig_Light",
		"H_Bandanna_gry"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKM",
		"CUP_launch_RPG7V"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKM",
		"CUP_launch_RPG7V"
	};
	magazines[]=
	{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_PG7V_M",
		"CUP_PG7V_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_PG7V_M",
		"CUP_PG7V_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_AK74: Afr_Pirate_Base
{
	scope=2;
	displayName="Pirate (AK-74)";
	uniformClass="CUP_U_I_GUE_Anorak_03";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_I_Carrier_Belt",
		"H_Shemag_olive"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_I_Carrier_Belt",
		"H_Shemag_olive"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AK74"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AK74"
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
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
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
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_AKS74: Afr_Pirate_AK74
{
	scope=2;
	displayName="Pirate (AKS-74)";
	uniformClass="U_I_C_Soldier_Para_2_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_02",
		"H_ShemagOpen_tan"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_02",
		"H_ShemagOpen_tan"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKS74"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKS74"
	};
};
class Afr_Pirate_AK74GP25: Afr_Pirate_Base
{
	scope=2;
	displayName="Grenadier Pirate";
	uniformClass="U_I_C_Soldier_Bandit_1_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_04",
		"H_ShemagOpen_khk"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_04",
		"H_ShemagOpen_khk"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AK74_GL"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AK74_GL"
	};
	magazines[]=
	{
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_FAL: Afr_Pirate_Base
{
	scope=2;
	displayName="Pirate (FAL)";
	uniformClass="U_I_C_Soldier_Bandit_5_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_01",
		"G_Bandanna_tan"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_01",
		"G_Bandanna_tan"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_FNFAL"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_FNFAL"
	};
	magazines[]=
	{
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_M14: Afr_Pirate_Base
{
	scope=2;
	displayName="Pirate (M14)";
	uniformClass="U_I_C_Soldier_Bandit_2_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_02",
		"G_Bandanna_blk"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_02",
		"G_Bandanna_blk"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_srifle_M14"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_srifle_M14"
	};
	magazines[]=
	{
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_SMLE: Afr_Pirate_Base
{
	scope=2;
	displayName="Pirate (SMLE)";
	uniformClass="U_I_C_Soldier_Bandit_5_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_01",
		"G_Bandanna_blk",
		"H_Hat_Safari_sand_F"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_01",
		"G_Bandanna_blk",
		"H_Hat_Safari_sand_F"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_srifle_LeeEnfield"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_srifle_LeeEnfield"
	};
	magazines[]=
	{
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_AR_RPK: Afr_Pirate_Base
{
	scope=2;
	displayName="Auto Riflepirate (RPK)";
	uniformClass="U_I_C_Soldier_Bandit_2_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_04",
		"H_Shemag_olive"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_04",
		"H_Shemag_olive"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_RPK74_45"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_RPK74_45"
	};
	magazines[]=
	{
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_MG_M60: Afr_Pirate_Base
{
	scope=2;
	displayName="MG Pirate (M60)";
	uniformClass="U_I_C_Soldier_Para_3_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_06",
		"G_Bandanna_oli"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_06",
		"G_Bandanna_oli"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_lmg_M60E4"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_lmg_M60E4"
	};
	magazines[]=
	{
		"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
		"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_MG_PKM: Afr_Pirate_Base
{
	scope=2;
	displayName="MG Pirate (PKM)";
	uniformClass="U_I_C_Soldier_Bandit_1_F";
	backpack="";
	linkedItems[]=
	{
		"CUP_V_O_Ins_Carrier_Rig_MG",
		"H_Cap_red",
		"G_Bandanna_aviator"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_O_Ins_Carrier_Rig_MG",
		"H_Cap_red",
		"G_Bandanna_aviator"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_lmg_PKM"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_lmg_PKM"
	};
	magazines[]=
	{
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class Afr_Pirate_MM_SVD: Afr_Pirate_Base
{
	scope=2;
	displayName="Markspirate (SVD)";
	uniformClass="U_I_C_Soldier_Camo_F";
	backpack="";
	linkedItems[]=
	{
		"V_TacChestrig_oli_F",
		"H_Booniehat_oli",
		"G_Bandanna_oli"
	};
	respawnLinkedItems[]=
	{
		"V_TacChestrig_oli_F",
		"H_Booniehat_oli",
		"G_Bandanna_oli"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_srifle_SVD"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_srifle_SVD"
	};
	magazines[]=
	{
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

//////////// Asians//////////

class Asn_Pirate_Base: I_G_Soldier_base_F
{
	author="Saxon";
	scope=1;
	displayName="Asian Pirate Base";
	faction="TWC_Asn_Pirates";
	nakedUniform="U_BasicBody";
	uniformClass="U_C_Poor_1";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
	Items[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage"
	};
	respawntems[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage"
	};
	
};
class Asn_Pirate_Skipper: Afr_Pirate_Skipper
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_Captain: Afr_Pirate_Captain
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AK: Afr_Pirate_AK
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AKS: Afr_Pirate_AKS
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AKM: Afr_Pirate_AKM
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_RPG: Afr_Pirate_RPG
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AK74: Afr_Pirate_AK74
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AKS74: Afr_Pirate_AKS74
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AK74GP25: Afr_Pirate_AK74GP25
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_FAL: Afr_Pirate_FAL
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_M14: Afr_Pirate_M14
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_SMLE: Afr_Pirate_SMLE
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AR_RPD: Afr_Pirate_AR_RPD
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AR_RPK: Afr_Pirate_AR_RPK
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_MG_M60: Afr_Pirate_MG_M60
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_MG_PKM: Afr_Pirate_MG_PKM
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_MM_SVD: Afr_Pirate_MM_SVD
{

	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};