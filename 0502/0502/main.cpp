/*
 * 0502.cpp
 *
 * Created: 2018-05-02 오후 3:58:59
 * Author : stc_19
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
	
	DDRD = 0xff;
	PORTD = 0xff;
	while (1)
	{
		PORTD = 0x00;
		_delay_ms(300);
		PORTD = 0xff;
		_delay_ms(300);
	}
}

