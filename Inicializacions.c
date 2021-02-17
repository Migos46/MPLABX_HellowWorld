
#include "Inicializacions.h"

int test(void){
   return 0; 
}

void configuraPortB(char tris, char ANSetup){
    TRISB = tris;
    ANSELH = ANSetup;
}

void configuraPortA(char tris, char ANSetup){
    TRISA = tris;
    ANSEL = ANSetup;
}

void configuraPortC(char tris){
    TRISC = tris;
}

void configuraPortD(char tris){
    TRISD = tris;
}

void configuraPortE(char tris, char ANSetup){
    TRISE = tris;
    ANSEL = ANSetup;
}

void confTimer0(char bits8, char clockExterno, char flancoBaixada, char habilitaPreescala, char valorPReescalado, char prioridade){
    T0CONbits.T08BIT=bits8;
    if(clockExterno){ // xe é sinal externo temos que habilitar a entrada do mesmo
       ;
    }
    T0CONbits.T0CS=clockExterno;
    T0CONbits.T0SE = flancoBaixada;
    T0CONbits.PSA=habilitaPreescala;
    T0CONbits.T0PS=valorPReescalado;
} 

void confTimer1(){
    
}

void confTimer2(){
    
}

void confTimer3(){
    
}