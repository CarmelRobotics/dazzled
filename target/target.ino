// Adafruit_NeoMatrix example for single NeoPixel Shield.
// Scrolls 'Howdy' across the matrix in a portrait (vertical) orientation.

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR
#define PSTR // Make Arduino Due happy
#endif

#define PIN 6

// MATRIX DECLARATION:
// Parameter 1 = width of NeoPixel matrix
// Parameter 2 = height of matrix
// Parameter 3 = pin number (most are valid)
// Parameter 4 = matrix layout flags, add together as needed:
//   NEO_MATRIX_TOP, NEO_MATRIX_BOTTOM, NEO_MATRIX_LEFT, NEO_MATRIX_RIGHT:
//     Position of the FIRST LED in the matrix; pick two, e.g.
//     NEO_MATRIX_TOP + NEO_MATRIX_LEFT for the top-left corner.
//   NEO_MATRIX_ROWS, NEO_MATRIX_COLUMNS: LEDs are arranged in horizontal
//     rows or in vertical columns, respectively; pick one or the other.
//   NEO_MATRIX_PROGRESSIVE, NEO_MATRIX_ZIGZAG: all rows/columns proceed
//     in the same order, or alternate lines reverse direction; pick one.
//   See example below for these values in action.
// Parameter 5 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)


// Example for NeoPixel Shield.  In this application we'd like to use it
// as a 5x8 tall matrix, with the USB port positioned at the top of the
// Arduino.  When held that way, the first pixel is at the top right, and
// lines are arranged in columns, progressive order.  The shield uses
// 800 KHz (v2) pixels that expect GRB color data.
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(48, 1, 6,
2     + 0 +
NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
NEO_GRB            + NEO_KHZ800);

const uint16_t colors[] = {
  matrix.Color(175, 0, 255), matrix.Color(0, 0, 255), matrix.Color(0, 255, 255), matrix.Color(140, 255, 140), matrix.Color(0, 255, 0), matrix.Color(255, 255, 0), matrix.Color(255, 200, 0), matrix.Color(255, 120, 0), matrix.Color(255, 0, 0), matrix.Color(255, 0, 150), matrix.Color(255, 0, 255), };

void setup() {
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(50);
  matrix.setTextColor(colors[0]);
}

void loop() {
  for (int y = 0; y < 2; y++) {
    switch(y) {
    case 0 :
      large_circle();
      break;
    case 1 :
      small_circle();
      break;
    case 2 :
      smallest_circle();
    }
  } 
}

void first() {
  matrix.fillScreen(0);
  matrix.drawPixel(0,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(1,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(2,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(3,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(4,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(5,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(6,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(7,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(8,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(9,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(10,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(11,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(12,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(13,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(14,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(15,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(16,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(17,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(18,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(19,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(20,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(21,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(22,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(23,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(24,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(25,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(26,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(27,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(28,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(29,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(30,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(31,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(32,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(33,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(34,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(35,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(36,0, matrix.Color(255, 255, 2550));
  matrix.drawPixel(37,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(38,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(39,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(40,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(41,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(42,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(43,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(44,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(45,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(46,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(47,0, matrix.Color(255, 0, 0));
  matrix.show();
  delay(250);
} 

void second() {
  matrix.fillScreen(0);
  matrix.drawPixel(0,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(1,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(2,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(3,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(4,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(5,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(6,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(7,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(8,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(9,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(10,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(11,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(12,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(13,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(14,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(15,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(16,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(17,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(18,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(19,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(20,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(21,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(22,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(23,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(24,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(25,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(26,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(27,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(28,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(29,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(30,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(31,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(32,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(33,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(34,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(35,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(36,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(37,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(38,0, matrix.Color(255, 0, 0));
  matrix.drawPixel(39,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(40,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(41,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(42,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(43,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(44,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(45,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(46,0, matrix.Color(255, 255, 255));
  matrix.drawPixel(47,0, matrix.Color(255, 255, 255));
  matrix.show();
  delay(250);
}


