# Community-modified Prusa i3 MK2 Firmware [![Build Status](https://travis-ci.org/Sebastianv650/Prusa-Firmware.svg?branch=MK2_Community_Mod)](https://travis-ci.org/Sebastianv650/Prusa-Firmware)

## About this Firmware

This Firmware is based on the original Prusa i3 MK2 Firmware, but it includes some changes like:
- PRs that are created, but not yet merged in Prusa i3 MK2
- Fixed bugs, where bugs not necessarily means a bug like freezing printer but a behaviour some users don't like


## Disclaimer

Please note that this is not the original Prusa i3 MK2 Firmware and if you decide to use it you will do it at your own risk!


## Having some issues or do you want to get a PR merged?

If you have an issue, please check first if it also happens with the original Prusa i3 MK2 Firmware. If the problem persists, open an issue on the original firmware branch.
If not, feel free to open an issue here. This will help debugging all the PRs that are in queue at the original firmware branch.

If you want to get a PR merged, open a PR against the original Prusa i3 MK2 Firmware first. I don't want to see this firmware developing away from the original one.


## Download of precompiled .hex files

URL of the zip file containing precompiled firmware can be found toward the end of the build log: https://travis-ci.org/Sebastianv650/Prusa-Firmware

Just download and flash it to the electronics.


## Build instructions

### Step 1

Install arduino

### Step 2

Remove Liquid Crystal library from your arduino or rename it

### Step 3

Install the arduino addon located in the root of this repo. Don't forget to install correct version!

### Step 4

Copy the configuration file matching your printer from variants folder to the the Firmware folder

### Step 5

Rename it to "Configuration_prusa.h"

### Step 6

Compile the firmware

### Step 7

Upload the firmware to board
