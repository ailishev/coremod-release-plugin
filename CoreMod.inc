enum {
    VILLAGE_HUD, // Custom HUD: (works only on the Жизнь в Деревне) 0 - Disable HUD | 1 - Custom (1) | 2 - Custom (2) 
    VILLAGE_RADAR, // Custom radar: 0 - Disable (shows the default radar) | 1 - Custom (1) | 2 - Custom (2)
    VILLAGE_SPEEDOMETER, // Custom speedometer: 0 - Disable | 1 - Custom (1) | 2 - Custom (2)
    VILLAGE_EAT, // Set hunger level: from 0 to 100 units
    VILLAGE_BENZ, // Set the amount of fuel on the speedometer: from 0 to 100 units
    VILLAGE_TRANSPARENTCHAT, // Chat transparency settings: 0 - Disable | 1 - Enable
    VILLAGE_TYPEDIALOG, // Set dialog rendering type: 0 - Full rendering | 1 - Simplified rendering | 2 - Basic rendering
}

enum {
    ARIZONA_TRANSPARENTCHAT, // Chat transparency settings: 0 - Disable | 1 - Enable
    ARIZONA_HUD, // Display custom HUD 
    ARIZONA_RADAR, // Custom radar: 0 - Default | 1 - Custom (1) | 2 - Custom (2)
    ARIZONA_SPEEDOMETER, // Display custom speedometer: 0 - Default (if present in the mod) | 1 - Advanced | 2 - Simplified
    ARIZONA_HOTKEYS, // Display hotkey hints near the radar: 0 - Disable | 1 - Enable
    ARIZONA_HUNGER, // Set hunger level: from 0 to 100 units
    ARIZONA_TYPEDIALOG, // Set dialog display type: 0 - Full | 1 - Simplified | 2 - Basic
    ARIZONA_DISCORD, // Display player's location in Discord: 0 - Disable | 1 - Enable 
    ARIZONA_WANTED, // Set player's wanted level: from 0 to 5 units
    ARIZONA_FUEL, // Set the amount of fuel on the speedometer: from 0 to 100 units
    ARIZONA_MILAGE, // Set vehicle mileage: from 0 to 100,000,000 units
    ARIZONA_TYPEFUEL // Set vehicle fuel type: 0 - Gasoline | 1 - Electric | 2 - Remove type
}

// village rp 
native Village_Interface(playerid, interface, value); // Function responsible for displaying Village interfaces (using this on the Arizona server build may cause crashes)

// arizona rp
native Arizona_Interface(playerid, interface, value); 
native SetInfoArizonaHudSA(playerid, serverNumber, const title[], const project[], const type[], online, flag, logo, multiplier); // Function to display the desired information on your interface
native CallEventInterface(playerid, const event[]); // Call custom events
native CreateCustomBrowser(playerid, browserid, const url[]); // Create a browser for the player
native SetPlayerCollision(playerid, bool:isCollision); // Set player transparency: 0 - Disable | 1 - Enable
native ShowYouTubeVideoPhone(playerid, const url[]); // Show youtube video for phone
native HideYoutubeVideoPhone(playerid); // Remove video youtube 

// arizona tuning


native SetVehTuningSmoke(playerid, vehicleid, color1, color2, color3); 
native SetVehTuningNumber(playerid, vehicleid, type, const number[], const region[]);
native SetVehTuningLight(playerid, vehicleid, color1, color2, color3, color4);
native SetVehTuningNeon(playerid, vehicleid, color1, color2, color3);
