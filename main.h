// This is a guard condition so that contents of this file are not included
// more than once.  
//#ifndef XC_HEADER_TEMPLATE_H
//#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  


#pragma config LVP=OFF, WDTEN=OFF, FOSC=INTIO67, PBADEN=OFF

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

//#endif	/* XC_HEADER_TEMPLATE_H */

#ifndef MAIN_H
#define MAIN_H
#endif

#include <string.h>
#include <stdlib.h>

//#pragma config LVP=OFF, WDTEN=OFF, FOSC=INTIO67, PBADEN=OFF
#define _XTAL_FREQ 4000000      // define el clock a 4M Hz para las rutinas ?delay?

void interrupt high_priority interrupcionAlta();
void interrupt low_priority interrupcionBaixa();
//#endif

