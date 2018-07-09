class ACE_Medical_Advanced {
	class Treatment {
		class Medication {
			class Morphine {
				painReduce = 0.5;
				viscosityChange = -10;
			};
			
			class Epinephrine {
				timeInSystem = 300;
				maxDose = 4;
				viscosityChange = 5;
			};
		};

		// Reopening Chances - TODO
		class Bandaging {
			class Bandage { // basic bandage
				effectiveness = 5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};

			class FieldDressing {
				// How effect is the bandage for treating one wounds type injury
				effectiveness = 1;
				// What is the chance and delays (in seconds) of the treated default injury reopening
				reopeningChance = 0.1;
				reopeningMinDelay = 120;
				reopeningMaxDelay = 200;

				class Abrasion {
					effectiveness = 3;
					reopeningChance = 0.3;
					reopeningMinDelay = 200;
					reopeningMaxDelay = 1000;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 3;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 2.5;
					reopeningChance = 0.7;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.9;
				};

				class Avulsions: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.5;
					reopeningMinDelay = 120;
					reopeningMaxDelay = 200;
				};
				class AvulsionsMinor: Avulsions {
					effectiveness = 1;
				};
				class AvulsionsMedium: Avulsions {
					effectiveness = 0.9;
				};
				class AvulsionsLarge: Avulsions {
					effectiveness = 0.75;
				};

				class Contusion: Abrasion {
					effectiveness = 1;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion {};
				class ContusionMedium: Contusion {};
				class ContusionLarge: Contusion {};

				class CrushWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.2;
					reopeningMinDelay = 20;
					reopeningMaxDelay = 1000;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 1;
					reopeningChance = 0.2;
				};
				class CrushWoundMedium: CrushWound {
					effectiveness = 0.7;
					reopeningChance = 0.3;
				};
				class CrushWoundLarge: CrushWound {
					effectiveness = 0.6;
					reopeningChance = 0.4;
				};

				class Cut: Abrasion {
					effectiveness = 4;
					reopeningChance = 0.1;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 1000;
				};
				class CutMinor: Cut {
					effectiveness = 4;
					reopeningChance = 0.1;
				};
				class CutMedium: Cut {
					effectiveness = 3;
					reopeningChance = 0.3;
				};
				class CutLarge: Cut {
					effectiveness = 1;
					reopeningChance = 0.5;
				};

				class Laceration: Abrasion {
					effectiveness = 0.95;
					reopeningChance = 0.3;
					reopeningMinDelay = 100;
					reopeningMaxDelay = 800;
				};
				class LacerationMinor: Laceration {
					effectiveness = 0.95;
					reopeningChance = 0.3;
				};
				class LacerationMedium: Laceration {
					effectiveness = 0.7;
					reopeningChance = 0.5;
				};
				class LacerationLarge: Laceration {
					effectiveness = 0.5;
					reopeningChance = 0.6;
				};

				class velocityWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.7;
					reopeningMinDelay = 100;
					reopeningMaxDelay = 500;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 2;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 1.5;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 1;
				};

				class punctureWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.5;
					reopeningMinDelay = 200;
					reopeningMaxDelay = 850;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 2;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 1.3;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 0.9;
				};
			};

			class PackingBandage: fieldDressing {
				class Abrasion {
					effectiveness = 3;
					reopeningChance = 0.6;
					reopeningMinDelay = 800;
					reopeningMaxDelay = 1500;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 3;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 2.5;
					reopeningChance = 0.9;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 2;
					reopeningChance = 1;
				};

				class Avulsions: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.7;
					reopeningMinDelay = 1000;
					reopeningMaxDelay = 1600;
				};
				class AvulsionsMinor: Avulsions {
					effectiveness = 1;
				};
				class AvulsionsMedium: Avulsions {
					effectiveness = 0.9;
				};
				class AvulsionsLarge: Avulsions {
					effectiveness = 0.75;
				};

				class Contusion: Abrasion {
					effectiveness = 1;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion {};
				class ContusionMedium: Contusion {};
				class ContusionLarge: Contusion {};

				class CrushWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.5;
					reopeningMinDelay = 600;
					reopeningMaxDelay = 1000;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 1;
					reopeningChance = 0.6;
				};
				class CrushWoundMedium: CrushWound {
					effectiveness = 0.7;
					reopeningChance = 0.7;
				};
				class CrushWoundLarge: CrushWound {
					effectiveness = 0.6;
					reopeningChance = 0.8;
				};

				class Cut: Abrasion {
					effectiveness = 4;
					reopeningChance = 0.4;
					reopeningMinDelay = 700;
					reopeningMaxDelay = 1000;
				};
				class CutMinor: Cut {
					effectiveness = 4;
					reopeningChance = 0.6;
				};
				class CutMedium: Cut {
					effectiveness = 3;
					reopeningChance = 0.7;
				};
				class CutLarge: Cut {
					effectiveness = 1;
					reopeningChance = 0.8;
				};

				class Laceration: Abrasion {
					effectiveness = 0.95;
					reopeningChance = 0.65;
					reopeningMinDelay = 500;
					reopeningMaxDelay = 2000;
				};
				class LacerationMinor: Laceration {
					effectiveness = 0.95;
					reopeningChance = 0.65;
				};
				class LacerationMedium: Laceration {
					effectiveness = 0.7;
					reopeningChance = 0.8;
				};
				class LacerationLarge: Laceration {
					effectiveness = 0.5;
					reopeningChance = 0.9;
				};

				class velocityWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 1;
					reopeningMinDelay = 800;
					reopeningMaxDelay = 2000;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 2;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 1.5;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 1;
				};

				class punctureWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 1;
					reopeningMinDelay = 1000;
					reopeningMaxDelay = 3000;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 2;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 1.3;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 0.9;
				};
			};

			class ElasticBandage: fieldDressing {
				class Abrasion {
					effectiveness = 4;
					reopeningChance = 0.6;
					reopeningMinDelay = 80;
					reopeningMaxDelay = 150;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 4;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 3;
					reopeningChance = 0.9;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 2.5;
					reopeningChance = 1;
				};

				class Avulsions: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.7;
					reopeningMinDelay = 100;
					reopeningMaxDelay = 160;
				};
				class AvulsionsMinor: Avulsions {
					effectiveness = 2;
				};
				class AvulsionsMedium: Avulsions {
					effectiveness = 1.4;
				};
				class AvulsionsLarge: Avulsions {
					effectiveness = 1;
				};

				class Contusion: Abrasion {
					effectiveness = 2;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion {};
				class ContusionMedium: Contusion {};
				class ContusionLarge: Contusion {};

				class CrushWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.5;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 100;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 2;
					reopeningChance = 0.6;
				};
				class CrushWoundMedium: CrushWound {
					effectiveness = 1.7;
					reopeningChance = 0.7;
				};
				class CrushWoundLarge: CrushWound {
					effectiveness = 1.6;
					reopeningChance = 0.8;
				};

				class Cut: Abrasion {
					effectiveness = 5;
					reopeningChance = 0.4;
					reopeningMinDelay = 70;
					reopeningMaxDelay = 100;
				};
				class CutMinor: Cut {
					effectiveness = 5;
					reopeningChance = 0.6;
				};
				class CutMedium: Cut {
					effectiveness = 3.5;
					reopeningChance = 0.7;
				};
				class CutLarge: Cut {
					effectiveness = 2;
					reopeningChance = 0.8;
				};

				class Laceration: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.65;
					reopeningMinDelay = 50;
					reopeningMaxDelay = 200;
				};
				class LacerationMinor: Laceration {
					effectiveness = 2;
					reopeningChance = 0.65;
				};
				class LacerationMedium: Laceration {
					effectiveness = 1.5;
					reopeningChance = 0.8;
				};
				class LacerationLarge: Laceration {
					effectiveness = 1;
					reopeningChance = 0.9;
				};

				class velocityWound: Abrasion {
					effectiveness = 2.2;
					reopeningChance = 1;
					reopeningMinDelay = 80;
					reopeningMaxDelay = 200;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 2.2;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 1.75;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 1.5;
				};

				class punctureWound: Abrasion {
					effectiveness = 2.5;
					reopeningChance = 1;
					reopeningMinDelay = 100;
					reopeningMaxDelay = 300;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 2.5;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 2;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 1.5;
				};
			};

			class QuikClot: fieldDressing {
				class Abrasion {
					effectiveness = 2;
					reopeningChance = 0.2;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 2;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.25;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 0.7;
					reopeningChance = 0.3;
				};

				class Avulsions: Abrasion {
					effectiveness = 0.7;
					reopeningChance = 0.5;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class AvulsionsMinor: Avulsions {
					reopeningChance = 0.4;
					effectiveness = 0.7;
				};
				class AvulsionsMedium: Avulsions {
					reopeningChance = 0.45;
					effectiveness = 0.65;
				};
				class AvulsionsLarge: Avulsions {
					reopeningChance = 0.5;
					effectiveness = 0.5;
				};

				class Contusion: Abrasion {
					effectiveness = 1;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion {};
				class ContusionMedium: Contusion {};
				class ContusionLarge: Contusion {};

				class CrushWound: Abrasion {
					effectiveness = 0.6;
					reopeningChance = 0.5;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 0.6;
					reopeningChance = 0.4;
				};
				class CrushWoundMedium: CrushWound {
					reopeningChance = 0.45;
					effectiveness = 0.5;
				};
				class CrushWoundLarge: CrushWound {
					reopeningChance = 0.5;
					effectiveness = 0.4;
				};

				class Cut: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.3;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class CutMinor: Cut {
					effectiveness = 2;
					reopeningChance = 0.3;
				};
				class CutMedium: Cut {
					reopeningChance = 0.35;
					effectiveness = 1;
				};
				class CutLarge: Cut {
					reopeningChance = 0.4;
					effectiveness = 0.6;
				};

				class Laceration: Abrasion {
					effectiveness = 0.7;
					reopeningChance = 0.3;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class LacerationMinor: Laceration {
					effectiveness = 0.7;
					reopeningChance = 0.2;
				};
				class LacerationMedium: Laceration {
					effectiveness = 0.25;
				};
				class LacerationLarge: Laceration {
					effectiveness = 0.3;
				};

				class velocityWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.5;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class velocityWoundMinor: velocityWound {
					reopeningChance = 0.4;
					effectiveness = 1;
				};
				class velocityWoundMedium: velocityWound {
					reopeningChance = 0.45;
					effectiveness = 0.75;
				};
				class velocityWoundLarge: velocityWound {
					reopeningChance = 0.5;
					effectiveness = 0.5;
				};

				class punctureWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.3;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 0.7;
					reopeningChance = 0.35;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 0.4;
					reopeningChance = 0.4;
				};
			};
		};
	};
};

