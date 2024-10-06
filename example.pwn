main() {}

#include <a_samp>
#include <Pawn.CMD>
#include <Pawn.RakNet>
#include <CoreMod>
#include <sscanf2>


public OnPlayerConnect(playerid) {

    // теперь загружается автоматически
    // CreateCustomBrowser(playerid, 1, "file:///frontend/svelte_js/index.html");

    return 1;
}


public OnPlayerDisconnect(playerid, reason) {
   
    return 1;
}

public OnPlayerSpawn(playerid) {
   
    return 1;
}



public OnGameModeInit() {
    
   
    return 1;
}



cmd:test(playerid)
{
    CallEventInterface(playerid, "window.executeEvent('event.notify.initialize', '[\"success\",\"123123\",\"123123\",1500]');");

    Arizona_Interface(playerid, ARIZONA_HOTKEYS, 1);

    Arizona_Interface(playerid, ARIZONA_DISCORD, 2);

    Arizona_Interface(playerid, ARIZONA_SPEEDOMETER, 1);
    Arizona_Interface(playerid, ARIZONA_FUEL, 100);
    Arizona_Interface(playerid, ARIZONA_MILAGE, 9999);
    Arizona_Interface(playerid, ARIZONA_TYPEFUEL, 1);
}

CMD:hud(playerid, params[])
{
		if(sscanf(params, "d", params[0])) return SendClientMessage(playerid, -1, "/hud [type]");

		SEND_DEBUG_MESSAGE(playerid, COLOR_DEBUG, "[DEBUG] hud - %d", params[0]);

		Arizona_Interface(playerid, ARIZONA_HUD, params[0]);

		SetInfoArizonaHudSA(playerid, 0, "Test", "Arizona", "Role play", 222, 0, 1, 4);

		return 1;
}

CMD:radar(playerid, params[])
{
	if(sscanf(params, "d", params[0])) return SendClientMessage(playerid, -1, "/radar [type]");

	SEND_DEBUG_MESSAGE(playerid, COLOR_DEBUG, "[DEBUG] radar - %d", params[0]);

	Arizona_Interface(playerid, ARIZONA_RADAR, params[0]);

	return 1;
}

CMD:hunger(playerid, params[])
{
	if(sscanf(params, "d", params[0])) return SendClientMessage(playerid, -1, "/hunger [value]");

	Arizona_Interface(playerid, ARIZONA_HUNGER, params[0]);

	return 1;
}
