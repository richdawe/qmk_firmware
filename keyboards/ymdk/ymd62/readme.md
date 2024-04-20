# YMDK YMD62 ISO

Double-tap the reset button on the PCB to enter bootloader mode.
Copy the built uf2 file to the device by dragging the file to the new USB disk.

Note: The device does not seem to reconnect automatically after the firmware has written.
Wait for the USB device to disappear after writing firmware, then unplug and replug it.
The keyboard should then be usable again.

TODO:

 - [ ] Figure out why qmk console doesn't seem to work
 - [ ] Update to QMK latest tag