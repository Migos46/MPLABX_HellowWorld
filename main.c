/*
 * File:   main.c
 * Author: mike
 *
 * Created on February 6, 2021, 12:20 PM
 */


#include <xc.h>
#include "main.h"

void Setup(){
    TRISD = 0x00;   // PORTD set as output
    LATD  = 0x01;   // Write all PORTD to 0
}

void main(void) {
    Setup();
    
    while(1){
        LATD <<= 1;         // Shift 1 bit to the left
        __delay_ms(1);     // Delay of 50 ms
    }
    return;
}

