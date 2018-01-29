#include "arduino-mock/RTClib.h"

DS1307::DS1307() {}

void DS1307::adjust(const DateTime& dt) {
}

static DS1307Mock* p_DS1307Mock = NULL;

DS1307Mock* DS1307MockInstance() {
  if (!p_DS1307Mock) {
    p_DS1307Mock = new DS1307Mock();
  }
  return p_DS1307Mock;
}

void releaseDS1307Mock() {
  assert (p_DS1307Mock != NULL);
  if (p_DS1307Mock) {
    delete p_DS1307Mock;
    p_DS1307Mock = NULL;
  }
}

