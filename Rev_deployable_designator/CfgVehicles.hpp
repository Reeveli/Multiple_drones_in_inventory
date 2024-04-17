class CfgVehicles
{

	class Item_ToolKit;
	class Item_Rev_Designator: Item_ToolKit
	{
		author = "Reeveli";
		displayName = "Deployable remote designator";
		class TransportItems
		{
			class Rev_Designator
			{
				name = "Rev_Designator";
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
				statement = "[player,typeOf this,this] call Rev_designator_fnc_deploy";
				position = "";
				priority = 1;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 0;
			};
		};
	};

	class B_Static_Designator_01_F;
	class B_Rev_Designator: B_Static_Designator_01_F
	{
		
		author = "Reeveli";
		displayname = "Deployable Designator [NATO]";
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
				displayName = "Dissassemble Designator";
				displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble Designator</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this,'Item_Rev_Designator'] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};

	};
	class O_Static_Designator_02_F;
	class O_Rev_Designator: O_Static_Designator_02_F
	{
		
		author = "Reeveli";
		displayname = "Deployable Designator [CSAT]";
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
				displayName = "Dissassemble Designator";
				displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble Designator</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this,'Item_Rev_Designator'] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};
	};
	class B_W_Static_Designator_01_F;
	class I_Rev_Designator: B_W_Static_Designator_01_F
	{
		author = "Reeveli";
		crew = "I_UAV_AI_F";
		displayname = "Deployable Designator [AAF]";
		editorSubcategory = "EdSubcat_Turrets";
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
				displayName = "Dissassemble Designator";
				displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble Designator</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this,'Item_Rev_Designator'] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};
	};
	class C_Rev_Designator: B_Static_Designator_01_F
	{
		author = "Reeveli";
		crew = "C_UAV_AI_F";
		displayname = "Deployable Designator [IDAP]";
		editorSubcategory = "EdSubcat_Turrets";
		faction = "CIV_IDAP_F";
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
				displayName = "Dissassemble Designator";
				displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble Designator</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this,'Item_Rev_Designator'] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};
	};
};