/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F45K20
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set PosMotVer aliases
#define PosMotVer_TRIS                 TRISAbits.TRISA0
#define PosMotVer_LAT                  LATAbits.LATA0
#define PosMotVer_PORT                 PORTAbits.RA0
#define PosMotVer_ANS                  ANSELbits.ANS0
#define PosMotVer_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define PosMotVer_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define PosMotVer_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define PosMotVer_GetValue()           PORTAbits.RA0
#define PosMotVer_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define PosMotVer_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define PosMotVer_SetAnalogMode()      do { ANSELbits.ANS0 = 1; } while(0)
#define PosMotVer_SetDigitalMode()     do { ANSELbits.ANS0 = 0; } while(0)

// get/set PosMotRot aliases
#define PosMotRot_TRIS                 TRISAbits.TRISA1
#define PosMotRot_LAT                  LATAbits.LATA1
#define PosMotRot_PORT                 PORTAbits.RA1
#define PosMotRot_ANS                  ANSELbits.ANS1
#define PosMotRot_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define PosMotRot_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define PosMotRot_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define PosMotRot_GetValue()           PORTAbits.RA1
#define PosMotRot_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define PosMotRot_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define PosMotRot_SetAnalogMode()      do { ANSELbits.ANS1 = 1; } while(0)
#define PosMotRot_SetDigitalMode()     do { ANSELbits.ANS1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELbits.ANS2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELbits.ANS2 = 0; } while(0)

// get/set RA3 procedures
#define RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RA3_GetValue()              PORTAbits.RA3
#define RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define RA3_SetAnalogMode()         do { ANSELbits.ANS3 = 1; } while(0)
#define RA3_SetDigitalMode()        do { ANSELbits.ANS3 = 0; } while(0)

// get/set FCZMax aliases
#define FCZMax_TRIS                 TRISBbits.TRISB0
#define FCZMax_LAT                  LATBbits.LATB0
#define FCZMax_PORT                 PORTBbits.RB0
#define FCZMax_WPU                  WPUBbits.WPUB0
#define FCZMax_ANS                  ANSELHbits.ANS12
#define FCZMax_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define FCZMax_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define FCZMax_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define FCZMax_GetValue()           PORTBbits.RB0
#define FCZMax_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define FCZMax_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define FCZMax_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define FCZMax_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define FCZMax_SetAnalogMode()      do { ANSELHbits.ANS12 = 1; } while(0)
#define FCZMax_SetDigitalMode()     do { ANSELHbits.ANS12 = 0; } while(0)

// get/set FCZMin aliases
#define FCZMin_TRIS                 TRISBbits.TRISB1
#define FCZMin_LAT                  LATBbits.LATB1
#define FCZMin_PORT                 PORTBbits.RB1
#define FCZMin_WPU                  WPUBbits.WPUB1
#define FCZMin_ANS                  ANSELHbits.ANS10
#define FCZMin_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define FCZMin_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define FCZMin_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define FCZMin_GetValue()           PORTBbits.RB1
#define FCZMin_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define FCZMin_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define FCZMin_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define FCZMin_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define FCZMin_SetAnalogMode()      do { ANSELHbits.ANS10 = 1; } while(0)
#define FCZMin_SetDigitalMode()     do { ANSELHbits.ANS10 = 0; } while(0)

// get/set FCAux aliases
#define FCAux_TRIS                 TRISBbits.TRISB2
#define FCAux_LAT                  LATBbits.LATB2
#define FCAux_PORT                 PORTBbits.RB2
#define FCAux_WPU                  WPUBbits.WPUB2
#define FCAux_ANS                  ANSELHbits.ANS8
#define FCAux_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define FCAux_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define FCAux_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define FCAux_GetValue()           PORTBbits.RB2
#define FCAux_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define FCAux_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define FCAux_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define FCAux_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define FCAux_SetAnalogMode()      do { ANSELHbits.ANS8 = 1; } while(0)
#define FCAux_SetDigitalMode()     do { ANSELHbits.ANS8 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)

// get/set SentidoMotVer aliases
#define SentidoMotVer_TRIS                 TRISCbits.TRISC3
#define SentidoMotVer_LAT                  LATCbits.LATC3
#define SentidoMotVer_PORT                 PORTCbits.RC3
#define SentidoMotVer_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SentidoMotVer_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SentidoMotVer_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SentidoMotVer_GetValue()           PORTCbits.RC3
#define SentidoMotVer_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SentidoMotVer_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)

