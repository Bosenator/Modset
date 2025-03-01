// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#define IN_MED_VEHICLE(unit)  (unit call ace_medical_treatment_fnc_isInMedicalVehicle)
#define IN_MED_FACILITY(unit) (unit call ace_medical_treatment_fnc_isInMedicalFacility)

#define ALL_BODY_PARTS ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"]
#define ALL_SELECTIONS ["head", "body", "hand_l", "hand_r", "leg_l", "leg_r"]
#define ALL_HITPOINTS ["HitHead", "HitBody", "HitLeftArm", "HitRightArm", "HitLeftLeg", "HitRightLeg"]

#define HITPOINT_INDEX_HEAD 0
#define HITPOINT_INDEX_BODY 1
#define HITPOINT_INDEX_LARM 2
#define HITPOINT_INDEX_RARM 3
#define HITPOINT_INDEX_LLEG 4
#define HITPOINT_INDEX_RLEG 5

// Damage threshold above which fatal organ damage can occur
#define HEAD_DAMAGE_THRESHOLD ace_medical_const_headDamageThreshold
#define HEAD_DAMAGE_THRESHOLD_DEFAULT 1
#define ORGAN_DAMAGE_THRESHOLD ace_medical_const_organDamageThreshold
#define ORGAN_DAMAGE_THRESHOLD_DEFAULT 0.6
// Consts for determineIfFatal: sum of damage (values are calcualted at runtime in preInit)
#define FATAL_SUM_DAMAGE_WEIBULL_K ace_medical_const_fatalSumDamageWeibull_K
#define FATAL_SUM_DAMAGE_WEIBULL_L ace_medical_const_fatalSumDamageWeibull_L

// Chance to hit heart based on ratio of 70kg (approx. 70L) body to 70mL stroke volume of heart
// Assuming torso is 50% of the body volume (35L)
#define HEART_HIT_CHANCE ace_medical_const_heartHitChance
#define HEART_HIT_CHANCE_DEFAULT 0.05

#define MEDICAL_ACTION_DISTANCE 1.75

// scale received pain to 0-2 level to select type of scream
// below 0.25: 0, from 0.25 to 0.5: 1, more than 0.5: 2
#define PAIN_TO_SCREAM(pain) (floor (4 * pain) min 2)

// scale received pain to 0-2 level to select type of scream
// below 0.33: 0, from 0.34 to 0.66: 1, more than 0.67: 2
#define PAIN_TO_MOAN(pain) (floor (3 * pain) min 2)

#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})
#define GET_STRING(config,default) (if (isText (config)) then {getText (config)} else {default})
#define GET_ARRAY(config,default) (if (isArray (config)) then {getArray (config)} else {default})

#define DEFAULT_HEART_RATE 80
#define DEFAULT_PERIPH_RES 100

// --- blood
// 0.077 l/kg * 80kg = 6.16l
#define DEFAULT_BLOOD_VOLUME 6.0 // in liters

#define BLOOD_VOLUME_CLASS_1_HEMORRHAGE 6.000 // lost less than 15% blood, Class I Hemorrhage
#define BLOOD_VOLUME_CLASS_2_HEMORRHAGE 5.100 // lost more than 15% blood, Class II Hemorrhage
#define BLOOD_VOLUME_CLASS_3_HEMORRHAGE 4.200 // lost more than 30% blood, Class III Hemorrhage
#define BLOOD_VOLUME_CLASS_4_HEMORRHAGE 3.600 // lost more than 40% blood, Class IV Hemorrhage
#define BLOOD_VOLUME_FATAL 3.0 // Lost more than 50% blood, Unrecoverable

// IV Change per second calculation:
// 250 ml should take 60 seconds to fill. 250 ml / 60 s ~ 4.1667 ml/s.
#define IV_CHANGE_PER_SECOND 4.1667 // in milliliters per second

// Minimum amount of damage required for penetrating wounds (also minDamage for velocity wounds)
#define PENETRATION_THRESHOLD ace_medical_const_penetrationThreshold
#define PENETRATION_THRESHOLD_DEFAULT 0.35

// To be replaced by a proper blood pressure calculation
#define BLOOD_LOSS_KNOCK_OUT_THRESHOLD ace_medical_const_bloodLossKnockOutThreshold
#define BLOOD_LOSS_KNOCK_OUT_THRESHOLD_DEFAULT 0.5 // 50% of cardiac output

