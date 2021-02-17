/* 
 * File:   Inicializacions.h
 * Author: eriveiro
 *
 * Created on 15 de febrero de 2021, 14:10
 */

#ifndef INICIALIZACIONS_H
#define	INICIALIZACIONS_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* INICIALIZACIONS_H */

#include <xc.h>

enum AnselHConf{
    RB0AN = 0b10000,
    RB1AN = 0b100,
    RB2AN = 0b1,
    RB3AN = 0b10,
    RB4AN = 0b1000
};
enum AnselConf{
    RA0AN = 0b1,
    RA1AN = 0b10,
    RA2AN = 0b100,
    RA3AN = 0b1000,
    RA5AN = 0b10000,
    RE0AN = 0b100000,
    RE1AN = 0b1000000,
    RE2AN = 0b10000000
}; 

enum SlrconConf{
    PALimited = 0b1,
    PBLimited = 0b10,
    PCLimited = 0b100,
    PDLimited = 0b1000,
    PELimited = 0b10000,
};

enum preescaladoT0{
    Pre2 = 0,
    pre4,
    pre8,
    pre16,
    pre32,
    pre64,
    pre128,
    pre256
};