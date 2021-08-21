// SIDE 1 IS BLUFOR
// SIDE 2 IS INDEP
// SIDE 0 IS OPFOR

	// INFANTRY
	class ncraf_bos_base: bosunderarmor_body
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 0;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 0;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 0;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Brotherhood Base";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Knights";
		weapons[] = {Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {};				// Which items the character has.
		RespawnItems[] = {};			// Which items the character respawns with.
		magazines[] = {};				// What ammunition the character has.
		respawnMagazines[] = {};		// What ammunition the character respawns with.
		linkedItems[] = {};				// Which items the character has.
		respawnLinkedItems[] = {};		// Which items the character respawns with.
	};
	
	class ncraf_bos_initiate: ncraf_bos_base
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Initiate";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Knights";
		weapons[] = {AM_G3AssaultRifleWooden, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_G3AssaultRifleWooden, Throw, Put};		// Which weapons the character respawns with.
		backpack = "";
		Items[] = {mag_2(ACE_tourniquet), ACE_splint, Aftermath_Stimpak, ACE_morphine};				// Which items the character has.
		RespawnItems[] = {mag_2(ACE_tourniquet), ACE_splint, Aftermath_Stimpak, ACE_morphine};			// Which items the character respawns with.
		magazines[] = {mag_9(24Rnd_556x45_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_9(24Rnd_556x45_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
	class ncraf_bos_junior_knight: ncraf_bos_base
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Apprentice Knight";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Knights";
		weapons[] = {Krausk_AER9_Rifle, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {Krausk_AER9_Rifle, Throw, Put};		// Which weapons the character respawns with.
		backpack = "";
		Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
		RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
		magazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), rvg_antiRad};				// What ammunition the character has.
		respawnMagazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), rvg_antiRad};		// What ammunition the character respawns with.
		linkedItems[] = {bosunderarmorhelmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {bosunderarmorhelmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
	class ncraf_bos_knight_melee: O_Soldier_Melee
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Knight (Melee)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "CQB";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Knights";
		weapons[] = {AM_WBK_Ripper, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_WBK_Ripper, Throw, Put};		// Which weapons the character respawns with.
		backpack = "";
		Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
		RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
		magazines[] = {rvg_antiRad};				// What ammunition the character has.
		respawnMagazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), rvg_antiRad};		// What ammunition the character respawns with.
		linkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
	class ncraf_bos_knight: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Knight";		// The name of the soldier, which is displayed in the editor.
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_s";
			role = "CQB";
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "bosunderarmor_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {Krausk_AER9_Rifle, Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {Krausk_AER9_Rifle, Throw, Put};		// Which weapons the character respawns with.
				backpack = "";
				Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
				magazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2),rvg_antiRad};				// What ammunition the character has.
				respawnMagazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), rvg_antiRad};		// What ammunition the character respawns with.
				linkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
		class ncraf_bos_knight_eng: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Quartermaster";		// The name of the soldier, which is displayed in the editor.
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_s";
			role = "Sapper";
			icon = "iconManEngineer"
			canDeactivateMines = true;
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "bosunderarmor_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {Krausk_AER12_Rifle, Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {Krausk_AER12_Rifle, Throw, Put};		// Which weapons the character respawns with.
				backpack = "";
				Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
				magazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2)};				// What ammunition the character has.
				respawnMagazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2)};		// What ammunition the character respawns with.
				linkedItems[] = {bosunderarmorhelmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {bosunderarmorhelmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
		class ncraf_bos_knight_mg: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Knight (MG)";		// The name of the soldier, which is displayed in the editor.
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_MG_s";
			role = "Machinegunner";
			icon = "";
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "bosunderarmor_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {Krausk_LaserRCW_H, Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {Krausk_LaserRCW_H, Throw, Put};		// Which weapons the character respawns with.
				backpack = "pipboy2500_invis";
				Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
				magazines[] = {mag_3(240Rnd_ElectronChargeP_Mag), rvg_antiRad};				// What ammunition the character has.
				respawnMagazines[] = {mag_3(240Rnd_ElectronChargeP_Mag), rvg_antiRad};		// What ammunition the character respawns with.
				linkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
		
	class ncraf_bos_junior_knight_MG: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Apprentice Knight (MG Asst.)";		// The name of the soldier, which is displayed in the editor.
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_s";
			role = "AmmoBearer";
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "bosunderarmor_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {Krausk_AER9_Rifle, Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {Krausk_AER9_Rifle, Throw, Put};		// Which weapons the character respawns with.
				backpack = "pipboy2500_invis";
				Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
				magazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), mag_1(240Rnd_ElectronChargeP_Mag) ,rvg_antiRad};				// What ammunition the character has.
				respawnMagazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), rvg_antiRad};		// What ammunition the character respawns with.
				linkedItems[] = {bosunderarmorhelmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {bosunderarmorhelmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
	class ncraf_bos_knight_AT: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Knight (AT)";		// The name of the soldier, which is displayed in the editor.
			textPlural = "AT soldiers";
			textSingular = "AT soldier";
			nameSound = "veh_infantry_AT_s";
			role = "MissileSpecialist";
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "bosunderarmor_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {Krausk_AER9_Rifle, AM_launch_MissileLauncher, Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {Krausk_AER9_Rifle, AM_launch_MissileLauncher, Throw, Put};		// Which weapons the character respawns with.
				backpack = "pipboy2500_invis";
				Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
				magazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), mag_3(MissileLauncherAT_Rocket), rvg_antiRad};				// What ammunition the character has.
				respawnMagazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), rvg_antiRad};		// What ammunition the character respawns with.
				linkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
	class ncraf_bos_junior_knight_AT: ncraf_bos_base
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Apprentice Knight (AT Asst.)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "AmmoBearer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Knights";
		weapons[] = {Krausk_AER9_Rifle, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {Krausk_AER9_Rifle, Throw, Put};		// Which weapons the character respawns with.
		backpack = "pipboy2500_invis";
		Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
		RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
		magazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), mag_1(MissileLauncherAT_Rocket), rvg_antiRad};				// What ammunition the character has.
		respawnMagazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), mag_1(MissileLauncherAT_Rocket), rvg_antiRad};		// What ammunition the character respawns with.
		linkedItems[] = {bosunderarmorhelmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {bosunderarmorhelmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
		
	class ncraf_bos_knight_marksman: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Knight (Sniper)";		// The name of the soldier, which is displayed in the editor.
			textPlural = "snipers";
			textSingular = "sniper";
			nameSound = "veh_infantry_s";
			role = "Marksman";
			icon = "";
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "bosunderarmor_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {AM_SniperRifle, Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {AM_SniperRifle_Full, Throw, Put};		// Which weapons the character respawns with.
				backpack = "";
				Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
				magazines[] = {mag_7(10Rnd_308_Mag),rvg_antiRad};				// What ammunition the character has.
				respawnMagazines[] = {mag_7(10Rnd_308_Mag), rvg_antiRad};		// What ammunition the character respawns with.
				linkedItems[] = {bosunderarmorhelmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {bosunderarmorhelmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
		class ncraf_bos_knight_medic: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Field Medic";		// The name of the soldier, which is displayed in the editor.
			textPlural = "medics";
			textSingular = "medic";
			nameSound = "veh_infantry_medic_s";
			role = "Medic";
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "bosunderarmor_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {Krausk_AER9_Rifle, Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {Krausk_AER9_Rifle, Throw, Put};		// Which weapons the character respawns with.
				backpack = "";
				Items[] = {mag_4(ACE_tourniquet), mag_6(Aftermath_Stimpak), mag_2(ACE_splint), mag_5(ACE_morphine)};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
				magazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2),rvg_antiRad};				// What ammunition the character has.
				respawnMagazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), rvg_antiRad};		// What ammunition the character respawns with.
				linkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
	class ncraf_bos_knight_sl: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Senior Knight";		// The name of the soldier, which is displayed in the editor.
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_s";
			role = "SquadLeader";
			icon = "";
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "bosunderarmor_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {Krausk_AER9_Rifle, Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {Krausk_AER9_Rifle, Throw, Put};		// Which weapons the character respawns with.
				backpack = "";
				Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine}			// Which items the character respawns with.
				magazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), rvg_antiRad, AM_frag_throw, mag_2(Smokeshell)};				// What ammunition the character has.
				respawnMagazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), rvg_antiRad, AM_frag_throw, mag_2(Smokeshell)};		// What ammunition the character respawns with.
				linkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
	class ncraf_bos_knight_officer: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Head Knight";		// The name of the soldier, which is displayed in the editor.
			textPlural = "officers";
			textSingular = "officer";
			nameSound = "veh_infantry_officer_s";
			role = "Officer";
			Icon = "";
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "bosunderarmor_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {Krausk_AER12_Rifle, Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {Krausk_AER12_Rifle, Throw, Put};		// Which weapons the character respawns with.
				backpack = "";
				Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
				magazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2),rvg_antiRad};				// What ammunition the character has.
				respawnMagazines[] = {mag_15(24Rnd_MicroFusionCell_Mag2), rvg_antiRad};		// What ammunition the character respawns with.
				linkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {Combat_Armor_Helmet, Combat_Armor_lite, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};

	class ncraf_bos_scribe: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Scribe";		// The name of the soldier, which is displayed in the editor.
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_s";
			role = "Rifleman";
			Icon = "";
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "Brotherhood_Scribe_robe_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {Krausk_AEP7_Pistol, Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {Krausk_AEP7_Pistol, Throw, Put};		// Which weapons the character respawns with.
				backpack = "";
				Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
				magazines[] = {mag_4(30Rnd_SmallEnergyCell_Mag),rvg_antiRad};				// What ammunition the character has.
				respawnMagazines[] = {mag_4(30Rnd_SmallEnergyCell_Mag), rvg_antiRad};		// What ammunition the character respawns with.
				linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
		class ncraf_bos_pilot: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Pilot";		// The name of the soldier, which is displayed in the editor.
			textPlural = "pilots";
			textSingular = "pilot";
			nameSound = "veh_infantry_pilot_s";
			role = "Crewman";
			Icon = "";
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "Brotherhood_Scribe_robe_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {Krausk_AEP7_Pistol, Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {Krausk_AEP7_Pistol, Throw, Put};		// Which weapons the character respawns with.
				backpack = "";
				Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), Aftermath_Stimpak, ACE_splint, ACE_morphine};			// Which items the character respawns with.
				magazines[] = {mag_4(30Rnd_SmallEnergyCell_Mag),rvg_antiRad};				// What ammunition the character has.
				respawnMagazines[] = {mag_4(30Rnd_SmallEnergyCell_Mag), rvg_antiRad};		// What ammunition the character respawns with.
				linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
	// OFFICER
	class ncraf_bos_elder: ncraf_bos_base
	{
			author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
			scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			side = 2;
		faction = "ncraf_bos";
			genericNames = "NATOMen";
			displayName = "Elder";		// The name of the soldier, which is displayed in the editor.
			textPlural = "officers";
			textSingular = "officer";
			nameSound = "veh_infantry_officer_s";
			role = "Officer";
			Icon = "";
			identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
			uniformClass = "Brotherhood_elder_robe_uniform";
			editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
			EditorSubcategory = "EdSubcat_Knights";
				weapons[] = {Throw, Put};				// Which weapons the character has.
				respawnWeapons[] = {Throw, Put};		// Which weapons the character respawns with.
				backpack = "";
				Items[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
				RespawnItems[] = {mag_2(ACE_tourniquet), mag_2(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
				magazines[] = {rvg_antiRad};				// What ammunition the character has.
				respawnMagazines[] = {rvg_antiRad};		// What ammunition the character respawns with.
				linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
				respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
	};
	
	// PALADINS
	
	class ncraf_bos_paladin: ncraf_bos_base
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Paladin";		// The name of the soldier, which is displayed in the editor.
		textPlural = "specops";
		textSingular = "specop";
		nameSound = "veh_infantry_SF_p";
		role = "SpecialOperative";
		icon = "";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "power_armor_t45d_uniform";
		nakedUniform = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Paladins";
		weapons[] = {Krausk_AER9_Rifle, Krausk_AEP7_Pistol, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {Krausk_AER9_Rifle, Krausk_AEP7_Pistol, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "pipboy2500_invis";
		Items[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
		RespawnItems[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
		magazines[] = {mag_23(24Rnd_MicroFusionCell_Mag2), mag_10(30Rnd_SmallEnergyCell_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_23(24Rnd_MicroFusionCell_Mag2), mag_10(30Rnd_SmallEnergyCell_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {AM_AvBagInvis, power_armor_helmet_t45d, ItemCompass, ItemMap, ItemRadio, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_AvBagInvis, power_armor_helmet_t45d, ItemCompass, ItemMap, ItemRadio, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_bos_paladin_melee: O_Soldier_Melee
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Paladin (Melee)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "specops";
		textSingular = "specop";
		nameSound = "veh_infantry_SF_p";
		role = "CQB";
		icon = "";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "power_armor_t45d_uniform";
		nakedUniform = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Paladins";
		weapons[] = {AM_WBK_supersledgehammer, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_WBK_supersledgehammer, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "pipboy2500_invis";
		Items[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
		RespawnItems[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
		magazines[] = {)};				// What ammunition the character has.
		respawnMagazines[] = {};		// What ammunition the character respawns with.
		linkedItems[] = {AM_AvBagInvis, power_armor_helmet_t45d, ItemCompass, ItemMap, ItemRadio, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_AvBagInvis, power_armor_helmet_t45d, ItemCompass, ItemMap, ItemRadio, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_bos_paladin_MG: ncraf_bos_base
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Paladin";		// The name of the soldier, which is displayed in the editor.
		textPlural = "specops";
		textSingular = "specop";
		nameSound = "veh_infantry_SF_p";
		role = "SpecialOperative";
		icon = "";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "power_armor_t45d_uniform";
		nakedUniform = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Paladins";
		weapons[] = {Krausk_LaserRCW_H, Krausk_AEP7_A_Pistol, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {Krausk_LaserRCW_H, Krausk_AEP7_A_Pistol, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "gatling_laser_backpack";
		Items[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
		RespawnItems[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
		magazines[] = {mag_5)240Rnd_ElectronChargeP_Mag), mag_5(30Rnd_SmallEnergyCell_Mag), mag_2(AM_frag_throw)};				// What ammunition the character has.
		respawnMagazines[] = {mag_3(240Rnd_ElectronChargeP_Mag), mag_3(30Rnd_SmallEnergyCell_Mag), mag_2(AM_frag_throw)};		// What ammunition the character respawns with.
		linkedItems[] = {AM_BigBagInvis, power_armor_helmet_t45d, ItemCompass, ItemMap, ItemRadio, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_BigBagInvis, power_armor_helmet_t45d, ItemCompass, ItemMap, ItemRadio, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_bos_paladin_AT: ncraf_bos_base
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Paladin (AT)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "AT soldiers";
		textSingular = "AT soldier";
		nameSound = "veh_infantry_AT_s";
		role = "MissileSpecialist";
		icon = "";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "power_armor_t45d_uniform";
		nakedUniform = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Paladins";
		weapons[] = {Krausk_AER9_Rifle, Krausk_AEP7_Pistol, AM_launch_MissileLauncher, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {Krausk_AER9_Rifle, Krausk_AEP7_Pistol, AM_launch_MissileLauncher, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "pipboy2500_invis";
		Items[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
		RespawnItems[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
		magazines[] = {mag_23(24Rnd_MicroFusionCell_Mag2), mag_10(30Rnd_SmallEnergyCell_Mag), mag_3(MissileLauncherAT_Rocket)};				// What ammunition the character has.
		respawnMagazines[] = {mag_23(24Rnd_MicroFusionCell_Mag2), mag_10(30Rnd_SmallEnergyCell_Mag), mag_3(MissileLauncherAT_Rocket)};		// What ammunition the character respawns with.
		linkedItems[] = {AM_AvBagInvis, power_armor_helmet_t45d, ItemCompass, ItemMap, ItemRadio, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_AvBagInvis, power_armor_helmet_t45d, ItemCompass, ItemMap, ItemRadio, ItemWatch};		// Which items the character respawns with.
	};

	class ncraf_bos_paladin_sniper: ncraf_bos_base
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Paladin (Sniper)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "snipers";
		textSingular = "sniper";
		nameSound = "veh_infantry_SF_p";
		role = "SpecialOperative";
		icon = "";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "power_armor_t45d_uniform";
		nakedUniform = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Paladins";
		weapons[] = {Krausk_GaussRifle_Standard, Krausk_AEP7_Pistol, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {Krausk_GaussRifle_Standard, Krausk_AEP7_Pistol, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "pipboy2500_invis";
		Items[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
		RespawnItems[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
		magazines[] = {mag_6(12rnd_Gauss_Mag_Standard_Krausk), mag_10(30Rnd_SmallEnergyCell_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_23(24Rnd_MicroFusionCell_Mag2), mag_10(30Rnd_SmallEnergyCell_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {AM_BigBagInvis, power_armor_helmet_t45d, ItemCompass, ItemMap, ItemRadio, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_BigBagInvis, power_armor_helmet_t45d, ItemCompass, ItemMap, ItemRadio, ItemWatch};		// Which items the character respawns with.
	
	class ncraf_bos_paladin_sl: ncraf_bos_base
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Senior Paladin";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_officer_p";
		role = "Officer";
		icon = "";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "t_51bpowerarmor_bosdecal_uniform";
		nakedUniform = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Paladins";
		weapons[] = {Krausk_AER9_Rifle, Krausk_AEP7_Pistol, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {Krausk_AER9_Rifle, Krausk_AEP7_Pistol, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "pipboy2500_invis";
		Items[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
		RespawnItems[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
		magazines[] = {mag_23(24Rnd_MicroFusionCell_Mag2), mag_10(30Rnd_SmallEnergyCell_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_23(24Rnd_MicroFusionCell_Mag2), mag_10(30Rnd_SmallEnergyCell_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {AM_AvBagInvis, t_51bpowerarmor_helm, ItemCompass, ItemMap, ItemRadio, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_AvBagInvis, t_51bpowerarmor_helm, ItemCompass, ItemMap, ItemRadio, ItemWatch};		// Which items the character respawns with.
	};

	class ncraf_bos_paladin_officer: ncraf_bos_base
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 2;
		faction = "ncraf_bos";
		genericNames = "NATOMen";
		displayName = "Head Paladin";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_officer_p";
		role = "Officer";
		icon = "";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "t_51bpowerarmor_bosdecal_uniform";
		nakedUniform = "bosunderarmor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\bosunderarmor.paa";
		EditorSubcategory = "EdSubcat_Paladins";
		weapons[] = {Krausk_Multiplas, Krausk_AEP7_Pistol, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {Krausk_Multiplas, Krausk_AEP7_Pistol, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "pipboy2500_invis";
		Items[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};				// Which items the character has.
		RespawnItems[] = {mag_3(Aftermath_Stimpak), ACE_splint, ACE_morphine};			// Which items the character respawns with.
		magazines[] = {mag_16(Krausk_30rnd_MP_MFC_Mag), mag_10(30Rnd_SmallEnergyCell_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_23(24Rnd_MicroFusionCell_Mag2), mag_10(30Rnd_SmallEnergyCell_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {AM_AvBagInvis, t_51bpowerarmor_helm, ItemCompass, ItemMap, ItemRadio, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_AvBagInvis, t_51bpowerarmor_helm, ItemCompass, ItemMap, ItemRadio, ItemWatch};		// Which items the character respawns with.
	};