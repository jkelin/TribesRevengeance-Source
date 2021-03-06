class KeyBindings extends Core.Object
	config(user);

//////////////////////////////////////////////////////////////////////////////////////
// Key Config Settings
//////////////////////////////////////////////////////////////////////////////////////
var() config Array<string> CommandCategory;
var() config Array<string> CommandString;
var() localized config Array<string> LocalizedCommandString;
var() localized config Array<string> LocalizedCommandCategories;
var() config Array<string> PrimaryBinds;
var() config Array<string> SecondaryBinds;

static function string GetKeyFromBinding(string CommandStringSearch, optional bool bLocalized)
{
	local int i;

	CommandStringSearch = Caps(CommandStringSearch);

	for (i = 0; i < default.CommandString.Length; i++)
	{
		if (InStr(Caps(default.CommandString[i]), CommandStringSearch) != -1)
		{
			if (i < default.PrimaryBinds.Length)
				return default.PrimaryBinds[i];
			else
				return "";
		}
	}
}

defaultproperties
{
     CommandCategory(0)="Basic"
     CommandCategory(1)="Basic"
     CommandCategory(2)="Basic"
     CommandCategory(3)="Basic"
     CommandCategory(4)="Basic"
     CommandCategory(5)="Basic"
     CommandCategory(6)="Basic"
     CommandCategory(7)="Basic"
     CommandCategory(8)="Basic"
     CommandCategory(9)="Basic"
     CommandCategory(10)="Basic"
     CommandCategory(11)="Basic"
     CommandCategory(12)="Basic"
     CommandCategory(13)="Basic"
     CommandCategory(14)="Basic"
     CommandCategory(15)="Basic"
     CommandCategory(16)="Basic"
     CommandCategory(17)="Basic"
     CommandCategory(18)="Basic"
     CommandCategory(19)="Basic"
     CommandCategory(20)="Basic"
     CommandCategory(21)="Basic"
     CommandCategory(22)="Basic"
     CommandCategory(23)="Basic"
     CommandCategory(24)="Basic"
     CommandCategory(25)="Basic"
     CommandCategory(26)="Basic"
     CommandCategory(27)="Basic"
     CommandCategory(28)="Basic"
     CommandCategory(29)="Basic"
     CommandCategory(30)="Basic"
     CommandCategory(31)="Basic"
     CommandCategory(32)="Basic"
     CommandCategory(33)="Basic"
     CommandCategory(34)="Basic"
     CommandCategory(35)="Basic"
     CommandCategory(36)="Basic"
     CommandCategory(37)="Basic"
     CommandCategory(38)="Basic"
     CommandCategory(39)="Basic"
     CommandCategory(40)="Basic"
     CommandString(0)="MoveForward"
     CommandString(1)="MoveBackward"
     CommandString(2)="StrafeLeft"
     CommandString(3)="StrafeRight"
     CommandString(4)="Use | equipDeployable | equipCarryable"
     CommandString(5)="Fire"
     CommandString(6)="activatePack"
     CommandString(7)="Jetpack | Jump"
     CommandString(8)="Ski"
     CommandString(9)="Button bZoom"
     CommandString(10)="cycleZoomLevel"
     CommandString(11)="Button bObjectives"
     CommandString(12)="SwitchToFallbackWeapon"
     CommandString(13)="SwitchWeapon 1 | SwitchVehiclePosition 1"
     CommandString(14)="SwitchWeapon 2 | SwitchVehiclePosition 2"
     CommandString(15)="SwitchWeapon 3 | SwitchVehiclePosition 3"
     CommandString(16)="equipDeployable"
     CommandString(17)="equipCarryable"
     CommandString(18)="NextWeapon"
     CommandString(19)="PrevWeapon"
     CommandString(20)="altFire | onRelease releaseAltFire"
     CommandString(21)="TribesTalk"
     CommandString(22)="TribesTeamTalk"
     CommandString(23)="Button bQuickChat | Button bLoadoutSelection"
     CommandString(24)="Jetpack"
     CommandString(25)="Jump"
     CommandString(26)="Ski | Jump"
     CommandString(27)="Button bDropWeapon"
     CommandString(28)="togglebehindview"
     CommandString(29)="Respawn true"
     CommandString(30)="cycleRadarZoomScale"
     CommandString(31)="ShowGameStats"
     CommandString(32)="ShowMyStats"
     CommandString(33)="ShowAdmin"
     CommandString(34)="QuickInv"
     CommandString(35)="RequestLoadout 0"
     CommandString(36)="RequestLoadout 1"
     CommandString(37)="RequestLoadout 2"
     CommandString(38)="RequestLoadout 3"
     CommandString(39)="RequestLoadout 4"
     CommandString(40)="RequestLoadout 5"
     LocalizedCommandString(0)="Move Forward"
     LocalizedCommandString(1)="Move Backward"
     LocalizedCommandString(2)="Strafe Left"
     LocalizedCommandString(3)="Strafe Right"
     LocalizedCommandString(4)="Use"
     LocalizedCommandString(5)="Fire"
     LocalizedCommandString(6)="Activate Pack"
     LocalizedCommandString(7)="Jetpack/Jump"
     LocalizedCommandString(8)="Ski"
     LocalizedCommandString(9)="Zoom"
     LocalizedCommandString(10)="Cycle Zoom Level"
     LocalizedCommandString(11)="Command Map"
     LocalizedCommandString(12)="Switch to Fallback Weapon"
     LocalizedCommandString(13)="Switch To Weapon 1"
     LocalizedCommandString(14)="Switch To Weapon 2"
     LocalizedCommandString(15)="Switch To Weapon 3"
     LocalizedCommandString(16)="Equip Deployable"
     LocalizedCommandString(17)="Equip Carryable"
     LocalizedCommandString(18)="Next Weapon"
     LocalizedCommandString(19)="Prev Weapon"
     LocalizedCommandString(20)="Throw Grenade"
     LocalizedCommandString(21)="Talk"
     LocalizedCommandString(22)="Team Talk"
     LocalizedCommandString(23)="Quick Chat / Loadout Selection"
     LocalizedCommandString(24)="Jetpack"
     LocalizedCommandString(25)="Jump"
     LocalizedCommandString(26)="Ski/Jump"
     LocalizedCommandString(27)="Drop Weapon"
     LocalizedCommandString(28)="Toggle Behind View"
     LocalizedCommandString(29)="Respawn"
     LocalizedCommandString(30)="Cycle Radar Zoom Level"
     LocalizedCommandString(31)="My Stats"
     LocalizedCommandString(32)="Game Stats"
     LocalizedCommandString(33)="Weapon Stats"
     LocalizedCommandString(34)="Access QuickInv"
     LocalizedCommandString(35)="QuickInv Loadout 1"
     LocalizedCommandString(36)="QuickInv Loadout 2"
     LocalizedCommandString(37)="QuickInv Loadout 3"
     LocalizedCommandString(38)="QuickInv Loadout 4"
     LocalizedCommandString(39)="QuickInv Loadout 5"
     LocalizedCommandString(40)="QuickInv Loadout 6"
     LocalizedCommandCategories(0)="Basic"
     LocalizedCommandCategories(1)="Advanced"
     PrimaryBinds(0)="Up"
     PrimaryBinds(1)="Down"
     PrimaryBinds(2)="Left"
     PrimaryBinds(3)="Right"
     PrimaryBinds(4)="NumPad0"
     PrimaryBinds(5)="LeftMouse"
     PrimaryBinds(6)="NumPad1"
     PrimaryBinds(7)="RightMouse"
     PrimaryBinds(8)="Ctrl"
     PrimaryBinds(11)="NumPad7"
     PrimaryBinds(18)="MouseWheelDown"
     PrimaryBinds(19)="MouseWheelUp"
     PrimaryBinds(20)="MiddleMouse"
     PrimaryBinds(21)="Y"
     PrimaryBinds(22)="T"
     PrimaryBinds(23)="End"
     PrimaryBinds(27)="Period"
     PrimaryBinds(28)="Shift"
     PrimaryBinds(29)="NumPad8"
     PrimaryBinds(30)="NumPad5"
     PrimaryBinds(31)="F1"
     PrimaryBinds(32)="F2"
     PrimaryBinds(33)="F3"
     PrimaryBinds(34)="Backslash"
}
