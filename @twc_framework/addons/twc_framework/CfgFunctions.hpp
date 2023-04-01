class CfgFunctions {
	class twc_framework {
		tag = "twc_framework";
		
		class functions {
			file = "twc_framework\functions";
			
			/** Only on Initalization **/
			class enableZeusObjects {};
			class setEra {};
			class setForceType {};
			
			/** Realtime Togglebles **/
			class toggleBoatSafety {};
			class toggleRollShirt {};
			class toggleSafeZone {};
			
			/** Cleaning functionality **/
			class cleanCivilianEquipment {};
			class cleanBaseBodies {};
		};
	};
	
	class twc_framework_module {
		tag = "twc_framework_module";
		
		class functions {
			file = "twc_framework\modules";
			
			class missionConfiguration {};
		};
	};
	
	class TWC {
		tag = "twc";
		
		class functions {
			file = "twc_framework\functions";
			
			class AirAssault {};
			class Airborne {};
			class AmbientAA {};
			class ambientCivDepopulate {};
			class ambientCivPopulate {};
			class Artillery{};
			class AttackHelicopter{};
			class AttackPlane {};
			class banzaiSounds {};
			class BattlefieldSounds {};
			class briefingLoadout {};
			class charge {};
			class crateParadrop {};
			class crateSlingload {};
			class createMarker{};
			class CreateTask{};
			class daisyCutter{};
			class Defend {};
			class dummyBullets {};
			class Flagchange {};
			class HideMarkers {};
			class LightsSwitch{};
			class Patrol {};
			class patrolRoads{};
			class placedIED{};
			class putWeaponOnBack{};
			class reconnected{};
			class Retreat{};
			class spawnGroup{};
			class spawnIed{};
			class setUniform{};
			class stationaryUnits{};
			class movableUnits{};
			class UpdateTask{};
			class virtualMortar{};
			class waveSpawn {};
			class toggleSpectator {};
			class grabComposition {};
			class GliderTakeOff {};
			class confiscateBadItems {};
			class silentSafety {};
			class checkvehicleID {};
			class addACEInteraction {};
			class doStop{};
			
			/** Player Messaging **/
			class speak {};
			class intelHint {};
			class intelHintWithVariable {};
			class sendCTabMessage {};
			class CommandMessage {};
			
			/** AMBIENT AIRCRAFT **/
			class ambientFlyBy {};
			class ambientFormationFlyBy {};
			
			/** Init **/
			class postInit {};
			class stationaryinit {};
		};
		
		class disconnect {	
			/** DisconnectGear **/
			file = "twc_framework\disconnectgear";
			class disconnectGear{};
			class findoldgear{};
			
		};
		
		class modules {
			file = "twc_framework\modules";
			
			class missionConfiguration {};
			class moduleAmbientCiv {};
			class moduleCreateTask;
			class moduleCrateParadrop {};
			class moduleCrateSlingload {};
			class moduleStationaryUnits {};
			class moduleMovableUnits {};
			class moduleVirtualArtillery {};
			class moduleWaveSpawn {};
			class moduleWaveSpawnInit {};
			class moduleArtillery {};
			class moduleUpdateTask {};
			class moduleDefend {};
			class modulePatrol {};
			class moduleDummyBullets {};
			class moduleAirAssault{};
			class moduleAirborne {};
			class moduleAttackPlane{};
			class moduleAmbientAA;
			class moduleCommandMessage{};
			class moduleCharge {};
			class moduleLightsSwitch{};
			class moduleHideMarkers{};
			class moduleIntelHint{};
			class moduleIntelHintWithVariable{};
			class moduleDaisyCutter{};
			class moduleDisableCaching {};
			class moduleGrabComposition {};
			class moduleIgnoreForwardBase {};
			class moduleGliderTakeOff {};
			class moduleTriggerUncache {};
			class moduleACEInteract {};
			class moduleAmbientSound {};
			class moduleAmbientSoundSimp {};
			class moduleSpeak {};
			class moduleDoStop {};
		};
		
		class curator {
			file = "twc_framework\curator";
			
			class forceUncache{};
			class fixNaked {};
		};
		
		class deprecated {
			file = "twc_framework\deprecated";
			
			class boatSafety {};
			class civilianEquipment {};
			class deadBodies {};
			class era {};
			class rollShirt {};
			class run {};
			class safeZone {};
			class zeus {};
		};
	};
};
