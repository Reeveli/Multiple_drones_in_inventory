
class Item_Rev_UAV_IED: Item_ToolKit
{
	author = "Reeveli";
	displayName = "Deployable IED UAV";
	class TransportItems
	{
		class Rev_UAV_IED
		{
			name = "Rev_UAV_IED";
			count = 1;
		};
	};
	class UserActions
	{
		class Rev_assemble
		{
			userActionID = 52;
			displayName = "Assemble UAV";
			displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Assemble UAV</t>";
			condition = "alive this";
			statement = "[player,typeOf this,this] call Rev_bustard_fnc_deploy";
			position = "";
			priority = 1;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 0;
		};
	};
};

class I_Tura_UAV_02_IED_lxWS;
class B_Rev_UAV_IED: I_Tura_UAV_02_IED_lxWS
{
	author = "Reeveli";
	displayName = "Deployable IED UAV";
	faction = "BLU_F";
	side = 1;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {};
	};	
	class UserActions
	{
		class pick_up
		{
			userActionID = 52;
			displayName = "Dissassemble UAV";
			displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble UAV</t>";
			condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
			statement = "[this,'Item_Rev_UAV_IED'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};		
};


class O_G_UAV_02_IED_lxWS;
class O_Rev_UAV_IED: O_G_UAV_02_IED_lxWS
{
	author = "Reeveli";
	displayName = "Deployable IED UAV";
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {};
	};	
	class UserActions
	{
		class pick_up
		{
			userActionID = 52;
			displayName = "Dissassemble UAV";
			displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble UAV</t>";
			condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
			statement = "[this,'Item_Rev_UAV_IED'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};		
};

class I_Rev_UAV_IED: I_Tura_UAV_02_IED_lxWS
{
	author = "Reeveli";
	displayName = "Deployable IED UAV";
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {};
	};	
	class UserActions
	{
		class pick_up
		{
			userActionID = 52;
			displayName = "Dissassemble UAV";
			displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble UAV</t>";
			condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
			statement = "[this,'Item_Rev_UAV_IED'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};		
};

		
class C_Rev_UAV_IED: I_Tura_UAV_02_IED_lxWS
{
	author = "Reeveli";
	displayName = "Deployable IED UAV";
	faction = "CIV_F";
	side = 3;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {};
	};	
	class UserActions
	{
		class pick_up
		{
			userActionID = 52;
			displayName = "Dissassemble UAV";
			displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble UAV</t>";
			condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
			statement = "[this,'Item_Rev_UAV_IED'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};		
};