class B_UAV_06_F;
class B_Rev_Pelican: B_UAV_06_F
{
	author = "Reeveli";
	displayName = "Deployable AL-6 Pelican";
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
			statement = "[this, 'Item_Rev_Pelican'] call Rev_uav_fnc_pick_up";
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
class Rev_pelican_b: B_Rev_Pelican
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};

class O_UAV_06_F;
class O_Rev_Pelican: O_UAV_06_F
{
	author = "Reeveli";
	displayName = "Deployable AL-6 Jinaah";
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
			statement = "[this, 'Item_Rev_Pelican'] call Rev_uav_fnc_pick_up";
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
class Rev_pelican_o: O_Rev_Pelican
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};

class I_UAV_06_F;
class I_Rev_Pelican: I_UAV_06_F
{
	author = "Reeveli";
	displayName = "Deployable AL-6 Pelican";
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
			statement = "[this, 'Item_Rev_Pelican'] call Rev_uav_fnc_pick_up";
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
class Rev_pelican_i: I_Rev_Pelican
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};

class C_UAV_06_F;
class C_Rev_Pelican: C_UAV_06_F
{
	author = "Reeveli";
	displayName = "Deployable AL-6 Pelican";
	faction = "CIV_IDAP_F";
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
			statement = "[this, 'Item_Rev_Pelican'] call Rev_uav_fnc_pick_up";
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
class Rev_pelican_c: C_Rev_Pelican
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};


class Item_Rev_Pelican: Item_Rev_Darter
{
	displayName = "Deployable AL-6 Pelican";
	class TransportItems
	{
		class Rev_Pelican
		{
			name = "Rev_Pelican";
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
class Rev_pelican_packed: Item_Rev_Pelican
{		
	scope=1;
	scopeCurator=1;
	scopeArsenal=1;
	displayName="Deprecated legacy unit";
};