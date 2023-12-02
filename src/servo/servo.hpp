#ifndef SERVO_HPP
#define SERVO_HPP

#include <Arduino.h>
#include <Servo.h>

#define MOTOR 7
#define POTENTIOMETER A0

extern int angle;
extern int reading;

extern Servo servo;

void setup_servo();
void servo_read();

#endif
