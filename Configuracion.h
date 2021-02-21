
#ifndef CONFIGURACION_H
#define	CONFIGURACION_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#include <xc.h>
void inicializaGlobalRB_I_Int(void);

void inicializaRB0_I(void);
void inicializaRB1_I(void);
void inicializaRB2_I(void);

void inicializaRC3_O(void);
void inicializaRC4_O(void);

void inicializaRC1_PWM(void);
void inicializaRC2_PWM(void);

void inicializaTimer2_PWM(void);

void inicializaAN0_I(void);
void inicializaAN1_I(void);

void inicializaAnalogicas(void);

void inicializaRC6_USART(void);
void inicializaRC7_USART(void);

void inicializaPortD_Teclado(void);


#endif	/* CONFIGURACION_H */

