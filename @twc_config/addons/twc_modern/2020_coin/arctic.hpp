//COIN, Arctic
//Section
class TWC_Infantry_2020_COIN_Arctic_Rifleman: TWC_Infantry_2020_COIN_Woodland_Rifleman
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_Pointman: TWC_Infantry_2020_COIN_Woodland_Pointman
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_Grenadier: TWC_Infantry_2020_COIN_Woodland_Grenadier
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_MG: TWC_Infantry_2020_COIN_Woodland_MG
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_Marksman: TWC_Infantry_2020_COIN_Woodland_Marksman
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_SectionCommander: TWC_Infantry_2020_COIN_Woodland_SectionCommander
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_2iC: TWC_Infantry_2020_COIN_Dismounted_Woodland_2iC
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};

//Platoon
class TWC_Infantry_2020_COIN_Arctic_Platoon_Commander: TWC_Infantry_2020_COIN_Woodland_Platoon_Commander
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_Platoon_Sergeant: TWC_Infantry_2020_COIN_Woodland_Platoon_Sergeant
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_Platoon_Medic: TWC_Infantry_2020_COIN_Woodland_Platoon_Medic
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_Platoon_Mortar: TWC_Infantry_2020_COIN_Woodland_Platoon_Mortar
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_CSM: TWC_Infantry_2020_COIN_Woodland_CSM
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};

//Company
class TWC_Infantry_2020_COIN_Arctic_Company_Commander: TWC_Infantry_2020_COIN_Woodland_Company_Commander
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_Company_2iC: TWC_Infantry_2020_COIN_Woodland_Company_2iC
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_Company_Sergeant: TWC_Infantry_2020_COIN_Woodland_Company_Sergeant
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};

//AT + AA
class TWC_Infantry_2020_COIN_Arctic_Javelin_Gunner: TWC_Infantry_2020_COIN_Woodland_Javelin_Gunner
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_Javelin_Ass: TWC_Infantry_2020_COIN_Woodland_Javelin_Ass
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
/*class TWC_Infantry_2020_COIN_Arctic_Starstreak_Gunner: TWC_Infantry_2020_COIN_Woodland_Starstreak_Gunner
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";

	respawnItems[] += {"SP_Gasmask_S6"};
};
class TWC_Infantry_2020_COIN_Arctic_Starstreak_Ass: TWC_Infantry_2020_COIN_Woodland_Starstreak_Ass
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";

	respawnItems[] += {"SP_Gasmask_S6"};
};*/

//Sniper Team
class TWC_Infantry_2020_COIN_Arctic_Sniper: TWC_Infantry_2020_COIN_Woodland_Sniper
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_2020_COIN_Arctic_Spotter: TWC_Infantry_2020_COIN_Woodland_Spotter
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
};

//Artillery Crew
class TWC_Infantry_2020_COIN_Arctic_Artillery_Commander: TWC_Infantry_2020_COIN_Woodland_Artillery_Commander
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_Artillery_Crew: TWC_Infantry_2020_COIN_Woodland_Artillery_Crew
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_FO: TWC_Infantry_2020_COIN_Woodland_FO
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};

//Aircraft
class TWC_Infantry_2020_COIN_Arctic_FAC: TWC_Infantry_2020_COIN_Woodland_FAC
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};

//FVs
class TWC_Infantry_2020_COIN_Arctic_Vehicle_Commander: TWC_Infantry_2020_COIN_Woodland_Vehicle_Commander
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};
class TWC_Infantry_2020_COIN_Arctic_Vehicle_Crew: TWC_Infantry_2020_COIN_Woodland_Vehicle_Crew
{
	CATEGORY(TWC_Infantry_2020_COIN_Arctic)
	uniformClass = "CUP_I_B_PMC_Unit_34";
};