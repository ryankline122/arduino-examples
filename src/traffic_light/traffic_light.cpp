#include <Arduino.h>

#define RED 13
#define YELLOW 12
#define GREEN 8 

void toggle_LED(int pin, int delay);
void setup_traffic_LED(int red, int yellow, int green);
void traffic_loop();

void setup_traffic_LED(int red, int yellow, int green) {
    pinMode(RED, OUTPUT);
    pinMode(YELLOW, OUTPUT);
    pinMode(GREEN, OUTPUT);
}

void toggle_LED(int pin, int time) {
    digitalWrite(pin, HIGH);
    delay(time);
    digitalWrite(pin, LOW);
}

void traffic_loop() {
    toggle_LED(GREEN, 3000);
    toggle_LED(YELLOW, 3000);
    toggle_LED(RED, 3000);
}