/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod (AP5 & IED component).
 * Client side preinit function to add CBA context menu and ACE actions to AP-5 and IED drones.
 *
 * Arguments: NONE
 *
 * Return Value: <NONE>
 *
 1.1
    Workarounds for unknown bug caused by latest CBA release
        All '_unit' parameters replaced with player
        All context actions are now non-consumbale
 */

if !(hasInterface) exitWith {};

["Rev_Bustard", ["CONTAINER","CLOTHES"], ["Assemble UAV"], [], "", [{true},{player call CBA_fnc_canUseWeapon}], {  
    params ["_unit", "_container", "_item", "_slot", "_params"]; 
    [player,_item] call Rev_bustard_fnc_deploy;
},false] call CBA_fnc_addItemContextMenuOption;

["Rev_UAV_IED", ["CONTAINER","CLOTHES"], ["Assemble UAV"], [], "", [{true},{player call CBA_fnc_canUseWeapon}], {  
    params ["_unit", "_container", "_item", "_slot", "_params"]; 
    [player,_item] call Rev_bustard_fnc_deploy;
},false] call CBA_fnc_addItemContextMenuOption;


//Ace actions
if !(isClass (configFile >> "CfgPatches" >> "ace_interaction")) exitWith {};

private _dissassemble =
[
    "Rev_dissassemble",
    "Dissassemble UAV",
    "a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa",
    {[_target,'Item_Rev_Bustard'] call Rev_uav_fnc_pick_up},
    {alive _target && vehicle _player == _player && ((UAVControl _target) select 1 isEqualto '')}
] call ace_interact_menu_fnc_createAction;

["B_Rev_Bustard", 0, ["ACE_MainActions"], _dissassemble,true] call ace_interact_menu_fnc_addActionToClass;
["O_Rev_Bustard", 0, ["ACE_MainActions"], _dissassemble,true] call ace_interact_menu_fnc_addActionToClass;
["I_Rev_Bustard", 0, ["ACE_MainActions"], _dissassemble,true] call ace_interact_menu_fnc_addActionToClass;
["C_Rev_Bustard", 0, ["ACE_MainActions"], _dissassemble,true] call ace_interact_menu_fnc_addActionToClass;


private _dissassemble2 =
[
    "Rev_dissassemble",
    "Dissassemble UAV",
    "a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa",
    {[_target,'Item_Rev_UAV_IED'] call Rev_uav_fnc_pick_up},
    {alive _target && vehicle _player == _player && ((UAVControl _target) select 1 isEqualto '')}
] call ace_interact_menu_fnc_createAction;

["B_Rev_UAV_IED", 0, ["ACE_MainActions"], _dissassemble2,true] call ace_interact_menu_fnc_addActionToClass;
["O_Rev_UAV_IED", 0, ["ACE_MainActions"], _dissassemble2,true] call ace_interact_menu_fnc_addActionToClass;
["I_Rev_UAV_IED", 0, ["ACE_MainActions"], _dissassemble2,true] call ace_interact_menu_fnc_addActionToClass;
["C_Rev_UAV_IED", 0, ["ACE_MainActions"], _dissassemble2,true] call ace_interact_menu_fnc_addActionToClass;

private _asassemble =
[
    "Rev_assemble",
    "Assemble UAV",
    "a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa",
    {[_player,typeOf _target,_target] call Rev_bustard_fnc_deploy},
    {true}
] call ace_interact_menu_fnc_createAction;

["Item_Rev_Bustard", 0, ["ACE_MainActions"], _asassemble,true] call ace_interact_menu_fnc_addActionToClass;
["Item_Rev_UAV_IED", 0, ["ACE_MainActions"], _asassemble,true] call ace_interact_menu_fnc_addActionToClass;