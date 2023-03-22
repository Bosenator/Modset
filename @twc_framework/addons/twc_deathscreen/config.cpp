class CfgPatches {
	class TWC_Deathscreen {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"twc_core",
			"twc_framework",
			"twc_sounds",
			"twc_ui",
			"ace_common",
			"twc_camera"
		};

		author = "Bosenator";
		authorUrl = "thewreckingcrew.eu";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

#include "CfgDeathScreens.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"