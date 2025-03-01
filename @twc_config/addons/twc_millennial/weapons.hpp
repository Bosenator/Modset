class UK3CB_BAF_L85A2;
class UK3CB_BAF_L86A2;
class UK3CB_BAF_SUSAT_3D;
class UK3CB_BAF_L135A1;
class UK3CB_BAF_L85A2_UGL_HWS;
class UK3CB_BAF_L110A2RIS;
class UK3CB_BAF_L22;
class UK3CB_BAF_L22A2;

class TWC_Weapon_L86A1: UK3CB_BAF_L86A2 {
	displayName = "L86A1";
	ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
	author="Jayman";
};
class TWC_Weapon_L86A1_SUSAT3D: TWC_Weapon_L86A1 {
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L85A1: UK3CB_BAF_L85A2 {
	displayName = "L85A1";
	ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
	author="Jayman";
};
class TWC_Weapon_L85A1_SUSAT3D: TWC_Weapon_L85A1 {
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L85A1_SUSAT3D_Laser: TWC_Weapon_L85A1_SUSAT3D {
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};
		class LinkedItemsFrontSideRail {
			slot="PointerSlot";
			item="cup_acc_llm_black";
		};
	};
};
class TWC_Weapon_L22A1_SUSAT: UK3CB_BAF_L22 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L22A2_SUSAT: UK3CB_BAF_L22A2 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L85A2_SUSAT3D: UK3CB_BAF_L85A2 {
	scope = 1;
	author="Saxon";
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L86A2_SUSAT3D: UK3CB_BAF_L86A2 {
	scope = 1;
	author="Saxon";
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L135A1: UK3CB_BAF_L135A1
{
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="RKSL_optic_PMII_525";
		};
	};	
};
class TWC_Weapon_L85A2_UGL_HWS_SUSAT3D: UK3CB_BAF_L85A2_UGL_HWS {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L110A2_SUSAT3D: UK3CB_BAF_L110A2RIS {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};

	};
};

class UK3CB_BAF_U_Smock_DPMW;
class UK3CB_BAF_U_Smock_DPMT;
class UK3CB_BAF_U_Smock_DDPM;
class UK3CB_BAF_U_Smock_Arctic;

class UniformItem;

class TWC_Smock_Woodland: UK3CB_BAF_U_Smock_DPMW {
	scope = 1;
	class ItemInfo: UniformItem {
		containerClass = Supply40;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_DPMW_Base";
		uniformModel = "-";
	};
};

class TWC_Smock_Temperate: UK3CB_BAF_U_Smock_DPMT {
	scope = 1;
	class ItemInfo: UniformItem {
		containerClass = Supply40;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_DPMT_Base";
		uniformModel = "-";
	};
};

class TWC_Smock_Desert: UK3CB_BAF_U_Smock_DDPM {
	scope = 1;
	class ItemInfo: UniformItem {
		containerClass = Supply40;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_DDPM_Base";
		uniformModel = "-";
	};
};

class TWC_Smock_Arctic: UK3CB_BAF_U_Smock_Arctic {
	scope = 1;
	class ItemInfo: UniformItem {
		containerClass = Supply40;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_Arctic_Base";
		uniformModel = "-";
	};
};