// get/set SentidoMotRot aliases
#define SentidoMotRot_TRIS                 TRISCbits.TRISC4
#define SentidoMotRot_LAT                  LATCbits.LATC4
#define SentidoMotRot_PORT                 PORTCbits.RC4
#define SentidoMotRot_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SentidoMotRot_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SentidoMotRot_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SentidoMotRot_GetValue()           PORTCbits.RC4
#define SentidoMotRot_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SentidoMotRot_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set TecladoPin1In aliases
#define TecladoPin1In_TRIS                 TRISDbits.TRISD0
#define TecladoPin1In_LAT                  LATDbits.LATD0
#define TecladoPin1In_PORT                 PORTDbits.RD0
#define TecladoPin1In_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define TecladoPin1In_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define TecladoPin1In_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define TecladoPin1In_GetValue()           PORTDbits.RD0
#define TecladoPin1In_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define TecladoPin1In_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)

// get/set TecladoPin2in aliases
#define TecladoPin2in_TRIS                 TRISDbits.TRISD1
#define TecladoPin2in_LAT                  LATDbits.LATD1
#define TecladoPin2in_PORT                 PORTDbits.RD1
#define TecladoPin2in_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define TecladoPin2in_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define TecladoPin2in_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define TecladoPin2in_GetValue()           PORTDbits.RD1
#define TecladoPin2in_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define TecladoPin2in_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)

// get/set TecladoPin3In aliases
#define TecladoPin3In_TRIS                 TRISDbits.TRISD2
#define TecladoPin3In_LAT                  LATDbits.LATD2
#define TecladoPin3In_PORT                 PORTDbits.RD2
#define TecladoPin3In_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define TecladoPin3In_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define TecladoPin3In_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define TecladoPin3In_GetValue()           PORTDbits.RD2
#define TecladoPin3In_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define TecladoPin3In_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)

// get/set TecladoPin4In aliases
#define TecladoPin4In_TRIS                 TRISDbits.TRISD3
#define TecladoPin4In_LAT                  LATDbits.LATD3
#define TecladoPin4In_PORT                 PORTDbits.RD3
#define TecladoPin4In_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define TecladoPin4In_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define TecladoPin4In_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define TecladoPin4In_GetValue()           PORTDbits.RD3
#define TecladoPin4In_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define TecladoPin4In_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)

// get/set TecladoPin1Out aliases
#define TecladoPin1Out_TRIS                 TRISDbits.TRISD4
#define TecladoPin1Out_LAT                  LATDbits.LATD4
#define TecladoPin1Out_PORT                 PORTDbits.RD4
#define TecladoPin1Out_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define TecladoPin1Out_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define TecladoPin1Out_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define TecladoPin1Out_GetValue()           PORTDbits.RD4
#define TecladoPin1Out_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define TecladoPin1Out_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)

// get/set TecladoPin2Out aliases
#define TecladoPin2Out_TRIS                 TRISDbits.TRISD5
#define TecladoPin2Out_LAT                  LATDbits.LATD5
#define TecladoPin2Out_PORT                 PORTDbits.RD5
#define TecladoPin2Out_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define TecladoPin2Out_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define TecladoPin2Out_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define TecladoPin2Out_GetValue()           PORTDbits.RD5
#define TecladoPin2Out_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define TecladoPin2Out_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)

// get/set TecladoPin3Out aliases
#define TecladoPin3Out_TRIS                 TRISDbits.TRISD6
#define TecladoPin3Out_LAT                  LATDbits.LATD6
#define TecladoPin3Out_PORT                 PORTDbits.RD6
#define TecladoPin3Out_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define TecladoPin3Out_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define TecladoPin3Out_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define TecladoPin3Out_GetValue()           PORTDbits.RD6
#define TecladoPin3Out_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define TecladoPin3Out_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)

// get/set TecladoPin4Out aliases
#define TecladoPin4Out_TRIS                 TRISDbits.TRISD7
#define TecladoPin4Out_LAT                  LATDbits.LATD7
#define TecladoPin4Out_PORT                 PORTDbits.RD7
#define TecladoPin4Out_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define TecladoPin4Out_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define TecladoPin4Out_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define TecladoPin4Out_GetValue()           PORTDbits.RD7
#define TecladoPin4Out_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define TecladoPin4Out_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/