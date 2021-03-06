class x2 extends Gameplay.Mutator config(x2);

//Thank you rapher, waterbottle, Stryker, schlieperich, turkey and StanRex.

const VERSION_NAME = "x2_v3RC1";

var config bool EnableVehicles; // Enabling of all vehicles
var config bool EnablePod; // Enable the Pod
var config bool EnableRover; // Enable the Rover
var config bool EnableAssaultShip; // Enable the Assault Ship
var config bool EnableTank; // Enable the Tank
var config bool EnableDegrapple; // Enabling of degrapple.
var config int GrapplerAmmo; // Grappler ammo count
var config float GrapplerReelRate; // Grappler reel in rate
var config float GrapplerRPS; // Grappler rounds per second
var config int HOHealth; // HO Health
var config int HOknockbackscale; // HO knockback scale
var config float ShieldActive; // Active shield pack damage reduction
var config float ShieldPassive; // Passive shield pack damage reduction
var config float BurnerIBPV; // Inherited Burner projectile velocity
var config int BurnerEnergyUsage; // Energy usage of the burner
var config float SpinfusorPIVF; // Spinfusor disk inherited velocity
var config float SpinfusorVelocity; //Spinfusor projectile velocity
var config bool DisableDeployableTurrets; // Disable deployable turrets
var config bool DisableMines; // Disable deployable mines
var Array<class<BaseDevice> > BaseDeviceInclusionList; // Base Devices to include
var bool MTOn; //Mines, Turrets
var config int TeamPlayerMin;  // Team Player Minimum per team required before mines and turrets are enabled.
var config int TimerInterval;  // Time in seconds to check player amount

var FileLog X2Log; // for logging

function string GetGameClass()
{
	local ModeInfo M;
	local int i, statCount;

	M = ModeInfo(Level.Game);

   //foreach AllActors(class'GameReplicationInfo', info)
   //{
    x2Log.Logf(string(M));

    return string(M);
   //}

   //return "";
}

function PreBeginPlay()
{
	Super.PreBeginPlay();

	X2Log = spawn(class 'FileLog');
	assert(X2Log != None);
	X2Log.OpenLog ("x2log");
	X2Log.Logf(self$": PreBeginPlay");

        ModifyFlagStands();
	ModifyVehiclePads();
	ModifyCharacters();
	ModifyVehicles();
	ModifyStats();
	//ModifyDepTurrets();
	//ModifyDepMines();

	X2Log.Logf("========== END OF LOG ==========");
	X2Log.CloseLog();
}

function ModifyFlagStands()
{
	local Gameplay.MPCapturePoint flagStand;
	foreach AllActors(class'Gameplay.MPCapturePoint', flagStand)
		if (flagStand != None)
		{ 
			flagStand.capturableClass = class'x2MPFlag';
		}
}

/* function ModifyDepTurrets()
{
         local BaseObjectClasses.BaseDeployableSpawnTurret depspawnturret;
         foreach AllActors(class'BaseObjectClasses.BaseDeployableSpawnTurret', depspawnturret)
            if(DisableDeployableTurrets == True)
             {
             depspawnturret.Destroy();
             }
}

function ModifyDepMines()
{
         local BaseObjectClasses.BaseDeployableSpawnShockMine depspawnmine;
         foreach AllActors(class'BaseObjectClasses.BaseDeployableSpawnShockMine', depspawnmine)
            if(DisableMines == True)
             {
             depspawnmine.Destroy();
             }
} */

function ModifyCharacters()
{
         local Gameplay.GameInfo C;
         foreach AllActors(class'Gameplay.GameInfo', C)
            if (C != None)
               {
			C.Default.DefaultPlayerClassName = VERSION_NAME $ ".x2MultiplayerCharacter";
			C.DefaultPlayerClassName = VERSION_NAME $ ".x2MultiplayerCharacter";
			log("Character controller loaded successfully.", 'x2');
               }
}

function ModifyVehiclePads()
{
    local Gameplay.VehicleSpawnPoint vehiclePad;
    local Gameplay.Vehicle vehicle;
    local bool enabled;

    enabled = EnableVehicles;

    if(Instr(GetGameClass(), "Race") >= 0)
    {
       enabled = true;
    }

    ForEach AllActors(Class'Gameplay.VehicleSpawnPoint', vehiclePad)
        if(vehiclePad != None)
			vehiclePad.setSwitchedOn(enabled);

	ForEach AllActors(Class'Gameplay.Vehicle', vehicle)
		if(vehicle != None && !enabled)
			vehicle.Destroy();
}

