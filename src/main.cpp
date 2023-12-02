#include <Arduino.h>
#include "traffic_light/traffic_light.hpp"
#include "servo/servo.hpp"

void setup() {
  // setup_traffic_LED(RED, YELLOW, GREEN);
  setup_servo();
  Serial.begin(115200);
}

void loop() {
  // traffic_loop();
  servo_read();
}