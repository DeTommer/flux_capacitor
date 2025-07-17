#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

// Pin definitions for each string
#define LED_PIN_1 2
#define LED_PIN_2 3
#define LED_PIN_3 4

#define NUM_LEDS_PER_STRING 4

Adafruit_NeoPixel strip1(NUM_LEDS_PER_STRING, LED_PIN_1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2(NUM_LEDS_PER_STRING, LED_PIN_2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip3(NUM_LEDS_PER_STRING, LED_PIN_3, NEO_GRB + NEO_KHZ800);

void setup() {
  strip1.begin();
  strip2.begin();
  strip3.begin();
  strip1.show();
  strip2.show();
  strip3.show();
}

void loop() {
  // Simple animation: light up each string in sequence
  for (int i = 0; i < NUM_LEDS_PER_STRING; i++) {
    strip1.clear();
    strip2.clear();
    strip3.clear();
    strip1.setPixelColor(i, strip1.Color(0, 255, 0)); // Green
    strip2.setPixelColor(i, strip2.Color(0, 255, 0));
    strip3.setPixelColor(i, strip3.Color(0, 255, 0));
    strip1.show();
    strip2.show();
    strip3.show();
    delay(100);
  }
}
