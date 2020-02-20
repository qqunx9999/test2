MCU = atmega328p

%.hex: %.elf
	avr-objcopy -j .text -j .data -O ihex $< $@

%.flash: %.hex
	avrdude -p $(MCU) -c usbasp -U flash:w:$<

%.elf: %.o peri.o
	avr-gcc -mmcu=$(MCU) -02 -o $@ $^

%.o: %.c peri.h
	avr-gcc -mmcu=$(MCU) -02 -c -o $@ $<
clean:
	rm *~ *.o *.elf *.hex
