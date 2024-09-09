# CoreMod

**Development and Build**

Created by (c) [ailishev](https://vk.com/mystecode)

---

[![GitHub Release](https://img.shields.io/github/release/ailishev/coremod-release-plugin.svg)](https://github.com/ailishev/coremod-release-plugin/releases/latest](https://github.com/ailishev/coremod-release-plugin/releases/))
[![GitHub Release](https://img.shields.io/github/downloads/ailishev/coremod-release-plugin/total.svg?maxAge=86400)](https://github.com/ailishev/coremod-release-plugin)

## Overview

CoreMod is a powerful plugin designed to bring advanced interface integrations from the Arizona Games project (San Andreas Multiplayer) into your game mod. This free release offers a glimpse into a more comprehensive plugin currently in development, allowing you to replicate and utilize interfaces from popular projects like Arizona Role Play and Village RP (Bone County). Future updates will expand the plugin with new content and features.

---

## Key Features

- **Arizona RP Interface Integration**  
  Seamlessly incorporate the interface elements of Arizona Role Play into your mod.
- **Village RP Interface Integration**  
  Bring the unique Village RP interface to your project with ease.

- **In-Game Browser Creation**  
  Implement a fully functional browser within your game, enabling new possibilities for interaction.

- **Unlock GTA:SA Standard Limits (Coming Soon in Pro Version)**  
  Remove the default limitations in GTA:SA for a more expansive gameplay experience.

- **Use Arizona RP Launcher Functions on Your Server**  
  Leverage the Arizona RP launcher’s capabilities to enhance your own server.

---

## Plugin Functions

### Village RP:

```pawn
Village_Interface(playerid, interface, value);

```

### Arizona RP:

```pawn

Arizona_Interface(playerid, interface, value);
SetInfoArizonaHudSA(playerid, serverNumber, const title[], const project[], const type[], online, flag, logo, multiplier);
CallEventInterface(playerid, const event[]);
CreateCustomBrowser(playerid, browserid, const url[]);
SetPlayerCollision(playerid, bool:isCollision);

```

## Installation

To install CoreMod, follow these steps:

1. **Plugin Files:**

   - Place the `coremod.dll` (for Windows) or `coremod.so` (for Linux) file into the `plugins` directory of your game mod.

2. **Include Files:**

   - Move the provided `.inc` files into the `include` folder of your scripting environment.

3. **Configuration:**
   - Ensure that the plugin is correctly referenced in your server configuration file.

## Information version

- This paste is Beta Version some function may not working.
