
class nln_notepad
{
    idd = -1;
    duration = 9999999999999e10;
    fadein = 0;
    fadeout = 0;
    name = "nln_notepad";
    onLoad = "uiNamespace setVariable ['nln_notepad', _this select 0];";

    class Controls
    {
        class nln_notepad_background : nln_base_picture
        {
            idc = 1200;
            text = "\twc_notepad\sheet_notepad\data\ui\notepad.paa";
            x = "-0.0557292 * safezoneW + safezoneX";
            y = "0.26909 * safezoneH + safezoneY";
            w = "0.48125 * safezoneW";
            h = "0.747708 * safezoneH";
            moving = 1;
        };
        class nln_notepad_edit : nln_base_edit
        {
            idc = 1400;
            x = "0.0416667 * safezoneW + safezoneX";
            y = "0.307 * safezoneH + safezoneY";
            w = "0.303646 * safezoneW";
            h = "0.637751 * safezoneH";
        };
    };
};
