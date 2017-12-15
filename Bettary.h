/*
  Bettary.h
  Created by CO0Ki3, Dep 5, 2017.
  Released into the public domain.
*/
#ifndef Bettary_h
#define Bettary_h
#include "Arduino.h"
#include <SoftwareSerial.h>

class Bettary_SPP{
  public:
    SoftwareSerial BTSerial(rx, tx);
    void print_serial();
    void print_Bluetooth();
  private:
    int _rx = 2;
    int _tx = 3;
};

#endif
