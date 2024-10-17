/*
 * CoreMod Include File
 * Created by: ailishev
 * Plugin version: v1.1.3
 */

#define DISABLE_NUMBERPLATE (0)
#define COUNTRY_KZ_NUMBERPLATE (1)
#define COUNTRY_RU_NUMBERPLATE (2)
#define COUNTRY_UA_NUMBERPLATE (3)
#define COUNTRY_BY_NUMBERPLATE (4)
#define COUNTRY_NONE_NUMBERPLATE (5)

enum {
	VILLAGE_HUD, // Custom HUD: 0 - Off | 1 - Custom (1) | 2 - Custom (2)
	VILLAGE_RADAR, // Custom Radar: 0 - Off (standard display) | 1 - Custom (1) | 2 - Custom (2)
	VILLAGE_SPEEDOMETER, // Custom Speedometer: 0 - Off | 1 - Custom (1) | 2 - Custom (2)
	VILLAGE_EAT, // Set hunger level: from 0 to 100 units
	VILLAGE_BENZ, // Set amount of fuel on speedometer: from 0 to 100 units
	VILLAGE_TRANSPARENTCHAT, // Chat transparency settings: 0 - Off | 1 - On
	VILLAGE_TYPEDIALOG // Set dialog rendering type: 0 - Full | 1 - Simplified | 2 - Basic
};

enum {
	ARIZONA_TRANSPARENTCHAT, // Chat transparency settings: 0 - Off | 1 - On
	ARIZONA_HUD, // Display custom HUD
	ARIZONA_RADAR, // Custom Radar: 0 - Standard | 1 - Custom (1) | 2 - Custom (2)
	ARIZONA_SPEEDOMETER, // Custom Speedometer: 0 - Standard (if available) | 1 - Advanced | 2 - Simplified
	ARIZONA_HOTKEYS, // Show hints near the radar: 0 - Off | 1 - On
	ARIZONA_HUNGER, // Set hunger level: from 0 to 100 units
	ARIZONA_TYPEDIALOG, // Set dialog display type: 0 - Full | 1 - Simplified | 2 - Basic
	ARIZONA_DISCORD, // Show player location in Discord: 0 - Off | 1 - On
	ARIZONA_WANTED, // Set player's wanted level: from 0 to 5 stars
	ARIZONA_FUEL, // Set amount of fuel on speedometer: from 0 to 100 units
	ARIZONA_MILAGE, // Set vehicle mileage: from 0 to 100000000 units
	ARIZONA_TYPEFUEL, // Set vehicle fuel type: 0 - Gasoline | 1 - Electric | 2 - Remove type
	ARIZONA_TYPEAIM, // Set custom crosshair: from 0 to 10
	ARIZONA_SNOW // Set snow 0 - off | 1 - on
};

native Village_Interface( playerid, interface, value );

native Arizona_Interface( playerid, interface, value );
native SetInfoArizonaHudSA( playerid, serverNumber, const title[], const project[], const type[], online, flag, logo, multiplier );
native CallEventInterface( playerid, const event[] );
native CreateCustomBrowser( playerid, browserid, const url[] );
native SetFocusBrowser( playerid, browserid, bool: toggle );
native SetPlayerCollision( playerid, bool: isCollision );
native ShowYouTubeVideoPhone( playerid, const url[] );
native HideYoutubeVideoPhone( playerid );

native SetVehTuningSmoke( playerid, vehicleid, color1, color2, color3 );
native SetVehTuningNumber( playerid, vehicleid, type, const number[], const region[] );
native SetVehTuningLight( playerid, vehicleid, color1, color2, color3, color4 );
native SetVehTuningNeon( playerid, vehicleid, color1, color2, color3 );
native SetVehTuningWheelSize( playerid, vehicleid, wheelSize );

native CallEventMobile( playerid, const eventType[], const eventText[] );


native SendPlayerConnectServer( playerid, const adress[], const name[], const password[] );
