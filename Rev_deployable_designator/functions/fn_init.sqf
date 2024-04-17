/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod (designator component).
 * Client side preinit function to add CBA contect menu actions to designator item.
 * Also created dissassembly Ace actions if mod is present.
 *
 * Arguments: NONE
 *
 * Return Value: <NONE>
 *
 1.1
    Updated outdated header info
    Added code for Ace interactions
 */

if !(hasInterface) exitWith {};

["Rev_Designator", ["CONTAINER","CLOTHES"], ["Assemble designator"], [], "", [{true},{params ["_unit", "_container", "_item", "_slot", "_params"];_unit == vehicle _unit}], {  
    params ["_unit", "_container", "_item", "_slot", "_params"]; 
    [_unit,_item] call Rev_designator_fnc_deploy;
},true] call CBA_fnc_addItemContextMenuOption;

//Ace actions
if !(isClass (configFile >> "CfgPatches" >> "ace_interaction")) exitWith {};

private _dissassemble =
[
    "Rev_dissassemble",
    "Dissassemble UAV",
    "a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa",
    {[_target,'Item_Rev_Designator'] call Rev_uav_fnc_pick_up},
    {alive _target && vehicle _player == _player && ((UAVControl _target) select 1 isEqualto '')}
] call ace_interact_menu_fnc_createAction;

["B_Rev_Designator", 0, ["ACE_MainActions"], _dissassemble,true] call ace_interact_menu_fnc_addActionToClass;
["O_Rev_Designator", 0, ["ACE_MainActions"], _dissassemble,true] call ace_interact_menu_fnc_addActionToClass;
["I_Rev_Designator", 0, ["ACE_MainActions"], _dissassemble,true] call ace_interact_menu_fnc_addActionToClass;
["C_Rev_Designator", 0, ["ACE_MainActions"], _dissassemble,true] call ace_interact_menu_fnc_addActionToClass;

private _asassemble =
[
    "Rev_assemble",
    "Assemble UAV",
    "a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa",
    {[_player,typeOf _target,_target] call Rev_designator_fnc_deploy},
    {true}
] call ace_interact_menu_fnc_createAction;

["Item_Rev_Designator", 0, ["ACE_MainActions"], _asassemble,true] call ace_interact_menu_fnc_addActionToClass;