/*
  Semaphore.h - Library for basic red-yellow-green semaphore.
  Created by Angel Arancibia, July 23, 2013.
  Released into the public domain.
*/


#ifndef Semaphore_h
#define Semaphore_h

#include "Arduino.h"

class Semaphore {
  public:
    semaphore(int red_pin, int yellow_pin, int green_pin);

    void red();
    void yellow();
    void green();
    void red_yellow();
    void off();

  private:
    int _red_pin;
    int _yellow_pin;
    int _green_pin;
};

#endif