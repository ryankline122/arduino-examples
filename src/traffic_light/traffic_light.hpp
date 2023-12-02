#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

#include <Arduino.h>

#define RED 13
#define YELLOW 12
#define GREEN 8 

void toggle_LED(int pin, int delay);
void setup_traffic_LED(int red, int yellow, int green);
void traffic_loop();

#endif