#include "Arduino.h"
#include "Bettary.h"

Bettary_SPP::Bettary_SPP(int rx, int tx)
{
  SoftwareSerial BTSerial(rx, tx);
  _rx = rx;
  _tx = tx;
}

void Bettary_SPP::print_serial()
{
  /* code */
}
