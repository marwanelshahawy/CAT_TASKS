/*
 * main.c
 *
 *  Created on: Sep 8, 2024
 *      Author: MARWAN
 */
#include<util/delay.h>
typedef unsigned char u8;
#define DDRA *((volatile u8*)0x3A)
#define PORTA *((volatile u8*)0x3B)
#define PINA *((volatile u8*)0x39)
int main()
{
	 DDRA |=(1<<0);

 while(1){
	 PORTA |=(1<<0);
	 _delay_ms(1000);
	 PORTA &=~(1<<0);
	 _delay_ms(1000);

 }
 return 0;
}

