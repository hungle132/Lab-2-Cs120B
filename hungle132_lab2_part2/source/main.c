/*	Author: lab
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's  pins as inputs
	DDRC = 0xFF; PORTC = 0x00;

	unsigned char tmpA = 0x00;
	unsigned char tmpA1 = 0x00;
	unsigned char tmpA2 = 0x00;
	unsigned char tmpA3 = 0x00;
	unsigned char cntavail = 0x00;
    /* Insert your solution below */
    while (1) {
	tmpA = 0x01;//pin 0
	tmpA1 = 0x02; //pin 1
	tmpA2 = 0x04; //pin 2
	tmpA3 = 0x08;// pin 3
	if(tmpA == 0x01){
		tmpA==0x01;
		cntavail+=tmpA;
	}
	if(tmpA1 == 0x01){
		tmpA1==0x02;
		cntavail+=tmpA1;
	}
	if(tmpA2 == 0x01){
		tmpA2==0x04;
		cntavail+=tmpA2;
	}
	if(tmpA3 == 0x01){
		tmpA3==0x08;
		cntavail+=tmpA3;
	}
	PORTC=cntavail;
    }
    return 0;
}
