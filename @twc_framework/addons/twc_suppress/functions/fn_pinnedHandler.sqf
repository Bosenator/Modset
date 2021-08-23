#define MIN_THRESHOLD 8

if (TWC_Suppress_threshold >= MIN_THRESHOLD) then {
	if (!alive player) exitWith {};
	TWC_Suppress_isSuppressed = true;

	_power = (TWC_Suppress_threshold - MIN_THRESHOLD) / (TWC_Suppress_maxThreshold - MIN_THRESHOLD);

	addCamShake [(_power * 1), 2 + (_power * 23), 1.5];

	TWC_Suppress_blur ppEffectAdjust [(_power * 1.28)];
	TWC_Suppress_blur ppEffectCommit 0.5;
	
	TWC_Suppress_cc ppEffectAdjust [1, 1, 0,[0, 0, 0, 0],[1, 1, 1, (1 - (_power * 0.75))],[0.35,0.35,0.35,0]];
	TWC_Suppress_cc ppEffectCommit 0.3;
	
	TWC_Suppress_radialBlur ppEffectAdjust [(_power * 0.011), (_power * 0.011), 0.2, 0.2];
	TWC_Suppress_radialBlur ppEffectCommit 0.05;
	
	if (TWC_Suppress_threshold >= (TWC_Suppress_maxThreshold / 2) && (time - TWC_Suppress_lastPinnedHBTime) >= 10) then {
		TWC_Suppress_lastPinnedHBTime = (time + 10);
		playSound "TWC_Suppress_PinnedHeartBeat";
	};
} else {
	if (TWC_Suppress_isSuppressed) then {
		TWC_Suppress_isSuppressed = false;
		[] call TWC_Suppress_fnc_clearPinnedEffect;
	};
};