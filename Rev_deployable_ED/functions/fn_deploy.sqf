/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod (ED component).
 * Client side function for ED items to assemble.
 * Can be called by CBA inventory contect actions, useractions or Ace actions.
 * Can be called for others items as well if for whatever reason someone wants to do that.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Item class <STRING>
 * 2: Source object <OBJECT>
 *
 * Return Value: <BOOL>
 *
 * Example:
 * [_unit,_item] call Rev_ED_fnc_deploy;
 *
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
    case "Rev_Pelter" :
    {
        switch (side _unit) do {
            case west: {"B_Rev_Pelter"};
            case opfor: {"O_Rev_Pelter"};
            case independent: {"I_Rev_Pelter"};
            case civilian: {"C_Rev_Pelter"};
        };
    };
    case "Item_Rev_Pelter" :
    {
        switch (side _unit) do {
            case west: {"B_Rev_Pelter"};            
            case opfor: {"O_Rev_Pelter"};
            case independent: {"I_Rev_Pelter"};
            case civilian: {"C_Rev_Pelter"};
        };
    };
    case "Rev_Roller" :
    {
        switch (side _unit) do {
            case west: {"B_Rev_Roller"};
            case opfor: {"O_Rev_Roller"};
            case independent: {"I_Rev_Roller"};
            case civilian: {"C_Rev_Roller"};
        };
    };
    case "Item_Rev_Roller" :
    {
        switch (side _unit) do {
            case west: {"B_Rev_Roller"};            
            case opfor: {"O_Rev_Roller"};
            case independent: {"I_Rev_Roller"};
            case civilian: {"C_Rev_Roller"};
        };
    };
    default
    {
        switch (side _unit) do {
            case west: {"B_Rev_Pelter"};
            case opfor: {"O_Rev_Pelter"};
            case independent: {"I_Rev_Pelter"};
            case civilian: {"C_Rev_Pelter"};
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