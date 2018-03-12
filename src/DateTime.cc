#include "arduino-mock/DateTime.h"

DateTime::DateTime() {
}

DateTime::DateTime(uint16_t y, uint8_t m, uint8_t d, uint8_t h, uint8_t mi, uint8_t s) {
  Hour = h;
  Minute = mi;
  Second = s;
  Day = d;
  Month = m;
  Year = y;
}

DateTime::~DateTime() {
}

bool DateTime::operator==(const DateTime other) const {
  return (Year == other.Year &&
          Month == other.Month &&
          Day == other.Day &&
          Hour == other.Hour &&
          Minute == other.Minute &&
          Second == other.Second);
}

uint32_t DateTime::unixtime() {
  return 1520876026;
}
