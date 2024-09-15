/*
 * main.c
 *
 *  Created on: Sep 8, 2024
 *      Author: MARWAN
 */
#include<util/delay.h>
#include "stdTypes.h"
#define DDRA *((volatile u8*)0x3A)
#define PORTA *((volatile u8*)0x3B)
#define PINA *((volatile u8*)0x39)

int main(void)
{
	DDRA =255;
	PORTA =0;
	s8 i=0;
	while(1)
	{
		//Turn on LEDs
		for(i=0;i<=7;i++)
		{
			PORTA |=(1<<i);
			_delay_ms(50);
		}
		//Turn off LEDs
		for(i=0;i<=7;i++)
		{
			PORTA &=~(1<<i);
			_delay_ms(50);
		}
	}
	return 0;
}
