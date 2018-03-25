//
// Created by Mikhail Petrov on 13/03/2018.
//

#ifndef AVR_WDT_H
#define AVR_WDT_H

#define WDTO_15MS 15

void wdt_disable();
void wdt_enable(uint16_t);

#endif //AVR_WDT_H
