class CfgFunctions {
	class TWC {
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
			class era{};
			class rollShirt{};
			class boatSafety{};
			class civilianEquipment{};
			class deadBodies{};
			class missionModuleInit{};
			class moduleDebug{};
			class safeZone{};
			class zeus{};
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
			class moduledostop {};
		};
		
		class cache {
			file = "twc_framework\cache";
			class cacheModuleInit {};
			class initAICache {};
			class initVehicleCache {};
		};
		
		class curator {
			file = "twc_framework\curator";
			class setSpectator {};
			class forceUncache{};
			class fixNaked {};
			// medical moved to twc_medical
		};
	};
};
