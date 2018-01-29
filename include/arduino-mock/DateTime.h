#ifndef DATETIME_H
#define DATETIME_H

class DateTime
{
public:
  DateTime();
  DateTime(uint16_t y, uint8_t m, uint8_t d, uint8_t h, uint8_t mi, uint8_t s);
  ~DateTime();
  bool operator==(const DateTime other) const;
  uint8_t Hour;
  uint8_t Minute;
  uint8_t Second;
  uint8_t Day;
  uint8_t DayofWeek;
  uint8_t Month;
  uint16_t Year;
};

#endif
