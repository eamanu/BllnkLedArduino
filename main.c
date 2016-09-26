/**
 *  @file main.c
 *  @details This software just blink led in Atmega2560
 *  @author Arias Emmanuel
 *	@date Mar 9, 2016
 *	@copyright GNU Public Lincense
 *
 */

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 16000000UL

/**
 * @brief Configuracion del Hardware. Define como salida el Pin 7 del PORTB. Es decir el pin 13 de Arduino Atmega2560.
 * @param none
 * @return void
 */

void configHardware(){
	DDRB |= (1<<PORTB7);
}

/**
 * @brief Main.
 */
int main(){

	configHardware();

	while(1){
		PORTB |= (1<<PORTB7) ;
		_delay_ms(100);

		PORTB &= ~(1<<PORTB7);
		_delay_ms(100);
	}
}
