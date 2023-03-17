class CfgPatches {
	class TWC_gearFixes {
		units[]={
			"twc_B_AAA_System_01_F",
			"twc_B_AAA_System_01_F_S"
		};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"a3_weapons_f",
			"cup_airvehicles_av8b",
			"CUP_Creatures_Military_USArmy",
			"cup_wheeledvehicles_m151",
			"cup_wheeledvehicles_btr90",
			"cup_wheeledvehicles_btr80",
			"cup_wheeledvehicles_btr60",
			"cup_wheeledvehicles_btr40",
			"cup_trackedvehicles_mcv80",
			"cup_wheeledvehicles_hilux",
			"cup_wheeledvehicles_mtvr",
			"UK3CB_BAF_Vehicles_LandRover",
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_VehicleWeapons",
			"cwr3_vehicle_fv101_uk"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

//#include "qol.hpp"
#include "CfgAmmo.hpp"

class Mode_SemiAuto;
class Mode_Fullauto;

class CfgWeapons {
	#include "CfgWeapons.hpp"
};

class CfgVehicles {
	#include "LandVehicles.hpp"
	#include "Helicopters.hpp"
	
	/* #include "acre_apcs.hpp"
	#include "acre_boats.hpp"
	#include "acre_cars.hpp"
	#include "acre_helicopters.hpp"
	#include "acre_planes.hpp"
	#include "acre_tanks.hpp" */
	
	class CUP_B_USArmy_Soldier_01;
	class CUP_CRYE_MCAM_RUS_Full: CUP_B_USArmy_Soldier_01 {
		modelSides[] = {3,2,1,0};
	};
	class CUP_CRYE_MCAM_RUS_Roll: CUP_B_USArmy_Soldier_01 {
		modelSides[] = {3,2,1,0};
	};
	class CUP_CRYE_MCAM_RUS2_Full: CUP_B_USArmy_Soldier_01 {
		modelSides[] = {3,2,1,0};
	};
	class CUP_CRYE_MCAM_RUS2_Roll: CUP_B_USArmy_Soldier_01 {
		modelSides[] = {3,2,1,0};
	};
	
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A;
	class TWC_BAF_B_Bergen_OLI_Rifleman_XL_A: UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A {
		displayname = "Bergen XL (Olive)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_us.rvmat"};
	};
};

class CfgMagazines {
	#include "CfgMagazines.hpp"
};