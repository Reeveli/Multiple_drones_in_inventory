class Item_ToolKit;
class Item_Rev_Pelter: Item_ToolKit
{
	author = "Reeveli";
	displayName = "Deployable ED-1D Pelter";
	class TransportItems
	{
		class Rev_Pelter
		{
			name = "Rev_Pelter";
			count = 1;
		};
	};
	class UserActions
	{
		class Rev_assemble
		{
			userActionID = 52;
			displayName = "Assemble UGV";
			displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Assemble UGV</t>";
			condition = "alive this";
			statement = "[player,typeOf this,this] call Rev_ED_fnc_deploy";
			position = "";
			priority = 1;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 0;
		};
	};
};

class B_UGV_02_Demining_F;
class B_Rev_Pelter: B_UGV_02_Demining_F
{		
	author = "Reeveli";
	displayname = "Deployable ED-1D Pelter";
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
		class Light_On
		{
			displayNameDefault = "Lights on";
			displayName = "Lights on";
			position = "";
			radius = 0.7;
			onlyForPlayer = 1;
			showWindow = 0;
			condition = "alive this AND {cameraon isEqualTo this} && {!isLightOn cameraon}";
			statement = "this switchLight 'ON';";
		};
		class Light_Off: Light_On
		{
			displayNameDefault = "Lights off";
			displayName = "Lights off";
			condition = "alive this AND {cameraon isEqualTo this} && {isLightOn cameraon}";
			statement = "this switchLight 'OFF';";
		};
		class PressXToFlipTheThing
		{
			displayNameDefault = "Unflip UGV";
			displayName = "Unflip UGV";
			position = "";
			radius = 2.7;
			onlyForPlayer = 1;
			condition = "alive this AND {not canmove this} AND {(player distance this < 2)}";
			statement = "this setposASL ((getposASLVisual this) vectorAdd [0,0,0.5]);this setVectorDirAndUp [vectorDir this,[0,0,1]]";
		};
		class pick_up
		{
			userActionID = 52;
			displayName = "Dissassemble UGV";
			displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble UGV</t>";
			condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
			statement = "[this,'Item_Rev_Pelter'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};

};
class O_UGV_02_Demining_F;
class O_Rev_Pelter: O_UGV_02_Demining_F
{
	
	author = "Reeveli";
	displayname = "Deployable ED-1D Akinaka";
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
		class Light_On
		{
			displayNameDefault = "Lights on";
			displayName = "Lights on";
			position = "";
			radius = 0.7;
			onlyForPlayer = 1;
			showWindow = 0;
			condition = "alive this AND {cameraon isEqualTo this} && {!isLightOn cameraon}";
			statement = "this switchLight 'ON';";
		};
		class Light_Off: Light_On
		{
			displayNameDefault = "Lights off";
			displayName = "Lights off";
			condition = "alive this AND {cameraon isEqualTo this} && {isLightOn cameraon}";
			statement = "this switchLight 'OFF';";
		};
		class PressXToFlipTheThing
		{
			displayNameDefault = "Unflip UGV";
			displayName = "Unflip UGV";
			position = "";
			radius = 2.7;
			onlyForPlayer = 1;
			condition = "alive this AND {not canmove this} AND {(player distance this < 2)}";
			statement = "this setposASL ((getposASLVisual this) vectorAdd [0,0,0.5]);this setVectorDirAndUp [vectorDir this,[0,0,1]]";
		};
		class pick_up
		{
			userActionID = 52;
			displayName = "Dissassemble UGV";
			displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble UGV</t>";
			condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
			statement = "[this,'Item_Rev_Pelter'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};
};
class I_UGV_02_Demining_F;
class I_Rev_Pelter: I_UGV_02_Demining_F
{
	author = "Reeveli";
	displayname = "Deployable ED-1D Pelter";
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
		class Light_On
		{
			displayNameDefault = "Lights on";
			displayName = "Lights on";
			position = "";
			radius = 0.7;
			onlyForPlayer = 1;
			showWindow = 0;
			condition = "alive this AND {cameraon isEqualTo this} && {!isLightOn cameraon}";
			statement = "this switchLight 'ON';";
		};
		class Light_Off: Light_On
		{
			displayNameDefault = "Lights off";
			displayName = "Lights off";
			condition = "alive this AND {cameraon isEqualTo this} && {isLightOn cameraon}";
			statement = "this switchLight 'OFF';";
		};
		class PressXToFlipTheThing
		{
			displayNameDefault = "Unflip UGV";
			displayName = "Unflip UGV";
			position = "";
			radius = 2.7;
			onlyForPlayer = 1;
			condition = "alive this AND {not canmove this} AND {(player distance this < 2)}";
			statement = "this setposASL ((getposASLVisual this) vectorAdd [0,0,0.5]);this setVectorDirAndUp [vectorDir this,[0,0,1]]";
		};
		class pick_up
		{
			userActionID = 52;
			displayName = "Dissassemble UGV";
			displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble UGV</t>";
			condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
			statement = "[this,'Item_Rev_Pelter'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};
};
class C_IDAP_UGV_02_Demining_F;
class C_Rev_Pelter: C_IDAP_UGV_02_Demining_F
{
	author = "Reeveli";
	displayname = "Deployable Demining UGV";
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
		class Light_On
		{
			displayNameDefault = "Lights on";
			displayName = "Lights on";
			position = "";
			radius = 0.7;
			onlyForPlayer = 1;
			showWindow = 0;
			condition = "alive this AND {cameraon isEqualTo this} && {!isLightOn cameraon}";
			statement = "this switchLight 'ON';";
		};
		class Light_Off: Light_On
		{
			displayNameDefault = "Lights off";
			displayName = "Lights off";
			condition = "alive this AND {cameraon isEqualTo this} && {isLightOn cameraon}";
			statement = "this switchLight 'OFF';";
		};
		class PressXToFlipTheThing
		{
			displayNameDefault = "Unflip UGV";
			displayName = "Unflip UGV";
			position = "";
			radius = 2.7;
			onlyForPlayer = 1;
			condition = "alive this AND {not canmove this} AND {(player distance this < 2)}";
			statement = "this setposASL ((getposASLVisual this) vectorAdd [0,0,0.5]);this setVectorDirAndUp [vectorDir this,[0,0,1]]";
		};
		class pick_up
		{
			userActionID = 52;
			displayName = "Dissassemble UGV";
			displayNameDefault = "<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble UGV</t>";
			condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
			statement = "[this,'Item_Rev_Pelter'] call Rev_uav_fnc_pick_up";
			position = "";
			priority = 5;
			radius = 1.8;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 1;
		};
	};
};