#include <stdint.h>
#include <gmock/gmock.h>
#include "DateTime.h"

#ifndef RTCLIB_H
#define RTCLIB_H

class DS1307
{
 public:
  DS1307();
  virtual void begin();
  DateTime now();
  virtual void adjust(const DateTime& dt);
};

class DS1307Mock : public DS1307 {
  public:
    MOCK_METHOD1(adjust, void(const DateTime& dt));
};

DS1307Mock* DS1307MockInstance();
void releaseDS1307Mock();

#endif
