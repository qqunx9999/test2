#include <avr/io.h>
#include "peri.h"

void init_peri() {
	DDRC |= (1<<PC2) | (1<<PC1) |  (1<<PC0);
	DDRC &= ~((1<<PC3)|(1<<PC4));
}

void set_led_value(uint8_t value) 
{
	PORTC &= ~(0b111);
	PORTC |= (value & 0b111);
}
