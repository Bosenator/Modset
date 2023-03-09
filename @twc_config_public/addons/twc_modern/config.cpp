class CfgPatches
{
	class twc_modern {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"twc_faction",
			"twc_ai_skill"
		};
	};
};

class CfgFactionClasses
{
	class twc_modern_public
	{
		displayName="TWC Modern Public Units";
		author="The Wrecking Crew";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
};

class CfgEditorSubcategories {
	//2020s

	class TWC_Infantry_2010_COIN_ANA {
		displayName = "Afghan National Army (2010s)";
	};
	class TWC_Infantry_2010_GER_Woodland {
		displayName = "German Bundeswehr(2010s, Woodland)";
	};
	class TWC_Infantry_2010_GER_Desert {
		displayName = "German Bundeswehr (2010s, Desert)";
	};
		class TWC_Infantry_2010_Pol_Woodland {
		displayName = "Polish Land Forces (2010s, Woodland)";
	};
	class TWC_Infantry_2010_Pol_Desert {
		displayName = "Polish Land Forces (2010s, Desert)";
	};
	class TWC_Infantry_2010_USMC_Desert{
		displayName = "United States Marine Corps (2010s, Desert)";
	};
	class TWC_Infantry_2010_USMC_Woodland{
		displayName = "United States Marine Corps (2010s, Woodland)";
	};
	class TWC_Infantry_2020_US{
		displayName = "United States Army (2020s)";
	};
};

class EventHandlers;

class CfgWeapons
{
	#include "weapons.hpp"
};

class CfgVehicles
{
	#include "backpacks.hpp"

	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;

	#define MEDICAL_LOADOUT "ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_splint","ACE_splint","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
	#define MAG_2(a) a, a
	#define MAG_3(a) a, a, a
	#define MAG_4(a) a, a, a, a
	#define MAG_5(a) a, a, a, a, a
	#define MAG_6(a) a, a, a, a, a, a
	#define MAG_7(a) a, a, a, a, a, a, a
	#define MAG_8(a) a, a, a, a, a, a, a, a
	#define MAG_9(a) a, a, a, a, a, a, a, a, a
	#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
	#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a
	#define CATEGORY(a) editorSubcategory = a;\
			vehicleClass = a;

	//GENERIC

	class TWC_Infantry_Modern_Plane_Pilot: TWC_Infantry_Modern_Base
	{
		scope = 2;
		displayName = "Jet Pilot";
		faction = "twc_modern_public";
		CATEGORY(TWC_ForceType_Airborne)
		uniformClass = "UK3CB_BAF_U_HeliPilotCoveralls_RAF";
		TWC_isCommandRole = 1;
		engineer = 1;
		linkedItems[] =
		{
			"CUP_V_B_PilotVest",
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"CUP_V_B_PilotVest",
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		Items[] =
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		respawnItems[] =
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		weapons[] =
		{
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"SmokeShell",
			"SmokeShell"
		};
		respawnmagazines[] =
		{
			"SmokeShell",
			"SmokeShell"
		};
	};
	class TWC_Infantry_Modern_Tank_Commander: TWC_Infantry_Modern_Base
	{
		scope = 2;
		displayName = "Tank Commander";
		faction = "twc_modern_public";
		CATEGORY(TWC_ForceType_Armoured)
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
		TWC_isCommandRole = 1;
		engineer = 1;
		linkedItems[] =
		{
			"UK3CB_BAF_V_Osprey_Belt_A",
			"UK3CB_BAF_H_CrewHelmet_B",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"UK3CB_BAF_V_Osprey_Belt_A",
			"UK3CB_BAF_H_CrewHelmet_B",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		Items[] =
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		respawnItems[] =
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		weapons[] =
		{
			"TWC_Weapon_L22A2_SUSAT",
			"ACE_Vector",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"TWC_Weapon_L22A2_SUSAT",
			"ACE_Vector",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			MAG_3("UK3CB_BAF_556_30Rnd"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_3("UK3CB_BAF_556_30Rnd"),
			MAG_2("SmokeShell")
		};
	};
	class TWC_Infantry_Modern_Tank_Crew: TWC_Infantry_Modern_Tank_Commander
	{
		displayName = "Tank Crew";
		TWC_isCommandRole = 0;
		weapons[] =
		{
			"TWC_Weapon_L22A2_SUSAT",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"TWC_Weapon_L22A2_SUSAT",
			"Throw",
			"Put"
		};
	};
	#include "2010_regular\woodland.hpp"
	#include "2010_regular\arctic.hpp"

	#include "2010_coin\woodland.hpp"
	#include "2010_coin\arctic.hpp"
	
	#include "2010_coin_ana\woodland.hpp"
	#include "2010_germany\woodland.hpp"
	#include "2010_poland\poland.hpp"
	#include "2010_usmc\desert.hpp"
	#include "2010_usmc\woodland.hpp"
	#include "2020_us\woodland.hpp"
};

class CfgGroups
{
	class WEST
	{
		class TWC_Groups_Modern
		{
			name = "TWC Public Groups Modern";
			#include "2010_coin_ana\groups.hpp"
			#include "2010_germany\groups.hpp"
			#include "2010_poland\groups.hpp"
			#include "2010_usmc\groups.hpp"
			#include "2020_us\groups.hpp"
			class Generic
			{
				name = "Generic";
				class Tank_Crew
				{
					name = "Tank Crew";
					faction = "twc_modern_public";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "TWC_Infantry_Modern_Tank_Commander";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TWC_Infantry_Modern_Tank_Crew";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TWC_Infantry_Modern_Tank_Crew";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
			};
		};
	};
};
