/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod (designator component).
 * Client side function for designators to assemble.
 * Can be called by CBA inventory contect actions, useractions or Ace actions.
 * Can be called for others items as well if for whatever reason someone wants to do that.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Source object <OBJECT>
 *
 * Return Value: <BOOL>
 *
 * Example:
 * [player,this] call Rev_designator_fnc_deploy;
 *
 1.2
    Unified code with Rev_uav_fnc_deploy_uav
        New code for spawning drone on the ground
        Animation moved to end of function
    Simplified _vehicletype switch construct
    Changed getRelDir to getDir
    Added new parameter
    Added object check
    Animation stance is now based on player stance
    Switch case expanded to cover world items
 */

if !(hasInterface) exitWith {false;};

params [
	["_unit",objNull,[objNull]],
	["_item","",[""]],
	["_object",objNull,[objNull]]
];

closeDialog 602;

private _vehicletype = switch (_item) do
{
    case "Rev_Designator":
    {
        switch (side _unit) do {
            case west: {"B_Rev_Designator"};
            case opfor: {"O_Rev_Designator"};
            case independent: {"I_Rev_Designator"};
            case civilian: {"C_Rev_Designator"};
        };
    };
    case "Item_Rev_Designator":
    {
        switch (side _unit) do {
            case west: {"B_Rev_Designator"};
            case opfor: {"O_Rev_Designator"};
            case independent: {"I_Rev_Designator"};
            case civilian: {"C_Rev_Designator"};
        };
    };
    default
    {
        switch (side _unit) do {
            case west: {"B_Rev_Designator"};
            case opfor: {"O_Rev_Designator"};
            case independent: {"I_Rev_Designator"};
            case civilian: {"C_Rev_Designator"};
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


true;