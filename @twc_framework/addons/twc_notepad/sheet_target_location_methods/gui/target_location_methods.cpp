
class nln_target_location_methods
{
    idd = -1;
    movingEnable = 1;
    onMouseButtonUp = "_this call nln_main_fnc_backgroundClick;";

    class Controls
    {
        class nln_targetlocationmethods_background : nln_base_picture
        {
            idc = 1200;
            text = "\twc_notepad\sheet_target_location_methods\data\ui\target_location_methods.paa";
            x = "-0.0614583 * safezoneW + safezoneX";
            y = "0.236103 * safezoneH + safezoneY";
            w = "0.429688 * safezoneW";
            h = "0.758704 * safezoneH";
            moving = 1;
        };
    };
};
