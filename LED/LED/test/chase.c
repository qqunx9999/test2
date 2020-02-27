#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
void init_peri() {
	DDRC |= (1<<PC2) | (1<<PC1) |  (1<<PC0);
	DDRC &= ~((1<<PC3)|(1<<PC4));
}

void set_led_value(uint8_t value) 
{
	PORTC &= ~(0b111);
	PORTC |= (value & 0b111);
}

int main() {
	init_peri();
	while (1){
		set_led_value(0b001);
		_delay_ms(500);
		set_led_value(0b010);
		_delay_ms(500);
		set_led_value(0b100);
		_delay_ms(500);
	}
}
