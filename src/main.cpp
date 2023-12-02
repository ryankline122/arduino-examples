#include <Arduino.h>
#include "traffic_light/traffic_light.hpp"

#define RED 13
#define YELLOW 12
#define GREEN 8 

void setup() {
  setup_traffic_LED(RED, YELLOW, GREEN);
}

void loop() {
  traffic_loop();
}