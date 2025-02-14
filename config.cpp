////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.27
//Produced on Wed Nov 25 20:25:00 2015 : Created on Wed Nov 25 20:25:00 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class P:\m72_law_launcher\config.bin{
class CfgPatches
{
	class asor_m72_launcher
	{
		units[] = {};
		weapons[] = {"asor_Launcher_M72A6_Collapsed_F","asor_Launcher_M72A5_Collapsed_F","asor_Launcher_M72A7_Collapsed_F","asor_Launcher_M72A9_Collapsed_F","asor_Launcher_M72ASMRC_Collapsed_F","asor_Launcher_M72E8_Collapsed_F"};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_interaction","Extended_Eventhandlers"};
		magazines[] = {};
		ammo[] = {"ASOR_M72A5_HEAT_F","ASOR_M72A6_HEAT_F","ASOR_M72A7_HEAT_F","ASOR_M72A9_ASM_F","ASOR_M72ASMRC_ASM_F","ASOR_M72E8_HEAT_F"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class ItemCore;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class asor_M72_LauncherBase_F: Launcher_Base_F
	{
		scope = 1;
		picture = "\m72_law_launcher\data\m72a6_launcher_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\m72_law_launcher\Anims\m72_expanded.rtm"};
		reloadAction = "ReloadRPG";
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.177828,1,15};
		reloadMagazineSound[] = {"",0.354813,1,20};
		modelOptics = "-";
		maxZeroing = 300;
		weaponInfoType = "RscWeaponZeroing";
		distanceZoomMin = 100;
		distanceZoomMax = 300;
		discreteDistance[] = {50,100,150,200,250,300};
		discreteDistanceCameraPoint[] = {"eye_1","eye_2","eye_3","eye_4","eye_5","eye_6"};
		discreteDistanceInitIndex = 0;
		cameraDir = "look";
		optics = 1;
		opticsdisableperipherialvision = 0.67;
		opticsflare = 0;
		opticsid = 0;
		opticsppeffects[] = {};
		opticszoominit = 0.75;
		opticszoommin = 0.34;
		opticszoommax = 1.1;
		canLock = 0;
		weaponLockDelay = 3.0;
		lockAcquire = 0;
		inertia = 0.9;
		dexterity = 1.1;
		ace_overpressure_angle = 60;
		ace_overpressure_range = 7.5;
		ace_overpressure_damage = 0.7;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",2,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",2,1,250};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",2,1,250};
				begin4[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",2,1,250};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			recoil = "recoil_single_law";
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "backblast_end";
				directionName = "backblast_start";
				effectName = "RocketBackEffectsRPGNT";
			};
			class effect2
			{
				positionName = "frontblast_end";
				directionName = "frontblast_start";
				effectName = "asor_M72_CircleSmoke";
			};
		};
	};
	class asor_Launcher_M72A6_Collapsed_F: asor_M72_LauncherBase_F
	{
		scope = 2;
		displayName = "M72A6 LAW (HEAT)";
		author = "P1NGA";
		descriptionShort = "M72A6 - Light Anti Tank Launcher";
		model = "\m72_law_launcher\m72a6_launcher_collapsed.p3d";
		modelSpecial = "\m72_law_launcher\m72a6_launcher_collapsed.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\m72_law_launcher\Anims\m72_collapsed.rtm"};
		magazines[] = {"asor_M72_Magazine_Collapsed"};
		maxZeroing = 50;
		weaponInfoType = "RscWeaponEmpty";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		discreteDistance[] = {50};
		discreteDistanceCameraPoint[] = {"eye"};
		discreteDistanceInitIndex = 0;
		cameraDir = "look";
		ASOR_Launcher_Swap = 1;
		ASOR_Launcher_Alternate = "asor_Launcher_M72A6_F";
		ASOR_Launcher_Magazine = "asor_M72A6_MAGAZINE_F";
	};
	class asor_Launcher_M72A6_F: asor_M72_LauncherBase_F
	{
		scope = 1;
		displayName = "M72A6 LAW (HEAT)";
		author = "P1NGA";
		model = "\m72_law_launcher\m72a6_launcher_expanded.p3d";
		modelSpecial = "\m72_law_launcher\m72a6_launcher_expanded.p3d";
		magazines[] = {"asor_M72A6_MAGAZINE_F"};
		descriptionShort = "M72A6 - Light Anti Tank Launcher";
		handAnim[] = {"OFP2_ManSkeleton","\m72_law_launcher\Anims\m72_expanded.rtm"};
		ASOR_Launcher_Swap = 2;
		ASOR_Launcher_Alternate = "asor_Launcher_M72A6_Collapsed_F";
		ASOR_Launcher_Magazine = "";
		ASOR_Launcher_Fired = "asor_Launcher_M72A6_Used_F";
	};
	class asor_Launcher_M72A6_Used_F: asor_Launcher_M72A6_F
	{
		scope = 1;
		displayName = "USED M72A6 LAW";
		author = "P1NGA";
		model = "\m72_law_launcher\m72a6_launcher_empty.p3d";
		modelSpecial = "\m72_law_launcher\m72a6_launcher_empty.p3d";
		magazines[] = {"asor_M72_Magazine_Used"};
		descriptionShort = "M72A6 - Light Anti Tank Launcher";
		handAnim[] = {"OFP2_ManSkeleton","\m72_law_launcher\Anims\m72_expanded.rtm"};
		ASOR_Launcher_Swap = 0;
	};
	class asor_Launcher_M72A5_Collapsed_F: asor_Launcher_M72A6_Collapsed_F
	{
		author = "P1NGA";
		displayName = "M72A5 LAW (HEAT)";
		descriptionShort = "M72A5 - Medium Anti Tank Launcher";
		picture = "\m72_law_launcher\data\m72a5_launcher_ca.paa";
		hiddenSelections[] = {"'Camo1'"};
		hiddenSelectionsTextures[] = {"m72_law_launcher\data\launcher_m72a5_co.paa"};
		ASOR_Launcher_Swap = 1;
		ASOR_Launcher_Alternate = "asor_Launcher_M72A5_F";
		ASOR_Launcher_Magazine = "asor_M72A5_MAGAZINE_F";
	};
	class asor_Launcher_M72A5_F: asor_Launcher_M72A6_F
	{
		author = "P1NGA";
		displayName = "M72A5 LAW (HEAT)";
		descriptionShort = "M72A5 - Medium Anti Tank Launcher";
		picture = "\m72_law_launcher\data\m72a5_launcher_ca.paa";
		hiddenSelections[] = {"'Camo1'"};
		hiddenSelectionsTextures[] = {"m72_law_launcher\data\launcher_m72a5_co.paa"};
		magazines[] = {"asor_M72A5_MAGAZINE_F"};
		ASOR_Launcher_Swap = 2;
		ASOR_Launcher_Alternate = "asor_Launcher_M72A5_Collapsed_F";
		ASOR_Launcher_Magazine = "";
		ASOR_Launcher_Fired = "asor_Launcher_M72A5_Used_F";
	};
	class asor_Launcher_M72A5_Used_F: asor_Launcher_M72A6_Used_F
	{
		author = "P1NGA";
		displayName = "USED M72A5 LAW";
		descriptionShort = "M72A5 - Medium Anti Tank Launcher";
		picture = "\m72_law_launcher\data\m72a5_launcher_ca.paa";
		hiddenSelections[] = {"'Camo1'"};
		hiddenSelectionsTextures[] = {"m72_law_launcher\data\launcher_m72a5_co.paa"};
	};
	class asor_Launcher_M72A7_Collapsed_F: asor_Launcher_M72A6_Collapsed_F
	{
		author = "P1NGA";
		displayName = "M72A7 LAW (HEAT)";
		descriptionShort = "M72A7 - Medium Anti Tank Launcher";
		picture = "\m72_law_launcher\data\m72a7_launcher_ca.paa";
		model = "\m72_law_launcher\M72A7_launcher_collapsed.p3d";
		modelSpecial = "\m72_law_launcher\M72A7_launcher_collapsed.p3d";
		ASOR_Launcher_Swap = 1;
		ASOR_Launcher_Alternate = "asor_Launcher_M72A7_F";
		ASOR_Launcher_Magazine = "asor_M72A7_MAGAZINE_F";
	};
	class asor_Launcher_M72A7_F: asor_Launcher_M72A6_F
	{
		author = "P1NGA";
		displayName = "M72A7 LAW (HEAT)";
		descriptionShort = "M72A7 - Medium Anti Tank Launcher";
		picture = "\m72_law_launcher\data\m72a7_launcher_ca.paa";
		model = "\m72_law_launcher\M72A7_launcher_expanded.p3d";
		modelSpecial = "\m72_law_launcher\M72A7_launcher_expanded.p3d";
		magazines[] = {"asor_M72A7_MAGAZINE_F"};
		ASOR_Launcher_Swap = 2;
		ASOR_Launcher_Alternate = "asor_Launcher_M72A7_Collapsed_F";
		ASOR_Launcher_Magazine = "";
		ASOR_Launcher_Fired = "asor_Launcher_M72A7_Used_F";
	};
	class asor_Launcher_M72A7_Used_F: asor_Launcher_M72A6_Used_F
	{
		author = "P1NGA";
		displayName = "USED M72A7 LAW";
		descriptionShort = "M72A7 - Medium Anti Tank Launcher";
		picture = "\m72_law_launcher\data\m72a7_launcher_ca.paa";
		model = "\m72_law_launcher\M72A7_launcher_empty.p3d";
		modelSpecial = "\m72_law_launcher\M72A7_launcher_empty.p3d";
	};
	class asor_Launcher_M72A9_Collapsed_F: asor_Launcher_M72A6_Collapsed_F
	{
		author = "P1NGA";
		displayName = "M72A9 LAW (ASM)";
		descriptionShort = "M72A9 - Anti Structure Fragmenting Case";
		picture = "\m72_law_launcher\data\m72a9_launcher_ca.paa";
		model = "\m72_law_launcher\M72A9_launcher_collapsed.p3d";
		modelSpecial = "\m72_law_launcher\M72A9_launcher_collapsed.p3d";
		ASOR_Launcher_Swap = 1;
		ASOR_Launcher_Alternate = "asor_Launcher_M72A9_F";
		ASOR_Launcher_Magazine = "asor_M72A9_MAGAZINE_F";
	};
	class asor_Launcher_M72A9_F: asor_Launcher_M72A6_F
	{
		author = "P1NGA";
		displayName = "M72A9 LAW (ASM)";
		descriptionShort = "M72A9 - Anti Structure Fragmenting Case";
		picture = "\m72_law_launcher\data\m72a7_launcher_ca.paa";
		model = "\m72_law_launcher\M72A9_launcher_expanded.p3d";
		modelSpecial = "\m72_law_launcher\M72A9_launcher_expanded.p3d";
		magazines[] = {"asor_M72A9_MAGAZINE_F"};
		ASOR_Launcher_Swap = 2;
		ASOR_Launcher_Alternate = "asor_Launcher_M72A9_Collapsed_F";
		ASOR_Launcher_Magazine = "";
		ASOR_Launcher_Fired = "asor_Launcher_M72A9_Used_F";
	};
	class asor_Launcher_M72A9_Used_F: asor_Launcher_M72A6_Used_F
	{
		author = "P1NGA";
		displayName = "USED M72A9 LAW";
		descriptionShort = "M72A9 - Anti Structure Fragmenting Case";
		picture = "\m72_law_launcher\data\m72a7_launcher_ca.paa";
		model = "\m72_law_launcher\M72A9_launcher_empty.p3d";
		modelSpecial = "\m72_law_launcher\M72A9_launcher_empty.p3d";
	};
	class asor_Launcher_M72ASMRC_Collapsed_F: asor_Launcher_M72A6_Collapsed_F
	{
		author = "P1NGA";
		displayName = "M72ASMRC LAW (ASM)";
		descriptionShort = "M72ASMRC - Anti Structure Reduced Calibre";
		picture = "\m72_law_launcher\data\m72asmrc_launcher_ca.paa";
		model = "\m72_law_launcher\M72ASMRC_launcher_collapsed.p3d";
		modelSpecial = "\m72_law_launcher\M72ASMRC_launcher_collapsed.p3d";
		ASOR_Launcher_Swap = 1;
		ASOR_Launcher_Alternate = "asor_Launcher_M72ASMRC_F";
		ASOR_Launcher_Magazine = "asor_M72ASMRC_MAGAZINE_F";
	};
	class asor_Launcher_M72ASMRC_F: asor_Launcher_M72A6_F
	{
		author = "P1NGA";
		displayName = "M72ASMRC LAW (ASM)";
		descriptionShort = "M72ASMRC - Anti Structure Reduced Calibre";
		picture = "\m72_law_launcher\data\m72asmrc_launcher_ca.paa";
		model = "\m72_law_launcher\M72ASMRC_launcher_expanded.p3d";
		modelSpecial = "\m72_law_launcher\M72ASMRC_launcher_expanded.p3d";
		magazines[] = {"ASOR_M72ASMRC_MAGAZINE_F"};
		ASOR_Launcher_Swap = 2;
		ASOR_Launcher_Alternate = "asor_Launcher_M72ASMRC_Collapsed_F";
		ASOR_Launcher_Magazine = "";
		ASOR_Launcher_Fired = "asor_Launcher_M72ASMRC_Used_F";
	};
	class asor_Launcher_M72ASMRC_Used_F: asor_Launcher_M72A6_Used_F
	{
		author = "P1NGA";
		displayName = "USED M72ASMRC LAW";
		descriptionShort = "M72ASMRC - Anti Structure Reduced Calibre";
		picture = "\m72_law_launcher\data\m72asmrc_launcher_ca.paa";
		model = "\m72_law_launcher\M72ASMRC_launcher_empty.p3d";
		modelSpecial = "\m72_law_launcher\M72ASMRC_launcher_empty.p3d";
	};
	class asor_Launcher_M72E8_Collapsed_F: asor_Launcher_M72A6_Collapsed_F
	{
		author = "P1NGA";
		displayName = "M72E8 LAW  (HEAT CS)";
		descriptionShort = "M72E8 - Reduced Propellant, Confined Spaces";
		picture = "\m72_law_launcher\data\m72e8_launcher_ca.paa";
		model = "\m72_law_launcher\M72E8_launcher_collapsed.p3d";
		modelSpecial = "\m72_law_launcher\M72E8_launcher_collapsed.p3d";
		ASOR_Launcher_Swap = 1;
		ASOR_Launcher_Alternate = "asor_Launcher_M72E8_F";
		ASOR_Launcher_Magazine = "asor_M72E8_MAGAZINE_F";
	};
	class asor_Launcher_M72E8_F: asor_Launcher_M72A6_F
	{
		author = "P1NGA";
		displayName = "M72E8 LAW (HEAT CS)";
		descriptionShort = "M72E8 - Reduced Propellant, Confined Spaces";
		picture = "\m72_law_launcher\data\m72e8_launcher_ca.paa";
		model = "\m72_law_launcher\M72E8_launcher_expanded.p3d";
		modelSpecial = "\m72_law_launcher\M72E8_launcher_expanded.p3d";
		magazines[] = {"asor_M72E8_MAGAZINE_F"};
		ASOR_Launcher_Swap = 2;
		ASOR_Launcher_Alternate = "asor_Launcher_M72E8_Collapsed_F";
		ASOR_Launcher_Magazine = "";
		ASOR_Launcher_Fired = "asor_Launcher_M72E8_Used_F";
		ace_overpressure_angle = 15;
		ace_overpressure_range = 2;
		ace_overpressure_damage = 0.15;
	};
	class asor_Launcher_M72E8_Used_F: asor_Launcher_M72A6_Used_F
	{
		author = "P1NGA";
		displayName = "USED M72E8 LAW";
		descriptionShort = "M72E8 - Reduced Propellant, Confined Spaces";
		picture = "\m72_law_launcher\data\m72e8_launcher_ca.paa";
		model = "\m72_law_launcher\M72E8_launcher_empty.p3d";
		modelSpecial = "\m72_law_launcher\M72E8_launcher_empty.p3d";
	};
};
class CfgAmmo
{
	class R_60mm_HE;
	class ASOR_M72A5_HEAT_F: R_60mm_HE
	{
		model = "\m72_law_launcher\m72_rocket_heat_fly.p3d";
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "";
		effectsMissile = "missile3";
		whistleDist = 16;
		soundHit[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\RPG32_Hit",3.1622777,1,1800};
		hit = 650;
		indirectHit = 8;
		indirectHitRange = 4;
		explosive = 0.8;
		maxSpeed = 250;
		thrustTime = 2.0;
		thrust = 100;
		timeToLive = 20;
		fuseDistance = 15;
		airFriction = 0.05;
		sideAirFriction = 0.5;
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		maneuvrability = 0;
	};
	class ASOR_M72A6_HEAT_F: ASOR_M72A5_HEAT_F
	{
		model = "\m72_law_launcher\m72_rocket_heat_fly.p3d";
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		hit = 500;
		indirectHit = 25;
		indirectHitRange = 10;
	};
	class ASOR_M72A7_HEAT_F: ASOR_M72A6_HEAT_F
	{
		model = "\m72_law_launcher\m72_rocket_heat_fly.p3d";
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
	};
	class ASOR_M72A9_ASM_F: ASOR_M72A5_HEAT_F
	{
		model = "\m72_law_launcher\m72_rocket_asm_fly.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		allowAgainstInfantry = 0;
		hit = 200;
		indirectHit = 10;
		indirectHitRange = 8;
		explosive = 0.95;
	};
	class ASOR_M72ASMRC_ASM_F: ASOR_M72A9_ASM_F
	{
		model = "\m72_law_launcher\m72_rocket_asm_fly.p3d";
		hit = 75;
		indirectHit = 5;
		indirectHitRange = 3;
		explosive = 0.85;
	};
	class ASOR_M72E8_HEAT_F: ASOR_M72A6_HEAT_F
	{
		maxSpeed = 125;
		thrustTime = 2.0;
		thrust = 50;
		timeToLive = 10;
		fuseDistance = 5;
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class ASOR_M72_Magazine_Base: CA_LauncherMagazine
	{
		scope = 1;
		allowedSlots[] = {801,901,701};
		picture = "\m72_law_launcher\data\m72_heat_ca.paa";
		model = "\m72_law_launcher\m72_rocket_heat.p3d";
		initSpeed = 140;
		type = "2*256";
		mass = 0;
	};
	class ASOR_M72A5_MAGAZINE_F: ASOR_M72_Magazine_Base
	{
		author = "P1NGA";
		displayName = "M72A5 HEAT Rocket";
		descriptionShort = "M72A5 HEAT - Medium Armour Shaped Charge (315 Octol)";
		ammo = "ASOR_M72A5_HEAT_F";
	};
	class ASOR_M72A6_MAGAZINE_F: ASOR_M72_Magazine_Base
	{
		author = "P1NGA";
		displayName = "M72A6 HEAT Rocket";
		descriptionShort = "M72A6 HEAT - Light Armour Shaped Charge (315 Octol)";
		ammo = "ASOR_M72A6_HEAT_F";
	};
	class ASOR_M72A7_MAGAZINE_F: ASOR_M72_Magazine_Base
	{
		author = "P1NGA";
		displayName = "M72A7 HEAT Rocket";
		descriptionShort = "M72A7 HEAT - Light Armour Shaped Charge (PBXN-9)";
		ammo = "ASOR_M72A7_HEAT_F";
	};
	class ASOR_M72A9_MAGAZINE_F: ASOR_M72_Magazine_Base
	{
		author = "P1NGA";
		displayName = "M72A9 ASM Rocket";
		descriptionShort = "M72A9 ASM - Anti-Structure Fragmenting Case (Aluminized HE)";
		model = "\m72_law_launcher\m72_rocket_asm.p3d";
		ammo = "ASOR_M72A9_ASM_F";
	};
	class ASOR_M72ASMRC_MAGAZINE_F: ASOR_M72_Magazine_Base
	{
		author = "P1NGA";
		displayName = "M72ASM-RC Anti-Structure Reduced Calibre";
		descriptionShort = "M72E8 HEAT - Reduced Propellant Charge For Confined Spaces";
		model = "\m72_law_launcher\m72_rocket_asm.p3d";
		ammo = "ASOR_M72ASMRC_ASM_F";
	};
	class ASOR_M72E8_MAGAZINE_F: ASOR_M72_Magazine_Base
	{
		author = "P1NGA";
		displayName = "M72E8 Reduced Propellant HEAT";
		descriptionShort = "M72E8 HEAT - Reduced Propellant Charge For Confined Spaces";
		model = "\m72_law_launcher\m72_rocket_heat.p3d";
		ammo = "ASOR_M72E8_HEAT_F";
	};
	class ASOR_M72_Magazine_Collapsed: ASOR_M72A6_MAGAZINE_F
	{
		displayName = "Unarmed M72 Launcher";
		author = "P1NGA";
		count = 0;
	};
	class ASOR_M72_Magazine_Used: ASOR_M72_Magazine_Collapsed
	{
		displayName = "Empty M72 Launcher";
		author = "P1NGA";
		count = 0;
	};
};
class CfgCloudlets
{
	class Default;
	class ASOR_M72_CircleSmoke: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.25;
		moveVelocity[] = {"directionX * 2.2","directionY * 2.2","directionZ * 2.2"};
		rotationVelocity = 1;
		weight = 0.1285;
		volume = 0.1;
		rubbing = 0.8;
		size[] = {0.15,0.3,0.5};
		sizeCoef = "1.5 * (vehicleSpeedSize interpolate [1.5,18,1,2])";
		color[] = {{0.8,0.8,0.8,0.4},{0.8,0.8,0.8,0.3},{0.8,0.8,0.8,0.05},{0.8,0.8,0.8,0.01}};
		colorCoef[] = {1,1,1,"0.3 * (vehicleSpeedSize interpolate [1.5,18,2,1])"};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.05;
		randomDirectionIntensity = 0.15;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		lifeTimeVar = 0.2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.05,0.05,0.05};
		MoveVelocityVar[] = {0.15,0.15,0.001};
		rotationVelocityVar = 20;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class ASOR_M72_CircleSmoke
{
	class _xx_00
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {0.2,0.0,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
	class _xx_02
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {0.1732,0.1,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
	class _xx_04
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {0.1,0.1732,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
	class _xx_06
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {0,0.2,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
	class _xx_08
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {-0.1,0.1732,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
	class _xx_10
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {-0.1732,0.1,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
	class _xx_12
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {-0.2,0,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
	class _xx_14
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {-0.1732,-0.1,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
	class _xx_16
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {-0.1,-0.1732,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
	class _xx_18
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {0,-0.2,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
	class _xx_20
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {0.1,-0.1732,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
	class _xx_22
	{
		simulation = "particles";
		type = "ASOR_M72_CircleSmoke";
		position[] = {0.1732,-0.1,0.05};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = -1;
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class asor_Launcher
			{
				displayName = "M72 LAW Launcher";
				condition = "getNumber (configfile >> 'CfgWeapons' >> currentWeapon player >> 'ASOR_Launcher_Swap') > 0";
				exceptions[] = {"isNotInside","notOnMap"};
				statement = "";
				showDisabled = 1;
				priority = 3.2;
				icon = "\m72_law_launcher\data\ace_interact_icon_ca.paa";
				hotkey = "L";
				class asor_M72_Launcher_Expand
				{
					displayName = "Extend Launcher";
					condition = "getNumber (configfile >> 'CfgWeapons' >> secondaryWeapon player >> 'ASOR_Launcher_Swap') == 1";
					statement = "[_player, secondaryWeapon _player] call asor_fnc_m72Launcher_switch";
					showDisabled = 0;
					priority = 2;
					icon = "\m72_law_launcher\data\ace_interact_extend_ca.paa";
					hotkey = "0";
				};
				class asor_M72_Launcher_Collapse
				{
					displayName = "Collapse Launcher";
					condition = "getNumber (configfile >> 'CfgWeapons' >> secondaryWeapon player >> 'ASOR_Launcher_Swap') == 2";
					statement = "[_player, secondaryWeapon _player] call asor_fnc_m72Launcher_switch";
					showDisabled = 0;
					priority = 2;
					icon = "\m72_law_launcher\data\ace_interact_collapse_ca.paa";
					hotkey = "0";
				};
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	asor_M72Launcher_preinit = "asor_fnc_M72Launcher_FiredEH = compile preProcessFileLineNumbers '\m72_law_launcher\Scripts\asor_fnc_firedEH.sqf'; asor_fnc_m72Launcher_switch = compile preProcessFileLineNumbers '\m72_law_launcher\Scripts\asor_fnc_launcherSwitch.sqf';";
};
class Extended_FiredBIS_EventHandlers
{
	class CAManBase
	{
		class asor_M72Launcher_FiredBIS
		{
			clientFiredBIS = "_this call asor_fnc_M72Launcher_FiredEH;";
		};
	};
};
//};
