#ifndef DS18B20_H_
#define DS18B20_H_


#include "stm32f1xx_hal.h"


void ds18b20_init(void);

void ds18b20_start_conversion(void);

float ds18b20_get_temperature(void);




#endif


