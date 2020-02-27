#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include "peri.h"

int main() {
	uint8_t count= 0;
	init_peri();

	while(1){
		set_led_value(count);
		count++;
		_delay_ms(500);
}
}
