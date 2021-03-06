#include "Configuracion.h"


void inicializaGlobalRB_I_Int(void){
    ANSELH          = 0; // RB 0..4 como I/O dixital
    INTCONbits.GIEH = 1; // Habilita interrupci�n alta prioridade
    INTCONbits.GIEL = 1; // Habilita interrupci�n baixa prioridade
    RCONbits.IPEN   = 1; //Habilita niveis de interrupci�n
    
    //INTCON2bits.RBPU    = 0; // Habilita resistencias de pull-up
}

void inicializaRB0_I(){
    TRISBbits.RB0       = 1; // Entrada
    // WPUBbits.WPUB0      = 1; // Resistencia pull-up interna
    INTCONbits.INT0IF   = 0; // Flag de interrupcion
    INTCONbits.INT0IE   = 1; // Interrupcion habilitada
    INTCON2bits.INTEDG0 = 1; // Flanco de subida para interrupcion
}
void inicializaRB1_I(void){
    TRISBbits.RB1       = 1;
    //WPUBbits.WPUB1      = 1;
    INTCON3bits.INT1F   = 0;
    INTCON3bits.INT1E   = 1;
    INTCON2bits.INTEDG1 = 1;
}
void inicializaRB2_I(void){
    TRISBbits.RB2       = 1;
    //WPUBbits.WPUB2      = 1;
    INTCON3bits.INT2F   = 0;
    INTCON3bits.INT2E   = 1;
    INTCON2bits.INTEDG2 = 1;
}

void inicializaRB4_5_O(void){
    TRISBbits.RB4 = 1;
    TRISBbits.RB5 = 1;
    
    INTCONbits.RBIE = 1;
    INTCONbits.RBIF = 0;
    
    INTCON2bits.RBIP = 0;
    IOCBbits.IOCB4 =1;
    IOCBbits.IOCB5 = 1;
}

void inicializaRC3_O(void){
    TRISCbits.RC3   = 0;
    PORTCbits.RC3   = 0;
}
void inicializaRC4_O(void){
    TRISCbits.RC4   = 0;
    PORTCbits.RC4   = 0;
}

void inicializaRC1_PWM(void){
    TRISCbits.RC1       = 0;
    CCP2CONbits.CCP2M   = 0b1100; //PWM mode
    CCP2CONbits.DC2B    = 0b00; //Bits baixos para o valor do pwm
    CCPR2L          = 0;    //Bits altos para o valor do pwm
    CCPR2H          = 0;
}
void inicializaRC2_PWM(void){
    TRISCbits.RC2       = 0;
    CCP1CONbits.P1M     = 0b00;    //Single output
    CCP1CONbits.CCP1M   = 0b1100; //PWM mode
    CCP1CONbits.DC1B    = 0b00; //Bits baixos para o valor do pwm
    CCPR1L          = 0;    //Bits altos para o valor do pwm
    CCPR1H          = 0;
}

void inicializaTimer2_PWM(void){
    PIE1bits.TMR2IE     = 0; //Deshabilita interrupci�n de timer 2
    
    //Tmax = Tosc * 256 * 4 * preescalado = 4 * 1/(4*10^6) * 256 *4 = 1.024 ms 
    // Periodo = 4 * Tosc * (PR2+1) * TMR2Preescala
    // 1 ms = 4 * (1/(4*10^6) * 10^3) (ms) * 4 * PR2+1 => PR2 = 4*10^6/(4*10^3*4) -1
    // PR2 = 249
    PR2     = 249;          // Valor da conta para un ciclo de 1 ms
    TMR2    = 0;            // Contador do timer = 0
    T2CONbits.T2CKPS = 0b01; // Preescalado = 4
    T2CONbits.TMR2ON = 1;   //Inicializa Timer 2
           
}

void inicializaAN0_I(void){
    TRISAbits.RA0   = 1; //RA0 como entrada
    ANSELbits.ANS0  = 1; //RA0 como anal�xica
}
void inicializaAN1_I(void){
    TRISAbits.RA1   = 1;
    ANSELbits.ANS1  = 1;
}
void inicializaAnalogicas(){
    PIR1bits.ADIF   = 0; // Borra flag de interrupcion
    PIE1bits.ADIE   = 1; // Habilita interrupci�n de entrada anal�xica
    IPR1bits.ADIP   = 0; // Prioridade baixa na interrupci�n
    //TRISAbits.RA2   = 1; // Entrada de referencia positiva
    //TRISAbits.RA3   = 1; // Entrada de referencia negativa
    ADRES           = 0; // Borra rexistro de valor anal�xico
    ADCON0bits.CHS  = 0; // Primeira entrada a ler a AN0
    ADCON0bits.ADON = 1; // Habilita ADC
   // ADCON1bits.VCFG0 = 1; // Referencia negativa de tensi�n externa
   // ADCON1bits.VCFG1 = 1; // Referencia positiva de tensi�n externa
    ADCON2bits.ADFM = 0; // Xustificaci�n esquerda;
    ADCON2bits.ADCS = 0b111; // Reloxo propio
}

void inicializaRB7_O(void){
    TRISBbits.RB7       = 0;
    LATBbits.LATB7      = 0;
}

// RC0 e RC5 como sa'eddas para os rel\'e9s das l\e1mparas incandescentes
void inicializaRC0_O(void){
    TRISCbits.RC0   = 0;
    PORTCbits.RC0   = 0;
}
void inicializaRC5_O(void){
    TRISCbits.RC5   = 0;
    PORTCbits.RC5   = 0;
}

void inicializaRC6_USART(void){
    
}
void inicializaRC7_USART(void){
    
}

void inicializaPortD_Teclado(void){
    TRISD   = 0b00001111;   // 4 saidas e catro entradas dixitais no portD
    PORTD   = 0;            // Todas as saidas a 0
}

void inicializaManipuladorMagnetico(){
    inicializaGlobalRB_I_Int();
    inicializaRB0_I();
    inicializaRB1_I();
    inicializaRB2_I();
    inicializaRC1_PWM();
    inicializaRC2_PWM();
    inicializaRC3_O();
    inicializaRC4_O();
    inicializaAnalogicas();
    inicializaAN0_I();
    inicializaAN1_I();
    inicializaTimer2_PWM();
    inicializaRC0_O();
    inicializaRC5_O();
    inicializaRC0_O();
    inicializaRB4_5_O();
    inicializaPortD_Teclado();
    ADCON0bits.GO = 1;
}