function ModifyVehicles()
{
     local Gameplay.VehicleSpawnPoint vehiclePad;

           foreach AllActors(class'Gameplay.VehicleSpawnPoint', vehiclePad)
           {
	    if (EnablePod == True)
	      {
                if (vehiclePad != None && vehiclePad.vehicleClass == class'VehicleClasses.VehiclePod')
			{
			vehiclePad.vehicleClass = class'x2_v3RC1.x2Pod';
			}
              }

            else if(EnablePod == False)
              {
                if (vehiclePad != None && vehiclePad.vehicleClass == class'VehicleClasses.VehiclePod')
			    {
                            vehiclePad.setSwitchedOn(false);
                            }
              }

            if (EnableRover == True)
	      {

                if (vehiclePad != None && vehiclePad.vehicleClass == class'VehicleClasses.VehicleBuggy')
			{
			vehiclePad.setSwitchedOn(true);
			}
              }

             else if(EnableRover == False)
              {
                if (vehiclePad != None && vehiclePad.vehicleClass == class'VehicleClasses.VehicleBuggy')
			    {
			    vehiclePad.setSwitchedOn(false);
			    }
              }

	     if (EnableAssaultShip == True)
	      {

                if (vehiclePad != None && vehiclePad.vehicleClass == class'VehicleClasses.VehicleAssaultShip')
			{
			vehiclePad.setSwitchedOn(true);
			}
              }

             else if(EnableAssaultShip == False)
              {
                if (vehiclePad != None && vehiclePad.vehicleClass == class'VehicleClasses.VehicleAssaultShip')
			    {
			    vehiclePad.setSwitchedOn(false);
			    }
              }

	     if (EnableTank == True)
	      {

                if (vehiclePad != None && vehiclePad.vehicleClass == class'VehicleClasses.VehicleTank')
			{
			vehiclePad.vehicleClass = class'x2_v3RC1.x2Tank';
			}
              }

             else if(EnableTank == False)
              {
                if (vehiclePad != None && vehiclePad.vehicleClass == class'VehicleClasses.VehicleTank')
			    {
			    vehiclePad.setSwitchedOn(false);
			    }
              }
             }
}

function ModifyStats()
{
	local ModeInfo M;
	local int i, statCount;

	M = ModeInfo(Level.Game);

	X2Log.Logf("Modifying stats");
	X2Log.Logf("Mode is "$M);

	if(M != None)
	{

                // search for the spinfusor stat and set it's extended stat
		for(i = 0; i < M.extendedProjectileDamageStats.Length; ++i)
		{
			// find by damageType
			if(M.extendedProjectileDamageStats[i].damageTypeClass == Class'EquipmentClasses.ProjectileDamageTypeSpinfusor')
			{
				M.extendedProjectileDamageStats[i].extendedStatClass = Class'statMA';
				log("MA stat modified");
			}
		}


                // ### DAMAGE STATS ###

		statCount = M.projectileDamageStats.Length;
		X2Log.Logf(statCount$" projectileDamageStats already there");

		M.projectileDamageStats.Insert(statCount, 3);

		// Lobotomy
		M.projectileDamageStats[statCount].damageTypeClass = Class'x2BladeProjectileDamageType';
		M.projectileDamageStats[statCount].headShotStatClass = Class'statLobotomy';
                M.projectileDamageStats[statCount].backstabStatClass = Class'statBackstabber';
		M.projectileDamageStats[statCount].playerDamageStatClass = Class'Gameplay.Stat';
		++statCount;
		
		// statBucklerBackBreaker
                M.projectileDamageStats[statCount].damageTypeClass = Class'EquipmentClasses.ProjectileDamageTypeBuckler';
		M.projectileDamageStats[statCount].backstabStatClass = Class'statBucklerBackBreaker';
		M.projectileDamageStats[statCount].playerDamageStatClass = Class'Gameplay.Stat';
		++statCount;


		// ### EXTENDED DAMAGE STATS ###

		statCount = M.extendedProjectileDamageStats.Length;
		X2Log.Logf(statCount$" extendedProjectileDamageStats already there");

		M.extendedProjectileDamageStats.Insert(statCount, 11); // we have 11 new stats

		// statMAPlus
		M.extendedProjectileDamageStats[statCount].damageTypeClass = Class'EquipmentClasses.ProjectileDamageTypeSpinfusor';
		M.extendedProjectileDamageStats[statCount].extendedStatClass = Class'statMAPlus';
		++statCount;

		// statMASupreme
		M.extendedProjectileDamageStats[statCount].damageTypeClass = Class'EquipmentClasses.ProjectileDamageTypeSpinfusor';
		M.extendedProjectileDamageStats[statCount].extendedStatClass = Class'statMASupreme';
		++statCount;
		
		// statEatDisc
		M.extendedProjectileDamageStats[statCount].damageTypeClass = Class'EquipmentClasses.ProjectileDamageTypeSpinfusor';
		M.extendedProjectileDamageStats[statCount].extendedStatClass = Class'statEatDisc';
		++statCount;
		
		// GLMA
		M.extendedProjectileDamageStats[statCount].damageTypeClass = Class'EquipmentClasses.ProjectileDamageTypeGrenadeLauncher';
		M.extendedProjectileDamageStats[statCount].extendedStatClass = Class'statGLMA';
		++statCount;

		// MMA
		M.extendedProjectileDamageStats[statCount].damageTypeClass = Class'EquipmentClasses.ProjectileDamageTypeMortar';
		M.extendedProjectileDamageStats[statCount].extendedStatClass = Class'statMMA';
		++statCount;

		//statRocketeer
                M.extendedProjectileDamageStats[statCount].damageTypeClass = Class'EquipmentClasses.ProjectileDamageTypeRocketPod';
		M.extendedProjectileDamageStats[statCount].extendedStatClass = Class'statRocketeer';
		++statCount;

		//statSweetShot
                M.extendedProjectileDamageStats[statCount].damageTypeClass = Class'EquipmentClasses.ProjectileDamageTypeSpinfusor';
		M.extendedProjectileDamageStats[statCount].extendedStatClass = Class'statSweetShot';
		++statCount;
		
		//statSweetShot
                M.extendedProjectileDamageStats[statCount].damageTypeClass = Class'EquipmentClasses.ProjectileDamageTypeGrenadeLauncher';
		M.extendedProjectileDamageStats[statCount].extendedStatClass = Class'statSweetShot';
		++statCount;
		
		//statSweetShot
                M.extendedProjectileDamageStats[statCount].damageTypeClass = Class'EquipmentClasses.ProjectileDamageTypeMortar';
		M.extendedProjectileDamageStats[statCount].extendedStatClass = Class'statSweetShot';
		++statCount;

                // statOMG
		M.extendedProjectileDamageStats[statCount].damageTypeClass = Class'EquipmentClasses.ProjectileDamageTypeSpinfusor';
		M.extendedProjectileDamageStats[statCount].extendedStatClass = Class'statOMG';
		++statCount;
		
		X2Log.Logf("now there are "$M.projectileDamageStats.Length$" projectileDamageStats and "$M.extendedProjectileDamageStats.Length$" extendedProjectileDamageStats");
	}
}

