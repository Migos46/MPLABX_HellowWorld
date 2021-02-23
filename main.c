

//#include "mcc_generated_files/mcc.h"

#include "Configuracion.h"
#include "main.h"

short actual;
short ultimaLectura0;
short ultimaLectura1;


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
            CCPR1H = ADRESH;
        }else{
            ultimaLectura1=(ADRESH<<2)+(ADRESL>>6);
          //  ultimaLectura1=ADRES;
            ADCON0bits.CHS=0;
            actual=0;
            CCPR2H = ADRESH;
        }
        ADCON0bits.GO=1;
        
    }
}

void main(void)
{
    short var1;
    short var2;
    inicializaManipuladorMagnetico();
    while (1)
    {
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