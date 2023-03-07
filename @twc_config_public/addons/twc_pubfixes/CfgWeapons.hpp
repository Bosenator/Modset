

class mode_fullauto;
class Mode_SemiAuto;
class asdg_OpticRail1913;

class CfgWeapons {
	
	class arifle_Mk20_plain_f;
	class Launcher;
	class Launcher_Base_F: Launcher
	class CUP_launch_RPG7V: Launcher_Base_F
	{
		scope=2;
		aiDispersionCoefX=1.03;
		aiDispersionCoefY=1.05;
		dispersion = 0.02;
		minrange=50;
		minrangeprobab=0.4;
		midrange=600;
		midrangeprobab=0.3;
		maxrange=1000;
		maxrangeprobab=0.9;

		magazines[] = {"CUP_PG7V_M", "CUP_PG7VM_M", "CUP_PG7VL_M", "CUP_PG7VR_M", "CUP_OG7_M", "CUP_TBG7V_M", "twc_og7_c_m"};
	};
	
	class GM6_base_F;
	class UK3CB_BAF_L115_Base;
	
	class UK3CB_BAF_L115A3: UK3CB_BAF_L115_Base
	{
		recoil = "twc_shotgun_1";
		recoilProne = "twc_mg_prone";
		magazines[] = {"ACE_10Rnd_338_300gr_HPBT_Mag", "TWC_5Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag", "TWC_5Rnd_338_API526_Mag"};
	};
	class twc_l115a3_wd: UK3CB_BAF_L115A3
	{
		scope = 1;
		author = "jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_UK3CB_BAF_L115";
				item = "RKSL_optic_PMII_525";
			};
			class LinkedItemsMuzzle
			{
				slot = "asdg_MuzzleSlot_UK3CB_BAF_L115";
				item= "UK3CB_BAF_Silencer_L115A3";
			};
		};
	};
	class UK3CB_BAF_L115A3_Ghillie;
	class twc_l115a3_gh: UK3CB_BAF_L115A3_Ghillie
	{
		scope = 1;
		author = "jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_UK3CB_BAF_L115";
				item = "RKSL_optic_PMII_525";
			};
			class LinkedItemsMuzzle
			{
				slot = "asdg_muzzleslot_UK3CB_BAF_L115";
				item= "UK3CB_BAF_Silencer_L115A3";
			};
		};
	};
	
	

	class twc_l96_w_base: UK3CB_BAF_L115A3 {
		scope = 1;
		displayname = "L96A1";
		magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd", "UK3CB_BAF_762_L42A1_10Rnd_T"};
		class WeaponSlotsInfo {
			class MuzzleSlot {
				class compatibleItems {};
				displayName = "Muzzle";
				iconPicture = "a3\weapons_f\Data\ui\attachment_muzzle";
				iconPinpoint = "Center";
				iconPosition[] = {0,0};
				iconScale = 0;
				linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};
			class CowsSlot {
				class compatibleItems {
					CUP_optic_Leupold_VX3 = 1;
					cup_optic_leupoldmk4 = 1;
					cup_optic_leupoldmk4_10x40_lrt_woodland = 1;
					cup_optic_leupoldm3lr = 1;
					cup_optic_sb_3_12x50_pmii = 1;
				};
				displayName = "Optics Slot";
				iconPicture = "a3\weapons_f\Data\ui\attachment_top";
				iconPinpoint = "Bottom";
				iconPosition[] = {0,0};
				iconScale = 0;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			mass = 140;
		};
	};

	class twc_l96_d_base: twc_l96_w_base {
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\awcstock_FDE_co.paa","\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\AWC_Scope_co.paa","\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\Magnumbits_ca.paa"};
		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\gear_awmFDE_ca.paa";
	};
	
	class RifleCore;
	class Rifle:RifleCore
	{
		class eventhandlers;
	};
	
	class Rifle_Base_F:Rifle
	{
	};
	
	class CUP_arifle_AK_Base: Rifle_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		discretedistanceinitindex = 1;
	};
	
	
	
	class CUP_arifle_AK74: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;		
		};
	};
	
	class CUP_arifle_AK74_GL: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			dispersion = 0.002;		
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AK74M: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AKS_Base: CUP_arifle_AK_Base
	{
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AKS74: CUP_arifle_AKS_Base
	{
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AKS74U: CUP_arifle_AKS_Base
	{
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	
	class CUP_arifle_RPK74: CUP_arifle_AK74
	{
		
		class Single:Single {
			dispersion = 0.0015;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0025;		
		};
		class Burst:Burst {
			dispersion = 0.002;		
		};
		class Manual: mode_fullauto {
			dispersion = 0.0025;		
		};
		class close: Manual {
			dispersion = 0.002;		
		};
		class far: close {
			dispersion = 0.002;		
		};
		class medium: close {
			dispersion = 0.002;		
		};
		class short: close {
			dispersion = 0.002;		
		};
	};
	
	class CUP_arifle_AKM: CUP_arifle_AK_Base
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	class CUP_arifle_TYPE_56_2: CUP_arifle_AKM
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AK47: CUP_arifle_AK_Base
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AKS: CUP_arifle_AKM
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	
	class CUP_arifle_AKM_GL: CUP_arifle_AKM
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AKMS_GL: CUP_arifle_AKM_GL
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	
	
	class CUP_sgun_M1014_base: Rifle_Base_F
	{
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
	};
	class CUP_sgun_M1014_vfg: CUP_sgun_M1014_base
	{};
	class TWC_L128A1_Eotech: CUP_sgun_M1014_vfg
	{
		scope = 1;
		displayname = "L128A1 Shotgun";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="UK3CB_BAF_Eotech";
			};
		};
	};
	
	
	class UK3CB_BAF_L1A1: Rifle_Base_F {
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class srifle_EBR_F;
	class UK3CB_BAF_L128A1: srifle_EBR_F {
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class mk20_base_F;
	class arifle_Mk20_F: mk20_base_F
	{
		class FullAuto;
		class Single;
	};
	
	class UK3CB_BAF_L85A2: arifle_Mk20_plain_F {
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		reloadAction = "CUP_GestureReloadSA80";
		reloadMagazineSound[] = {"\CUP\Weapons\CUP_Weapons_L85\data\sounds\l85_Reload",1,1,10};
	};
	
	class UK3CB_BAF_L86A2: UK3CB_BAF_L85A2 {
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
	};
	
	class Rifle_Long_Base_F:Rifle_Base_F
	{
		class eventhandlers;
	};
	//for barrel swapping, put a ACE_SpareBarrel in the player's inventory
	class UK3CB_BAF_L7A2: Rifle_Long_Base_F {
		displayname = "L7A2 GPMG";
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.5;
		recoil = "twc_mg_762";
		recoilProne = "twc_mg_prone";
		twc_openbolt = 1;
		class WeaponSlotsInfo {
			class asdg_OpticRail_UK3CB_BAF_L7A2 { };
		};
		class fullauto: mode_fullauto
		{
			reloadTime = 0.08;
		};
	};
		
	class UK3CB_BAF_CannonM230: UK3CB_gatling_30mm_base
	{
		class Burst20:Burst10
		{
			dispersion=0.012;
		};
	};
	
	//for barrel swapping, put a ACE_SpareBarrel in the player's inventory
	
	
	class CUP_lmg_PKM: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 3500;
		ace_overheating_dispersion = 1.0;
		ace_overheating_slowdownFactor = 1.5;
	};

	class UK3CB_BAF_L110_Base:Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 2900;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.2;
		class eventhandlers;
		twc_openbolt = 1;
	};
	class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base
	{
		recoil = "twc_mg_556";
		recoilProne = "twc_mg_556_prone";
	};
};