function PostBeginPlay()
{
	Super.PostBeginPlay();
    
    if(!MultiplayerGameInfo(Level.Game).bTournamentMode)
    {
		UpdateDevices();
		SetTimer(TimerInterval, true);
	}
}

function Timer()
{
	if(MTOn && !EnableMT())
	{
		MTOn = false;
		UpdateDevices();
		Level.Game.BroadcastLocalized(self, class'x2GameMessage', 100);
	}

	else if(!MTOn && EnableMT())
	{
		MTOn = true;
		UpdateDevices();
		Level.Game.BroadcastLocalized(self, class'x2GameMessage', 101);
	}
}

function bool EnableMT()
{
	local TeamInfo team;
	
	ForEach AllActors(Class'TeamInfo', team)
		if(team != None)
			if(team.numPlayers() < TeamPlayerMin)
				return false;
	
	return true;
}

function UpdateDevices()
{
	local BaseDevice device;

	ForEach AllActors(Class'BaseDevice', device)
		if(device != None)
			if(ShouldModifyDevice(device))
				device.setSwitchedOn(MTOn);
}

function bool ShouldModifyDevice(BaseDevice device)
{
	local int i;

	for(i = 0; i < BaseDeviceInclusionList.Length; i++)
		if(device.IsA(BaseDeviceInclusionList[i].Name))
			return true;

	return false;
}

