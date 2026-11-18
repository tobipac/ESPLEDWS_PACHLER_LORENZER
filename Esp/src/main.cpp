#include <Arduino.h>
#include <FastLED.h>

#define LED_PIN 22
#define NUM_LEDS 5

CRGB leds[NUM_LEDS];

void setup()
{
  FastLED.addLeds<WS2811, LED_PIN, BRG>(leds, 3);
  FastLED.setBrightness(30);
  fill_solid(leds, NUM_LEDS, CRGB(0, 0, 255));
  FastLED.show();
  Serial.begin(115200);
}

void loop()
{
  delay(1000);
}