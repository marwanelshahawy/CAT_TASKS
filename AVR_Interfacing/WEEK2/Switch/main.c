/*
 * main.c
 *
 *  Created on: Sep 16, 2024
 *      Author: MARWAN
 */
/*
 * main.c
 *
 *  Created on: Sep 16, 2024
 *      Author: MARWAN
 */
#include<util/delay.h>
#include "stdTypes.h"
#define DDRA *((volatile u8*)0x3A)
#define PORTA *((volatile u8*)0x3B)
#define PINA *((volatile u8*)0x39)

#define DDRB *((volatile u8*)0x37)
#define PORTB *((volatile u8*)0x38)
#define PINB *((volatile u8*)0x36)

#define DDRD *((volatile u8*)0x31)
#define PORTD *((volatile u8*)0x32)
#define PIND *((volatile u8*)0x30)

int main(void)
{
	DDRA =0xff;
	PORTA=0;
	DDRB=0;
	PORTB=0xff;

	while(1)
	{
		if((((PINB)>>0)&1)==0)
		{
			PORTA |=(1<<0);
			while((((PINB)>>0)&1)==0);
		}else
		{
			PORTA &=~(1<<0);
		}

		if((((PINB)>>1)&1)==0)
		{
			PORTA |=(1<<1);
			while((((PINB)>>1)&1)==0);
		}else
		{
			PORTA &=~(1<<1);
		}

		if((((PINB)>>2)&1)==0)
		{
			PORTA |=(1<<0);
			PORTA |=(1<<1);
			while((((PINB)>>2)&1)==0);
		}else
		{
					PORTA &=~(1<<0);
					PORTA &=~(1<<1);
		}
	}
	return 0;
}