function Actor ReplaceActor(Actor Other)
{

        if(Other.IsA('WeaponChaingun'))
	{
		WeaponChaingun(Other).projectileClass = Class'x2ProjectileChaingun';
		return Super.ReplaceActor(Other);
	}
	if(Other.IsA('WeaponRocketPod'))
	{
		WeaponRocketPod(Other).projectileClass = Class'x2ProjectileRocketPod';
		return Super.ReplaceActor(Other);
	}
	if(Other.IsA('WeaponBlaster'))
	{
		WeaponBlaster(Other).projectileClass = Class'x2ProjectileBlaster';
		return Super.ReplaceActor(Other);
	}
	if(Other.IsA('WeaponBuckler'))
	{
		WeaponBuckler(Other).projectileClass = Class'x2ProjectileBuckler';
		return Super.ReplaceActor(Other);
	}
	if(Other.IsA('WeaponSniperRifle'))
	{
		WeaponSniperRifle(Other).projectileClass = Class'x2ProjectileSniperRifle';
		return Super.ReplaceActor(Other);
	}
        if(Other.IsA('ProjectileMortar'))
	{
		WeaponMortar(Other).projectileClass = Class'x2ProjectileMortar';
                return Super.ReplaceActor(Other);
	}
	if(Other.IsA('WeaponGrenadeLauncher'))
	{
		WeaponGrenadeLauncher(Other).projectileClass = Class'x2ProjectileGrenadeLauncher';
		return Super.ReplaceActor(Other);
	}
	if(Other.IsA('WeaponTurretBurner'))
	{
                WeaponTurretBurner(Other).ProjectileClass = class'x2TurretBurnerProjectile';
		return Super.ReplaceActor(Other);
	}
        if(Other.IsA('WeaponSpinfusor'))
	{
		WeaponSpinfusor(Other).projectileClass = Class'x2ProjectileSpinfusor';
		WeaponSpinfusor(Other).ProjectileInheritedVelFactor = SpinfusorPIVF; //was .4
		WeaponSpinfusor(Other).ProjectileVelocity = SpinfusorVelocity; //was 4700
		return Super.ReplaceActor(Other);
	}
	if(Other.IsA('WeaponEnergyBlade'))
	{
		Other.Destroy();
		return ReplaceWith(Other, VERSION_NAME $ ".x2WeaponEnergyBlade");
	}
        if(Other.IsA('WeaponBurner'))
	{
               	WeaponBurner(Other).ProjectileClass = class'x2ProjectileBurner';
		WeaponBurner(Other).energyUsage = BurnerEnergyUsage; //was 15
		WeaponBurner(Other).ProjectileInheritedVelFactor = BurnerIBPV; //was 0.0
		return Super.ReplaceActor(Other);
	}

        //Copied from Vanilla.  Thank you Rapher
	if(Other.IsA('Grappler'))
	{
		if(EnableDegrapple)
			Gameplay.Grappler(Other).projectileClass = Class'x2DegrappleProjectile';
		else
			Gameplay.Grappler(Other).projectileClass = Class'Gameplay.GrapplerProjectile';

		Gameplay.Grappler(Other).reelInDelay = GrapplerReelRate;	
		Gameplay.Grappler(Other).roundsPerSecond = GrapplerRPS;
		return Super.ReplaceActor(Other);
	}
	if(Other.IsA('PackShield'))
	{
		Gameplay.ShieldPack(Other).activeFractionDamageBlocked = ShieldActive;   //was .75
		Gameplay.ShieldPack(Other).passiveFractionDamageBlocked = ShieldPassive; //was .2
		return Super.ReplaceActor(Other);
	}
	if(Other.IsA('CloakPack')) //fixes enabling cloak pack hack
	{
		Other.Destroy();
		return ReplaceWith(Other, VERSION_NAME $ ".x2anticloak");
	}

	return Super.ReplaceActor(Other);
}


function string MutateSpawnCombatRoleClass(Character c)
{
	local int i, j;

	//Heavies. Knockback of weapon explosions decreased to balance health increase with disc jumping.  Copied from Vanilla Plus. Thank you Odio
	c.team().combatRoleData[2].role.default.armorClass.default.knockbackScale = HOknockbackscale; //was 1.175
	c.team().combatRoleData[2].role.default.armorClass.default.health = HOHealth; //was 195

	for(i = 0; i < c.team().combatRoleData.length; i++)
		for(j = 0; j < c.team().combatRoleData[i].role.default.armorClass.default.AllowedWeapons.length; j++){
			if(c.team().combatRoleData[i].role.default.armorClass.default.AllowedWeapons[j].typeClass == Class'EquipmentClasses.WeaponGrappler')
				c.team().combatRoleData[i].role.default.armorClass.default.AllowedWeapons[j].quantity = GrapplerAmmo;
				}
	return Super.MutateSpawnCombatRoleClass(c);
}

defaultproperties
{
     EnableRover=True
     EnableDegrapple=True
     GrapplerAmmo=10
     GrapplerReelRate=0.500000
     GrapplerRPS=1.000000
     HOHealth=225
     HOknockbackscale=1
     shieldActive=0.600000
     ShieldPassive=0.125000
     BurnerIBPV=0.300000
     BurnerEnergyUsage=12
     SpinfusorPIVF=0.400000
     SpinfusorVelocity=4700.000000
     BaseDeviceInclusionList(0)=Class'BaseObjectClasses.BaseDeployableSpawnTurret'
     BaseDeviceInclusionList(1)=Class'BaseObjectClasses.BaseDeployableSpawnShockMine'
     MTOn=False
     TeamPlayerMin=5
     TimerInterval=30
}
