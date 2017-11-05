/*
  Car.h - Library for remote car.
  Created by Rushan Arunod, November 5, 2017.
  Released into the public domain.
*/
#ifndef Car_h
#define Car_h

#include "Arduino.h"

class Car
{
  public:
    Car(int pin,int delta);
    void left(int count);
    void right(int count);
  private:
    int _pin;
	int _delta;
};

#endif