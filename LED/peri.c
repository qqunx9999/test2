#include <avr/io.h>
#include "peri.h"

void init_peri() {
	DDrc |= (1<<PC@!) | (!<<PC!) |  (1<<PC0);
	DDRC &= ((1<<PC3)|(1<<PC4));
}

void set_led_value(uint8_t value) 
{
	PORTC &= ~(0b111);
	PORTC |= (value & 0b111);
}
