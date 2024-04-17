class C_IDAP_UAV_06_antimine_F;
class B_Rev_Demine: C_IDAP_UAV_06_antimine_F
{
	author = "Reeveli";
	displayName = "Deployable Demining Drone";
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
			statement = "[this, 'Item_Rev_Demine'] call Rev_uav_fnc_pick_up";
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
class Rev_demine_b: B_Rev_Demine
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};

class O_Rev_Demine: C_IDAP_UAV_06_antimine_F
{
	author = "Reeveli";
	displayName = "Deployable Demining Drone";
	faction = "OPF_F";
	side = 0;
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
			statement = "[this, 'Item_Rev_Demine'] call Rev_uav_fnc_pick_up";
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
class Rev_demine_o: O_Rev_Demine
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};

class I_Rev_Demine: C_IDAP_UAV_06_antimine_F
{
	author = "Reeveli";
	displayName = "Deployable Demining Drone";
	faction = "IND_F";
	side = 2;
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
			statement = "[this, 'Item_Rev_Demine'] call Rev_uav_fnc_pick_up";
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
class Rev_demine_i: I_Rev_Demine
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};

class C_Rev_Demine: C_IDAP_UAV_06_antimine_F
{
	author = "Reeveli";
	displayName = "Deployable Demining Drone";
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
			statement = "[this, 'Item_Rev_Demine'] call Rev_uav_fnc_pick_up";
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
class Rev_demine_c: C_Rev_Demine
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};


class Item_Rev_Demine: Item_Rev_Darter
{
	displayName = "Deployable Demining Drone";
	class TransportItems
	{
		class Rev_Demine
		{
			name = "Rev_Demine";
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
class Rev_demine_packed: Item_Rev_Demine
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};