// Used to color interaction icons and body image selections
#define BLOOD_LOSS_RED_THRESHOLD 0.5
#define BLOOD_LOSS_TOTAL_COLORS 10
#define DAMAGE_BLUE_THRESHOLD 0.8
#define DAMAGE_TOTAL_COLORS 10

// --- pain
#define PAIN_UNCONSCIOUS ace_medical_const_painUnconscious
#define PAIN_UNCONSCIOUS_DEFAULT 0.5

// Pain fade out time (time it takes until pain is guaranteed to be completly gone)
#define PAIN_FADE_TIME ace_medical_const_painFadeTime
#define PAIN_FADE_TIME_DEFAULT 900

// Only relevant when advanced medication is disabled
// Morphine pain suppression fade out time (time it takes until pain suppression is guaranteed to be completly gone)
#define PAIN_SUPPRESSION_FADE_TIME 1800

// Chance to wake up when vitals are stable (checked once every SPONTANEOUS_WAKE_UP_INTERVAL seconds)
#define SPONTANEOUS_WAKE_UP_INTERVAL 15

// Minimum leg damage required for limping
#define LIMPING_DAMAGE_THRESHOLD ace_medical_const_limpingDamageThreshold
#define LIMPING_DAMAGE_THRESHOLD_DEFAULT 0.30

// Minimum limb damage required for fracture
#define FRACTURE_DAMAGE_THRESHOLD ace_medical_const_fractureDamageThreshold
#define FRACTURE_DAMAGE_THRESHOLD_DEFAULT 0.50

// Minimum body part damage required for blood effect on uniform
#define VISUAL_BODY_DAMAGE_THRESHOLD 0.35

// Empty wound data, used for some default return values
// [classID, bodypartIndex, amountOf, bloodloss, damage]
#define EMPTY_WOUND [-1, -1, 0, 0, 0]

// Base time to bandage each wound category
#define BANDAGE_TIME_S 4
#define BANDAGE_TIME_M 6
#define BANDAGE_TIME_L 8
#define BANDAGE_TIME_MOD_MEDIC -2
#define BANDAGE_TIME_MOD_SELF 4

#define DEFAULT_BANDAGE_REOPENING_CHANCE 0.1
#define DEFAULT_BANDAGE_REOPENING_MIN_DELAY 120
#define DEFAULT_BANDAGE_REOPENING_MAX_DELAY 200

#define DEFAULT_TOURNIQUET_VALUES [0,0,0,0,0,0]

#define DEFAULT_FRACTURE_VALUES [0,0,0,0,0,0]

// Triage colors, for consistency across UIs and functions
#define TRIAGE_COLOR_NONE      0, 0, 0, 0.9
#define TRIAGE_COLOR_MINIMAL   0, 0.5, 0, 0.9
#define TRIAGE_COLOR_DELAYED   1, 0.84, 0, 0.9
#define TRIAGE_COLOR_IMMEDIATE 1, 0, 0, 0.9
#define TRIAGE_COLOR_DECEASED  0, 0, 0, 0.9

#define TRIAGE_TEXT_COLOR_NONE      1, 1, 1, 1
#define TRIAGE_TEXT_COLOR_MINIMAL   1, 1, 1, 1
#define TRIAGE_TEXT_COLOR_DELAYED   0, 0, 0, 1
#define TRIAGE_TEXT_COLOR_IMMEDIATE 1, 1, 1, 1
#define TRIAGE_TEXT_COLOR_DECEASED  1, 1, 1, 1

// Medical activity logs
#define MED_LOG_MAX_ENTRIES 8
#define MED_LOG_VARNAME(type) (format ["ace_medical_log_%1", type])

