/*
 *     Midi Fighter 16 by Staal3D & 4D
 *     ---------------------------------------
 */
// Tranposer buttons updating....
#include <Control_Surface.h>

USBMIDI_Interface midi;
// Fours potentiometer to analog pinout

CCPotentiometer potentiometer1(A0, {MIDI_CC::Channel_Volume, CHANNEL_2});

CCPotentiometer potentiometer2(A1, {MIDI_CC::Channel_Volume, CHANNEL_3});

CCPotentiometer potentiometer3(A2, {MIDI_CC::Channel_Volume, CHANNEL_4});

CCPotentiometer potentiometer4(A3, {MIDI_CC::Channel_Volume, CHANNEL_5});

// The note numbers corresponding to the buttons in the matrix
const AddressMatrix<4, 4> addresses = {{
  {51, 50, 49, 48},// Ableton drumrack map
  {47, 46, 45, 44},
  {43, 42, 41, 40},
  {39, 38, 37, 36},
}};

NoteButtonMatrix<4, 4> buttonmatrix = {
  {2, 3, 4, 5}, // row pins
  {6, 7, 8, 9},    // column pins
  addresses,    // address matrix
  CHANNEL_1,    // channel and cable number
};

void setup() {
  Control_Surface.begin();
}

void loop() {
  Control_Surface.loop();
}
