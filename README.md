# Original Prusa i3 MK2 Firmware

## General instructions

This is the Prusa Firmware for Prusa i3 Mk2, modified to work with generic RAMPS hardware (or, better yet, a board with more mosfet outputs like MKS BASE or MKS GEN) and GT2560 from Geeetech.

Configuration_prusa.h is already there, you don't need, or want, to copy a config from the variants directory.

Ideally, your board has a MOSFET on D7, and you should connect the extruder cooling fan to that (NOT the part fan). The firmware is setup for Dual Z steppers using the E1 driver. It won't matter if you use the Z driver for both either in series or parallel either.

Good luck!!!


## Build instructions

### Step 1

Install arduino

### Step 2

Configure your hardware in Configuration_prusa.h

### Step 3

Upload the firmware to board





