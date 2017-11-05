/*
  Car.h - Library for remote car.
  Created by Rushan Arunod, November 5, 2017.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Car.h"

#include <Servo.h>

Servo myservo;
int def_angle = 90;
int turn_angle = 20;

Car::Car(int pin,int delta)
{
  myservo.attach(pin);
  _pin = pin;
  _delta = delta;
}

void Car::left(int count)
{
  myservo.write(def_angle-(turn_angle*count)+_delta);   
}

void Car::right(int count)
{
  myservo.write(def_angle+(turn_angle*count)+_delta);
}