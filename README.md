
[CoreMod - SAMP 0.3.7 R3 Plugin][github]
====================================================================================

**Development and Build**

Created by (c) [ailishev](https://vk.com/mystecode)

---

[![GitHub Release](https://img.shields.io/github/release/ailishev/coremod-release-plugin.svg)](https://github.com/ailishev/coremod-release-plugin/releases/latest) 
[![Build Status][build_status]][build]
[![GitHub All Releases](https://img.shields.io/github/downloads/ailishev/coremod-release-plugin/total.svg)](https://github.com/ailishev/coremod-release-plugin/releases)
[![GitHub Release Downloads](https://img.shields.io/github/downloads/ailishev/coremod-release-plugin/latest/total.svg)](https://github.com/ailishev/coremod-release-plugin/releases/latest)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=c%2B%2B&logoColor=white)](#)
[![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)](#)
[![License](https://img.shields.io/github/license/ailishev/coremod-release-plugin?logo=mit)](#)
[![Stars](https://img.shields.io/github/stars/ailishev/coremod-release-plugin?logo=github)](#)
[![Issues](https://img.shields.io/github/issues/ailishev/coremod-release-plugin?logo=github)](#)
![Visitors](https://komarev.com/ghpvc/?username=ailishev&label=Visitors&color=0e75b6&style=flat)
[![Contributions Welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat)](https://github.com/ailishev/coremod-release-plugin/issues)
[![Hyde](https://badge.fury.io/gh/tterb%2FHyde.svg)](#)

## Overview

CoreMod is a powerful plugin designed to bring advanced interface integrations from the Arizona Games project (San Andreas Multiplayer) into your game mod. This free release offers a glimpse into a more comprehensive plugin currently in development, allowing you to replicate and utilize interfaces from popular projects like Arizona Role Play and Village RP (Bone County). Future updates will expand the plugin with new content and features.

---

## Server.cfg

In this version, the plugin will only work on the 127.0.0.1 IP address.

```
bind 127.0.0.1
```

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
ShowYouTubeVideoPhone(playerid, const url[]); 
HideYoutubeVideoPhone(playerid);

SetVehTuningSmoke(playerid, vehicleid, color1, color2, color3); 
SetVehTuningNumber(playerid, vehicleid, type, const number[], const region[]);
SetVehTuningLight(playerid, vehicleid, color1, color2, color3, color4);
SetVehTuningNeon(playerid, vehicleid, color1, color2, color3);

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

[github]: https://github.com/ailishev/coremod-release-plugin
[version]: https://github.com/ailishev/coremod-release-plugin/releases
[build]: https://ci.appveyor.com/project/ailishev/coremod-release-plugin/branch/master
[build_status]: https://ci.appveyor.com/api/projects/status/6yjciskchdrsqud7/branch/main?svg=true
[version_badge]: https://badge.fury.io/gh/ailishev%2Fcoremod-release-plugin.svg
