# ATCwatch  -WatcH
Custom Arduino C++ firmware for the Gokoo M11 DaFit Smartwatch, slightly modified from the ATCwatch firmware for the Pinetime and Colmi P8 watches by @atc1441.

The Gokoo M11 is cheap fitness tracker, with original Moyoung firmware MOY-EW5. As such it can modified with the tools below, in order to overwrite the bootloader with a standard SoftDevice 5.0. This can then be downgraded to a bootloader based on SoftDevice 2.01, which is the basis for this firmware.

The watch contains:
A nrf


About 150–200uA standby current consumtion. Currently 92 Hours Runtime with heavy notification and usage!
Basic menu system and notification working.

Use this portable Arduino version:
- https://atcnetz.de/downloads/D6Arduino.rar

Here is a manual on how to use it:
- https://youtu.be/3gjmEdEDJ5A

Unzip, open Arduino.exe, open the ATCwatch.ino file and compile. Done.
Simply select the DaFit as the board and click on compile. You will get an Update file you can flash in the Arduino folder.

Please make sure you have always an option to go back to Bootloader somehow. I can only suggest to have one watch opened and connected an SWD St-Link V2 to it to develop on that.


**This can be flashed without opening the Watch with this Repo https://github.com/atc1441/DaFlasherFiles and the DaFlasher app from the PlayStore (Android):**
- https://play.google.com/store/apps/details?id=com.atcnetz.paatc.patc&hl=en_US
- https://www.youtube.com/watch?v=gUVEz-pxhgg

This firmware is meant to be used with the D6Notification App from the PlayStore (Android):
- https://play.google.com/store/apps/details?id=com.atcnetz.de.notification&hl=gsw

## Credits
Many Thanks to Daniel Thompson for his help (https://github.com/daniel-thompson/wasp-os).

Also many Thanks to https://github.com/endian-albin for helping so much with the Licensing.

## Copyright and licenses

This program is created by Aaron Christophel and made available under the GNU General Public License version 3 or, at your option, any later version.

The icons are under the Apache License 2.0 and taken from here:
- https://github.com/Remix-Design/RemixIcon
- https://github.com/google/material-design-icons/ (the boot logo)

The Montserrat font is under the SIL Open Font License, Version 1.1 and taken from here:
- https://fonts.google.com/specimen/Montserrat

## FAQ / Errors
#### Code does not compile / Arduino puts out errors.
---> This code is meant to be used with the D6Arduino.rar on Windows and is tested that way. Sometimes I make changes to it so you need to update that also when getting the newest firmware. I will try to add information when you need to update it but can not guarantee it, so just try an update if it does not work.

The latest update that needs the newest D6Arduino.rar file is this: https://github.com/atc1441/ATCwatch/commit/0dd3138d10d5c8f1a776ad1b7f1d4819d686e46f

SPDX-License-Identifier: GPL-3.0-or-later
