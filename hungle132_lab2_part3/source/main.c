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
	unsigned char cntavail = 0x04;
	unsigned char val = 0x00
    /* Insert your solution below */
    while (1) {
	cntavail = 0x04;
	val = 0x00;
	tmpA = PINA & 0x01;//pin 0
	tmpA1 = PINA & 0x02; //pin 1
	tmpA2 = PINA & 0x04; //pin 2
	tmpA3 = PINA & 0x08;// pin 3

	if(tmpA == 1){
		val++;
	}

	if(tmpA1 == 2){
		
		val++;
	}
	if(tmpA2 == 4){
	
		val++;
	}
	if(tmpA3 == 8){
		
		val++;
	}
	    cntavail = cntavail-val;
	    
	if(cntavail == 0){
	PORTC = 0x80;
	}
	else{
	PORTC = cntavail;
	}
    }
    return 0;
	
		
}
