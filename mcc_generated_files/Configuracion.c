#include "Configuracion.h"
#include "tmr2.h"

void inicializaGlobalRB_I_Int(void){
    ANSELH          = 0; // RB 0..4 como I/O dixital
    INTCONbits.GIEH = 1; // Habilita interrupción alta prioridade
    INTCONbits.GIEL = 1; // Habilita interrupción baixa prioridade
    INTCON2bits.INTEDG0 = 1; // Flanco de subida para interrupcion
    
    //INTCON2bits.RBPU    = 0; // Habilita resistencias de pull-up
}

void inicializaRB0_I(){
    TRISBbits.RB0       = 1; // Entrada
    // WPUBbits.WPUB0      = 1; // Resistencia pull-up interna
    INTCONbits.INT0IF   = 0; // Flag de interrupcion
    INTCONbits.INT0IE   = 1; // Interrupcion habilitada
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
    PIE1bits.TMR2IE     = 0; //Deshabilita interrupción de timer 2
    
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
    ANSELbits.ANS0  = 1; //RA0 como analóxica
}
void inicializaAN1_REF(void){
    TRISAbits.RA1   = 1;
    ANSELbits.ANS1  = 1;
}
void inicializaAnalogicas(){
    PIR1bits.ADIF   = 0; // Borra flag de interrupcion
    PIE1bits.ADIE   = 0; // Habilita interrupción de entrada analóxica
    IPR1bits.ADIP   = 0; // Prioridade baixa na interrupción
    ADRES           = 0; // Borra rexistro de valor analóxico
    ADCON0bits.CHS  = 0; // Primeira entrada a ler a AN0
    ADCON0bits.ADON = 1; // Habilita ADC
    ADCON1bits.VCFG0 = 1; // Referencia negativa de tensión externa
    ADCON1bits.VCFG1 = 1; // Referencia positiva de tensión externa
    ADCON2bits.ADFM = 0; // Xustificación esquerda;
    ADCON2bits.ADCS = 0b111; // Reloxo propio
}

void inicializaRC6_USART(void){
    
}
void inicializaRC7_USART(void){
    
}

void inicializaPortD_Teclado(void){
    TRISD   = 0b11110000;   // 4 saidas e catro entradas dixitais no portD
    PORTD   = 0;            // Todas as saidas a 0
}
