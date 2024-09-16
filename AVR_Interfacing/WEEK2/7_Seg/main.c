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
	u8 seg[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	DDRB =0xff;
	PORTB=0;
	DDRA=0;
	PORTA=0xff;
	s8 i=-1;
	while(1)
	{
		if((((PINA)>>0)&1)==0 && i<9)
		{
			PORTB=seg[++i];
			while((((PINA)>>0)&1)==0);
		}
		if((((PINA)>>1)&1)==0 && i>0)
		{
			PORTB=seg[--i];
			while((((PINA)>>1)&1)==0);
		}
	}
	return 0;
}
