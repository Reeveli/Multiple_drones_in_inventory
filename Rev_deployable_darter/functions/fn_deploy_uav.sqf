/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod (main component).
 * Client side function for drones to deploy them.
 * Can be called by CBA inventory contect actions, useractions or Ace actions.
 * Can be called for others items as well if for whatever reason someone wants to do that. Items not included in the function are deployed as darters.
 *
 * Arguments:
 * 0: Unit deploying the drone <OBJECT>
 * 1: Item class <STRING>
 * 2: Source object <OBJECT>
 *
 * Return Value: <BOOL>
 *
 * Example:
 * [_unit,_item] call Rev_uav_fnc_deploy_uav;
 *
 2.0
    All vehicle & weapon classes renamed with mod rewrite
    New code for spawning drone on the ground
        Animation moved to end of function
    Simplified _vehicletype switch construct
    Changed getRelDir to getDir
    Added new param for object related removal
    Animation stance is now based on player stance
    switch case expanded to cover world items
 */

if !(hasInterface) exitWith {false;};

params [
	["_unit",objNull,[objNull]],
	["_item","",[""]],
	["_object",objNull,[objNull]]
];

if (_item isEqualTo "") exitWith {false}; 
closeDialog 602;

private _vehicletype = switch (_item) do
{
    case "Rev_Darter":
    {
        switch (side _unit) do {
            case west: {"B_Rev_Darter"};
            case opfor: {"O_Rev_Darter"};
            case independent: {"I_Rev_Darter"};
            case civilian: {"C_Rev_Darter"};
        };
    };
    case "Rev_Pelican":
    {
        switch (side _unit) do {
            case west: {"B_Rev_Pelican"};            
            case opfor: {"O_Rev_Pelican"};
            case independent: {"I_Rev_Pelican"};
            case civilian: {"C_Rev_Pelican"};
        };
    };
    case "Rev_Demine":
    {
        switch (side _unit) do {
            case west: {"B_Rev_Demine"};            
            case opfor: {"O_Rev_Demine"};
            case independent: {"I_Rev_Demine"};
            case civilian: {"C_Rev_Demine"};
        };
    };
    case "Item_Rev_Darter":
    {
        switch (side _unit) do {
            case west: {"B_Rev_Darter"};
            case opfor: {"O_Rev_Darter"};
            case independent: {"I_Rev_Darter"};
            case civilian: {"C_Rev_Darter"};
        };
    };
    case "Item_Rev_Pelican":
    {
        switch (side _unit) do {
            case west: {"B_Rev_Pelican"};            
            case opfor: {"O_Rev_Pelican"};
            case independent: {"I_Rev_Pelican"};
            case civilian: {"C_Rev_Pelican"};
        };
    };
    case "Item_Rev_Demine":
    {
        switch (side _unit) do {
            case west: {"B_Rev_Demine"};            
            case opfor: {"O_Rev_Demine"};
            case independent: {"I_Rev_Demine"};
            case civilian: {"C_Rev_Demine"};
        };
    };
    default
    {
        switch (side _unit) do {
            case west: {"B_Rev_Darter"};
            case opfor: {"O_Rev_Darter"};
            case independent: {"I_Rev_Darter"};
            case civilian: {"C_Rev_Darter"};
        };
    };
};

if !(isNull _object) then {deleteVehicle _object};


private _uav = createVehicle [_vehicletype, _unit getRelPos [1,0]];
createVehicleCrew _uav;
private _dir = _unit getDir _uav;
_unit setDir _dir;	
private _anim = if (stance _unit == "STAND") then {"AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"} else {"AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"};
[_unit, _anim] remoteExec ["switchMove", 0];


["Rev_deployable_darter_EH", [_unit]] call CBA_fnc_localEvent;

true;