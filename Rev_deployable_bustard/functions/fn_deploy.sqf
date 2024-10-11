/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod (AP5 & IED component).
 * Client side function called from CBA context menu of drones to assemble them.
 * Can be called for others items as well if for whatever reason someone wants to do that.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Item class <STRING>
 *
 * Return Value: <BOOL>
 *
 * Example:
 * [_unit,_item] call Rev_bustard_fnc_deploy;
 *
 1.1
    New item removal code as workaround of CBA bug
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
    case "Rev_Bustard":
    {
        switch (side _unit) do {
            case west: {"B_Rev_Bustard"};
            case opfor: {"O_Rev_Bustard"};
            case independent: {"I_Rev_Bustard"};
            case civilian: {"C_Rev_Bustard"};
        };
    };
    case "Item_Rev_Bustard":
    {
        switch (side _unit) do {
            case west: {"B_Rev_Bustard"};
            case opfor: {"O_Rev_Bustard"};
            case independent: {"I_Rev_Bustard"};
            case civilian: {"C_Rev_Bustard"};
        };
    };
    case "Rev_UAV_IED":
    {
        switch (side _unit) do {
            case west: {"B_Rev_UAV_IED"};
            case opfor: {"O_Rev_UAV_IED"};
            case independent: {"I_Rev_UAV_IED"};
            case civilian: {"C_Rev_UAV_IED"};
        };
    };
    case "Item_Rev_UAV_IED":
    {
        switch (side _unit) do {
            case west: {"B_Rev_UAV_IED"};
            case opfor: {"O_Rev_UAV_IED"};
            case independent: {"I_Rev_UAV_IED"};
            case civilian: {"C_Rev_UAV_IED"};
        };
    };
    default
    {
        switch (side _unit) do {
            case west: {"B_Rev_Bustard"};
            case opfor: {"O_Rev_Bustard"};
            case independent: {"I_Rev_Bustard"};
            case civilian: {"C_Rev_Bustard"};
        };
    };
};

if !(isNull _object) then {deleteVehicle _object};
//Added in 1.1
_unit removeItem _item;

private _uav = createVehicle [_vehicletype, _unit getRelPos [1,0]];
createVehicleCrew _uav;
//Weapon removal with delay to enable native functions to run first
[{[_this # 0] call Rev_bustard_fnc_removeWeapon;}, [_uav], 0.5] call CBA_fnc_waitAndExecute;

private _dir = _unit getDir _uav;
_unit setDir _dir;
private _anim = if (stance _unit == "STAND") then {"AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"} else {"AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"};
[_unit, _anim] remoteExec ["switchMove", 0];

true;