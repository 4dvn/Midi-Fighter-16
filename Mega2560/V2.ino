
/*
 *     Midi Fighter 16 by Staal3D & 4D
 *     ---------------------------------------
 */

#include <Control_Surface.h>

USBMIDI_Interface midi;
// Fours potentiometer to analog pinout

CCPotentiometer potentiometer1(A0, {MIDI_CC::Channel_Volume, CHANNEL_2});

CCPotentiometer potentiometer2(A1, {MIDI_CC::Channel_Volume, CHANNEL_3});

CCPotentiometer potentiometer3(A2, {MIDI_CC::Channel_Volume, CHANNEL_4});

CCPotentiometer potentiometer4(A3, {MIDI_CC::Channel_Volume, CHANNEL_5});

void setup() {
  Control_Surface.begin();
}

void loop() {
  Control_Surface.loop();
}
