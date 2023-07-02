/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod.
 * Client side function called from CBA context menu of drones to deploy them in the air.
 * Can be called for others items as well if for whatever reason someone wants to do that. Items not configured by the mod are deployed as darters.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Item class <STRING>
 *
 * Return Value: <BOOL>
 *
 * Example:
 * [_unit,_item] call Rev_uav_fnc_deploy_uav;
 *
 */

if !(hasInterface) exitWith {false;};

params [
	["_unit",objNull,[objNull]],
	["_item","",[""]]
];

if (_item isEqualTo "") exitWith {}; 

closeDialog 602;
[_unit, "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart"] remoteExec ["switchMove", 0];

private _vehicletype = nil;

switch (_item) do
{
    case "Rev_darter_item" :
    {
        switch (side _unit) do {
            case west: {_vehicletype = "Rev_darter_b"};
            case opfor: {_vehicletype = "Rev_darter_o"};
            case independent: {_vehicletype = "Rev_darter_i"};
            case civilian: {_vehicletype = "Rev_darter_c"};
        };
    };
    case "Rev_pelican_item" :
    {
        switch (side _unit) do {
            case west: {_vehicletype = "Rev_pelican_b"};            
            case opfor: {_vehicletype = "Rev_pelican_o"};
            case independent: {_vehicletype = "Rev_pelican_i"};
            case civilian: {_vehicletype = "Rev_pelican_c"};
        };
    };
    case "Rev_demine_item" :
    {
        switch (side _unit) do {
            case west: {_vehicletype = "Rev_demine_b"};            
            case opfor: {_vehicletype = "Rev_demine_o"};
            case independent: {_vehicletype = "Rev_demine_i"};
            case civilian: {_vehicletype = "Rev_demine_c"};
        };
    };
    default
    {
        switch (side _unit) do {
            case west: {_vehicletype = "Rev_darter_b"};
            case opfor: {_vehicletype = "Rev_darter_o"};
            case independent: {_vehicletype = "Rev_darter_i"};
            case civilian: {_vehicletype = "Rev_darter_c"};
        };
    };
};


private _dir = getDir _unit;
private _uav = ([getPos _unit, _dir, _vehicletype,  side _unit] call BIS_fnc_spawnVehicle) select 0;

true;
