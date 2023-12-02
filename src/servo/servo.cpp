#include <Arduino.h>
#include <Servo.h>

#define MOTOR 7
#define POTENTIOMETER A0

int angle = 0;
int reading = 0;

Servo servo;

void setup_servo() {
    servo.attach(MOTOR);
}

void servo_read() {
    reading = analogRead(POTENTIOMETER); // read the analog input
    angle = map(reading, 0, 1023, 0, 180); // map the input to a value between 0 and 180 degrees
    servo.write(angle); // tell the servo to go to the set position
    delay(15); // wait 15 ms for the servo to reach the position
}