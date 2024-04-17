class B_UAV_01_F;
class B_Rev_Darter: B_UAV_01_F
{
	author = "Reeveli";
	displayName = "Deployable AR-2 Darter";
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
			statement = "[this,'Item_Rev_Darter'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};
};
//Legacy compability
class Rev_darter_b: B_Rev_Darter
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};

class O_UAV_01_F;
class O_Rev_Darter: O_UAV_01_F
{
	author = "Reeveli";
	displayName = "Deployable AR-2 Tayran";
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
			statement = "[this,'Item_Rev_Darter'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};		
};
//Legacy compability
class Rev_darter_o: O_Rev_Darter
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};

class I_UAV_01_F;
class I_Rev_Darter: I_UAV_01_F
{
	author = "Reeveli";
	displayName = "Deployable AR-2 Darter";
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
			statement = "[this,'Item_Rev_Darter'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};	
};
//Legacy compability
class Rev_darter_i: I_Rev_Darter
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};


class C_IDAP_UAV_01_F;
class C_Rev_Darter: C_IDAP_UAV_01_F
{
	author = "Reeveli";
	displayName = "Deployable AR-2 Darter";
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
			statement = "[this,'Item_Rev_Darter'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};		
};
//Legacy compability
class Rev_darter_c: C_Rev_Darter
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};

class Item_ToolKit;
class Item_Rev_Darter: Item_ToolKit
{
	author = "Reeveli";
	displayName = "Deployable AR-2 Darter";
	class TransportItems
	{
		class Rev_Darter
		{
			name = "Rev_Darter";
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
			statement = "[player,typeOf this,this] call Rev_uav_fnc_deploy_uav";
			position = "";
			priority = 1;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 0;
		};
	};
};
//Legacy compability
class Rev_darter_packed: Item_Rev_Darter
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};