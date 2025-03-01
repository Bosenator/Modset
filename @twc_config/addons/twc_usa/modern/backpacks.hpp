class CUP_B_USPack_SL_OEFCP;
	class TWC_Backpack_USA_Modern_SquadLeader: CUP_B_USPack_SL_OEFCP {
		scope = 1;
		scopeArsenal = 1;
		class TransportItems {
			ADD_ITEM(ACRE_PRC117F,1);
		};
		class TransportMagazines {
			ADD_MAGA(CUP_30Rnd_556x45_Stanag,6);
			ADD_MAGA(CUP_30Rnd_556x45_Stanag_Tracer_Red,3);
			ADD_MAGA(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,1);
			ADD_MAGA(SmokeShell,3);
			ADD_MAGA(SmokeShellRed,2);
			ADD_MAGA(SmokeShellBlue,2);
		};
	};
	
	class TWC_Backpack_USA_Modern_TeamLeader: CUP_B_USPack_SL_OEFCP {
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines {
			ADD_MAGA(CUP_30Rnd_556x45_Stanag,12);
			ADD_MAGA(CUP_30Rnd_556x45_Stanag_Tracer_Red,6);
			ADD_MAGA(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,2);
			ADD_MAGA(CUP_HandGrenade_M67,4);
			ADD_MAGA(SmokeShell,3);
		};
		
	};
	
	class TWC_Backpack_USA_Modern_Medic: CUP_B_USPack_SL_OEFCP {
		scope = 1;
		scopeArsenal = 1;
		class TransportItems {
			ADD_ITEM(ACE_fieldDressing,20);
			ADD_ITEM(ACE_morphine,10);
			ADD_ITEM(ACE_elasticBandage,20);
			ADD_ITEM(ACE_quikclot,20);
			ADD_ITEM(ACE_packingBandage,20);
			ADD_ITEM(ACE_adenosine,4);
			ADD_ITEM(ACE_atropine,4);
			ADD_ITEM(ACE_epinephrine,10);
			ADD_ITEM(ACE_salineIV_500,6);
			ADD_ITEM(ACE_tourniquet,4);
			ADD_ITEM(ACE_personalAidKit,1);
			ADD_ITEM(ACE_surgicalKit,1);
		};
	};