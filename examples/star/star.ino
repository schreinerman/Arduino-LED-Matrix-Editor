#include "FastLED.h"
#define MATRIX_WIDTH 16
#define MATRIX_HEIGHT 16
#define NUM_LEDS (MATRIX_WIDTH * MATRIX_HEIGHT)
#define DATA_PIN 3

extern CRGB image[(MATRIX_WIDTH * MATRIX_HEIGHT)];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2811, DATA_PIN, GRB>(image, NUM_LEDS);
  FastLED.setBrightness(32);
  FastLED.show();
}

void loop() {
  // put your main code here, to run repeatedly:
}