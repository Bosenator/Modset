
class nln_adjust_fire_mission
{
    idd = -1;
    duration = 9999999999999e10;
    fadein = 0;
    fadeout = 0;
    name = "nln_adjust_fire_mission";
    onLoad = "uiNamespace setVariable ['nln_adjust_fire_mission', (_this select 0)];";

    class Controls
    {
        class nln_afm_background : nln_base_picture
        {
            idc = 1200;
            text = "\twc_notepad\sheet_adjust_fire_mission\data\ui\adjust_fire_mission.paa";
            x = "-0.0614583 * safezoneW + safezoneX";
            y = "0.236103 * safezoneH + safezoneY";
            w = "0.423958 * safezoneW";
            h = "0.758704 * safezoneH";
        };

        class nln_afm_edit_line0_1 : nln_base_edit
        {
            idc = 1400;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.302077 * safezoneH + safezoneY";
            w = "0.0572917 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line0_2 : nln_base_edit
        {
            idc = 1402;
            x = "0.15625 * safezoneW + safezoneX";
            y = "0.302077 * safezoneH + safezoneY";
            w = "0.0458333 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line1 : nln_base_edit
        {
            idc = 1401;
            x = "0.0416667 * safezoneW + safezoneX";
            y = "0.339064 * safezoneH + safezoneY";
            w = "0.217708 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line2 : nln_base_edit
        {
            idc = 1403;
            x = "0.104688 * safezoneW + safezoneX";
            y = "0.383047 * safezoneH + safezoneY";
            w = "0.06875 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line3 : nln_base_edit
        {
            idc = 1404;
            x = "0.0703125 * safezoneW + safezoneX";
            y = "0.605961 * safezoneH + safezoneY";
            w = "0.0973958 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line4 : nln_base_edit
        {
            idc = 1405;
            x = "0.116146 * safezoneW + safezoneX";
            y = "0.635948 * safezoneH + safezoneY";
            w = "0.131771 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line5 : nln_base_edit
        {
            idc = 1406;
            x = "0.0989583 * safezoneW + safezoneX";
            y = "0.65794 * safezoneH + safezoneY";
            w = "0.1375 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line6 : nln_base_edit
        {
            idc = 1407;
            x = "0.0817708 * safezoneW + safezoneX";
            y = "0.678931 * safezoneH + safezoneY";
            w = "0.200521 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line7 : nln_base_edit
        {
            idc = 1408;
            x = "0.0760417 * safezoneW + safezoneX";
            y = "0.701923 * safezoneH + safezoneY";
            w = "0.160417 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line8 : nln_base_edit
        {
            idc = 1409;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.752901 * safezoneH + safezoneY";
            w = "0.0572917 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line9 : nln_base_edit
        {
            idc = 1410;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.80788 * safezoneH + safezoneY";
            w = "0.0515625 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line10 : nln_base_edit
        {
            idc = 1411;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.846867 * safezoneH + safezoneY";
            w = "0.0458333 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line11 : nln_base_edit
        {
            idc = 1412;
            x = "0.0932292 * safezoneW + safezoneX";
            y = "0.945828 * safezoneH + safezoneY";
            w = "0.154687 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_ringle_1 : nln_base_picture
        {
            idc = 1201;
            x = "0.167708 * safezoneW + safezoneX";
            y = "0.408039 * safezoneH + safezoneY";
            w = "0.0572917 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class nln_afm_ringle_2 : nln_base_picture
        {
            idc = 1202;
            x = "0.225 * safezoneW + safezoneX";
            y = "0.408039 * safezoneH + safezoneY";
            w = "0.0286458 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class vnln_afm_ringle_3 : nln_base_picture
        {
            idc = 1203;
            x = "0.254375 * safezoneW + safezoneX";
            y = "0.408039 * safezoneH + safezoneY";
            w = "0.0229167 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class nln_afm_ringle_4 : nln_base_picture
        {
            idc = 1204;
            x = "0.190625 * safezoneW + safezoneX";
            y = "0.42303 * safezoneH + safezoneY";
            w = "0.0802083 * safezoneW";
            h = "0.0659743 * safezoneH";
        };

        class nln_afm_ringle_5 : nln_base_picture
        {
            idc = 1205;
            x = "0.179167 * safezoneW + safezoneX";
            y = "0.450017 * safezoneH + safezoneY";
            w = "0.0744792 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class nln_afm_ringle_6 : nln_base_picture
        {
            idc = 1206;
            x = "0.253646 * safezoneW + safezoneX";
            y = "0.450017 * safezoneH + safezoneY";
            w = "0.034375 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class nln_afm_ringle_7 : nln_base_picture
        {
            idc = 1207;
            x = "0.0588542 * safezoneW + safezoneX";
            y = "0.467013 * safezoneH + safezoneY";
            w = "0.06875 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class nln_afm_ringle_8 : nln_base_picture
        {
            idc = 1208;
            x = "0.127604 * safezoneW + safezoneX";
            y = "0.464013 * safezoneH + safezoneY";
            w = "0.103125 * safezoneW";
            h = "0.0659743 * safezoneH";
        };
    };
};
