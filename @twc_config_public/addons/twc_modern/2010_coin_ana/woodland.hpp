class TWC_ANA_Base: B_Soldier_base_F
	{
		scope=2;
		displayName="Rifleman";
		editorSubcategory = "TWC_Infantry_2010_COIN_ANA";
		vehicleClass="Men_ana";
		faction = "twc_modern_public";
		icon="iconManLeader";
		nakedUniform="U_BasicBody";
		identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		uniformClass="CUP_U_B_BDUv2_dirty_M81";
		backpack="";
		class EventHandlers: EventHandlers {
			init = "";
		};

		linkedItems[]=
		{
        		"CUP_H_Ger_M92_RGR",
        		"UK3CB_BAF_V_PLCE_Webbing_OLI",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        		"CUP_H_Ger_M92_RGR",
        		"UK3CB_BAF_V_PLCE_Webbing_OLI",
				"ItemCompass"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"CUP_arifle_AK47_Early"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"CUP_arifle_AK47_Early"
		};
		magazines[]=
		{
			MAG_9("CUP_30Rnd_762x39_AK47_M"),
			"HandGrenade",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			MAG_9("CUP_30Rnd_762x39_AK47_M"),
			"HandGrenade",
			"SmokeShell"
		};
		Items[]=
		{
			MEDICAL_LOADOUT
		};
		respawnitems[]=
		{
			MEDICAL_LOADOUT
		};
	};
	
	class twc_ana_interpreter: twc_ana_base
	{
		scope=2;
		displayName="Interpreter";
		backpack="ANA_Backpack_Modern_terp";
		linkedItems[]=
		{
        		"CUP_V_B_IOTV_UCP_Rifleman_USArmy",
       			"CUP_H_PASGTv2_WDL",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        		"CUP_V_B_IOTV_UCP_Rifleman_USArmy",
        		"CUP_H_PASGTv2_WDL",
			"ItemMap",
			"ItemCompass"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"SmokeShell"
		};
		Items[]=
		{
			MEDICAL_LOADOUT,
			"ACRE_PRC343"
		};
		respawnItems[]=
		{
			MEDICAL_LOADOUT,
			"ACRE_PRC343"
		};
	};

	class twc_ana_commander: twc_ana_base
	{
		scope=2;
		displayName="Section Commander @Afghan National Army";
		backpack="";
		TWC_isCommandRole = 1;
		class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
		linkedItems[]=
		{
        		"UK3CB_BAF_V_PLCE_Webbing_OLI",
			"CUP_H_Ger_M92_Black",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        		"UK3CB_BAF_V_PLCE_Webbing_OLI",
			"CUP_H_Ger_M92_Black",
			"ItemMap",
			"ItemCompass"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"CUP_arifle_AK47_Early"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"CUP_arifle_AK47_Early"
		};
		magazines[]=
		{
			MAG_7("CUP_30Rnd_762x39_AK47_M"),
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			MAG_7("CUP_30Rnd_762x39_AK47_M"),
			"SmokeShell"
		};
		Items[]=
		{
			MEDICAL_LOADOUT,
			"ACRE_PRC343",
			"ACRE_PRC152"
		};
		respawnItems[]=
		{
			MEDICAL_LOADOUT,
			"ACRE_PRC343",
			"ACRE_PRC152"
		};
	};

	class twc_ana_subcommander: twc_ana_base
	{
		scope=2;
		displayName="Section Subcommander";
		backpack="ana_backpack_2ic";
		TWC_isCommandRole = 1;
		linkedItems[]=
		{
        		"CUP_V_B_Interceptor_Grenadier_M81",
			"CUP_H_Ger_M92_Black",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        		"CUP_V_B_Interceptor_Grenadier_M81",
			"CUP_H_Ger_M92_Black",
			"ItemMap",
			"ItemCompass"
		};
		weapons[]=
		{
			"CUP_arifle_AK47_GL_Early",
			"Throw",
			"Put"		
		};
		respawnweapons[]=
		{
			"CUP_arifle_AK47_GL_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MAG_7("CUP_30Rnd_762x39_AK47_M"),
			MAG_7("CUP_1Rnd_HE_GP25_M"),
			MAG_3("CUP_1Rnd_SMOKE_GP25_M"),
			"HandGrenade",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			MAG_7("CUP_30Rnd_762x39_AK47_M"),
			MAG_7("CUP_1Rnd_HE_GP25_M"),
			MAG_3("CUP_1Rnd_SMOKE_GP25_M"),
			"HandGrenade",
			"SmokeShell"
		};
	};

	class twc_ana_rifleman_at: twc_ana_base
	{
		scope=2;
		displayName="RPG Grenadier";
		backpack="ana_backpack_rpg";
		linkedItems[]=
		{
        		"CUP_H_Ger_M92_RGR",
        		"CUP_V_O_Ins_Carrier_Rig_Com",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        		"CUP_H_Ger_M92_RGR",
        		"CUP_V_O_Ins_Carrier_Rig_Com",
			"ItemCompass"
		};
		weapons[]=
		{
			"CUP_arifle_AKS",
			"CUP_launch_RPG7V",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_AKS",
			"CUP_launch_RPG7V",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MAG_7("CUP_30Rnd_762x39_AK47_M"),
			"CUP_OG7_M",
			"HandGrenade",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			MAG_7("CUP_30Rnd_762x39_AK47_M"),
			"CUP_OG7_M",
			"HandGrenade",
			"SmokeShell"
		};
	};
	
	class twc_ana_mg: twc_ana_base
	{
		scope=2;
		displayName="Machinegunner";
		backpack="";
		linkedItems[]=
		{
        		"CUP_H_Ger_M92_RGR",
        		"CUP_V_O_Ins_Carrier_Rig_MG",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        		"CUP_H_Ger_M92_RGR",
        		"CUP_V_O_Ins_Carrier_Rig_MG",
			"ItemCompass"
		};
		weapons[]=
		{
			"CUP_lmg_PKM",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_lmg_PKM",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MAG_2("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
			"HandGrenade",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			MAG_2("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
			"HandGrenade",
			"SmokeShell"
		};
	};

	class twc_ana_mg_as: twc_ana_base
	{
		scope=2;
		displayName="Machinegunner Assistant";
		backpack="ana_backpack_mg";
		linkedItems[]=
		{
        		"CUP_H_Ger_M92_RGR",
        		"CUP_V_O_Ins_Carrier_Rig_MG",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        		"CUP_H_Ger_M92_RGR",
        		"CUP_V_O_Ins_Carrier_Rig_MG",
			"ItemCompass"
		};
		weapons[]=
		{
			"CUP_arifle_AK47_Early",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_AK47_Early",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MAG_7("CUP_30Rnd_762x39_AK47_M"),
			"HandGrenade",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			MAG_7("CUP_30Rnd_762x39_AK47_M"),
			"HandGrenade",
			"SmokeShell"
		};
	};
	
	class twc_ana_marksman: twc_ana_base
	{
		scope=2;
		displayName="Marksman";
		backpack="";
		linkedItems[]=
		{
        		"UK3CB_BAF_V_PLCE_Webbing_OLI",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        		"UK3CB_BAF_V_PLCE_Webbing_OLI",
			"ItemCompass"
		};
		weapons[]=
		{
			"CUP_srifle_SVD_pso",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_srifle_SVD_pso",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MAG_9("CUP_10Rnd_762x54_SVD_M"),
			"HandGrenade",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			MAG_9("CUP_10Rnd_762x54_SVD_M"),
			"HandGrenade",
			"SmokeShell"
		};
		
		Items[]=
		{
			MEDICAL_LOADOUT,
			"ACE_RangeCard"
		};
		respawnItems[]=
		{
			MEDICAL_LOADOUT,
			"ACE_RangeCard"
		};
	};
	
	class twc_ana_medic: twc_ana_base
	{
		scope=2;
		attendant = 1;
		displayName="Medic";
		backpack="ana_backpack_medic";
		linkedItems[]=
		{
        		"CUP_H_Ger_M92",
        		"UK3CB_BAF_V_PLCE_Webbing_OLI",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        		"CUP_H_Ger_M92",
        		"UK3CB_BAF_V_PLCE_Webbing_OLI",
			"ItemCompass"
		};
		weapons[]=
		{
			"CUP_arifle_AKS",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_AKS",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MAG_7("CUP_30Rnd_762x39_AK47_M"),
			"HandGrenade",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			MAG_7("CUP_30Rnd_762x39_AK47_M"),
			"HandGrenade",
			"SmokeShell"
		};
	};
