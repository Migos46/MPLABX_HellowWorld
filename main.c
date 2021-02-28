

//#include "mcc_generated_files/mcc.h"

#include "Configuracion.h"
#include "main.h"

short actual;
short ultimaLectura0;
short ultimaLectura1;
int anteriorRB4;
int anteriorRB5;
int turnoTecla=0;
int teclaPulsada;

void interrupt high_priority interrupcionAlta(){
    if (INTCONbits.INT0IF){
        INTCONbits.INT0IF = 0;
    }
    if (INTCON3bits.INT1IF){
        INTCON3bits.INT1IF = 0;
    }
    if (INTCON3bits.INT2IF){
        INTCON3bits.INT2IF = 0;
    }
}
void interrupt low_priority interrupcionBaixa(){
    if (PIR1bits.ADIF){
        PIR1bits.ADIF=0;
        if(actual == 0){
            ultimaLectura0=(ADRESH<<2)&ADRESL;
            ultimaLectura0=ADRES;
            actual=1;
            ADCON0bits.CHS=1;
            CCPR1L = ADRESH;
            if(CCPR1L > 250) CCPR1L=250;
        }else{
            ultimaLectura1=(ADRESH<<2)+(ADRESL>>6);
          //  ultimaLectura1=ADRES;
            ADCON0bits.CHS=0;
            actual=0;
            CCPR2L = ADRESH;
            if(CCPR2L > 250) CCPR2L=250;
        }
        ADCON0bits.GO=1;
    }
    if (INTCONbits.RBIF){
       INTCONbits.RBIF = 0;
       if(!anteriorRB4 & PORTBbits.RB4){
           Nop();
           //flanco subida en RB4
       }
       if(!anteriorRB5 & PORTBbits.RB5){
           Nop();
           //flanco subida en RB4
       }
       anteriorRB4 = PORTBbits.RB4;
       anteriorRB5 = PORTBbits.RB5;
       INTCONbits.RBIF = 0;
    }
}

void teclado(void){
    int muestraVariable;
    teclaPulsada=0x10;
    switch (turnoTecla){
        case 0:
            if(PORTDbits.RD0) teclaPulsada=12;
            if(PORTDbits.RD1) teclaPulsada=13;
            if(PORTDbits.RD2) teclaPulsada=14;
            if(PORTDbits.RD3) teclaPulsada=15;
            break;
        case 1:
            if(PORTDbits.RD0) teclaPulsada=0;
            if(PORTDbits.RD1) teclaPulsada=1;
            if(PORTDbits.RD2) teclaPulsada=2;
            if(PORTDbits.RD3) teclaPulsada=3;
            break;
        case 2:
            if(PORTDbits.RD0) teclaPulsada=4;
            if(PORTDbits.RD1) teclaPulsada=5;
            if(PORTDbits.RD2) teclaPulsada=6;
            if(PORTDbits.RD3) teclaPulsada=7;
            break;
        case 3:
            if(PORTDbits.RD0) teclaPulsada=8;
            if(PORTDbits.RD1) teclaPulsada=9;
            if(PORTDbits.RD2) teclaPulsada=10;
            if(PORTDbits.RD3) teclaPulsada=11;
            break;
    }
    muestraVariable=teclaPulsada;
    if (teclaPulsada<0x10){
        Nop();
    }
    LATD = 0;
    switch (turnoTecla){
        case 0:
            PORTDbits.RD4 =1;
            break;
        case 1:
            PORTDbits.RD5=1;
            break;
        case 2:
            PORTDbits.RD6=1;
            break;
        case 3:
            PORTDbits.RD7=1;
            break;
    }
    turnoTecla += 1;
    if(turnoTecla>3) turnoTecla=0;
}

void main(void)
{
    short var1;
    short var2;
    inicializaManipuladorMagnetico();
    anteriorRB4 = PORTBbits.RB4;
    anteriorRB5 = PORTBbits.RB5;
    while (1)
    {
        teclado();
        var1=ultimaLectura0;
        var2=ultimaLectura1;
        //if (~ADCON0bits.DONE){
        //    Nop();
        //}
        Nop();
        // Add your application code
    }
}
/**
 End of File
*/