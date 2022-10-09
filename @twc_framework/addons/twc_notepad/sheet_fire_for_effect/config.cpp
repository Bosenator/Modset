
class CfgPatches
{
    #include "CfgPatches.cpp"
};

class CfgFunctions
{
    #include "CfgFunctions.cpp"
};

class CfgVehicles
{
    #include "CfgVehicles.cpp"
};

class nln_base_picture;
class nln_base_edit;
class nln_base_button;

#include "gui\fire_for_effect.cpp"

class RscTitles
{
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    class nln_fire_for_effect
    {
        clientInit = "call compile preprocessFileLineNumbers '\twc_notepad\sheet_fire_for_effect\XEH_clientPreInit.sqf';";
    };
};