// - Unit Variables ----------------------------------------------------
// These variables get stored in object space and used across components
// Defined here for easy consistency with GETVAR/SETVAR (also a list for reference)
#define VAR_BLOOD_PRESS       "ace_medical_bloodPressure"
#define VAR_BLOOD_VOL         "ace_medical_bloodVolume"
#define VAR_WOUND_BLEEDING    "ace_medical_woundBleeding"
#define VAR_CRDC_ARRST        "ace_medical_inCardiacArrest"
#define VAR_HEART_RATE        "ace_medical_heartRate"
#define VAR_PAIN              "ace_medical_pain"
#define VAR_PAIN_SUPP         "ace_medical_painSuppress"
#define VAR_PERIPH_RES        "ace_medical_peripheralResistance"
#define VAR_UNCON             "ACE_isUnconscious"
#define VAR_OPEN_WOUNDS       "ace_medical_openWounds"
#define VAR_BANDAGED_WOUNDS   "ace_medical_bandagedWounds"
#define VAR_STITCHED_WOUNDS   "ace_medical_stitchedWounds"
// These variables track gradual adjustments (from medication, etc.)
#define VAR_MEDICATIONS       "ace_medical_medications"
// These variables track the current state of status values above
#define VAR_HEMORRHAGE        "ace_medical_hemorrhage"
#define VAR_IN_PAIN           "ace_medical_inPain"
#define VAR_TOURNIQUET        "ace_medical_tourniquets"
#define VAR_FRACTURES         "ace_medical_fractures"

// - Unit Functions ---------------------------------------------------
// Retrieval macros for common unit values
// Defined for easy consistency and speed
#define GET_SM_STATE(_unit)         ([_unit, ace_medical_STATE_MACHINE] call CBA_statemachine_fnc_getCurrentState)
#define GET_BLOOD_VOLUME(unit)      (unit getVariable [VAR_BLOOD_VOL, DEFAULT_BLOOD_VOLUME])
#define GET_WOUND_BLEEDING(unit)    (unit getVariable [VAR_WOUND_BLEEDING, 0])
#define GET_HEART_RATE(unit)        (unit getVariable [VAR_HEART_RATE, DEFAULT_HEART_RATE])
#define GET_HEMORRHAGE(unit)        (unit getVariable [VAR_HEMORRHAGE, 0])
#define GET_PAIN(unit)              (unit getVariable [VAR_PAIN, 0])
#define GET_PAIN_SUPPRESS(unit)     (unit getVariable [VAR_PAIN_SUPP, 0])
#define GET_TOURNIQUETS(unit)       (unit getVariable [VAR_TOURNIQUET, DEFAULT_TOURNIQUET_VALUES])
#define GET_FRACTURES(unit)         (unit getVariable [VAR_FRACTURES, DEFAULT_FRACTURE_VALUES])
#define IN_CRDC_ARRST(unit)         (unit getVariable [VAR_CRDC_ARRST, false])
#define IS_BLEEDING(unit)           (GET_WOUND_BLEEDING(unit) > 0)
#define IS_IN_PAIN(unit)            (unit getVariable [VAR_IN_PAIN, false])
#define IS_UNCONSCIOUS(unit)        (unit getVariable [VAR_UNCON, false])
#define GET_OPEN_WOUNDS(unit)       (unit getVariable [VAR_OPEN_WOUNDS, []])
#define GET_BANDAGED_WOUNDS(unit)   (unit getVariable [VAR_BANDAGED_WOUNDS, []])
#define GET_STITCHED_WOUNDS(unit)   (unit getVariable [VAR_STITCHED_WOUNDS, []])
#define GET_DAMAGE_THRESHOLD(unit)  (unit getVariable ["ace_medical_damageThreshold", [ace_medical_AIDamageThreshold, ace_medical_playerDamageThreshold] select (isPlayer unit)])

// The following function calls are defined here just for consistency
#define GET_BLOOD_LOSS(unit)        ([unit] call ace_medical_status_fnc_getBloodLoss)
#define GET_BLOOD_PRESSURE(unit)    ([unit] call ace_medical_status_fnc_getBloodPressure)

// Derivative unit values commonly used
#define GET_PAIN_PERCEIVED(unit)    (0 max (GET_PAIN(unit) - GET_PAIN_SUPPRESS(unit)) min 1)

#define HAS_TOURNIQUET_APPLIED_ON(unit,index) ((GET_TOURNIQUETS(unit) select index) > 0)

// Cache expiry values, in seconds
#define IN_MEDICAL_FACILITY_CACHE_EXPIRY 1
#define CAN_TREAT_CONDITION_CACHE_EXPIRY 2

// Ignore UAV/Drone AI Base Classes
#define IGNORE_BASE_UAVPILOTS "B_UAV_AI", "O_UAV_AI", "UAV_AI_base_F"
