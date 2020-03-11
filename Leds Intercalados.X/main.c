/*
 * File:   main.c
 * Author: 19180091
 *
 * Created on 11 de Março de 2020, 08:51
 */
#include <xc.h>
#include "config.h" 
#define LED1 PORTDbits.RD0
#define DIR_LED1 TRISDbits.TRISD0
#define LED2 PORTDbits.RD1
#define DIR_LED2 TRISDbits.TRISD1
#define S1 PORTDbits.RD3
#define DIR_S1 TRISDbits.TRISD3
#define S2 PORTDbits.RD4
#define DIR_S2 TRISDbits.TRISD4
#define ENTRADA 1
#define SAIDA   0


void main(void) 
{
    PORTD=0;
    DIR_S1=ENTRADA;
    DIR_S2=ENTRADA;
    DIR_LED1=SAIDA;
    DIR_LED2=SAIDA;
    
    while(1)
    {
        if(S1==0 && S2==0)
        {
        LED1=!LED1;
        __delay_ms(500);
        LED2=!LED2;
        __delay_ms(500);
        }
        
        if(S1==1 && S2==1)
        {
        LED1=!LED1;
        __delay_ms(100);
        LED2=!LED2;
        __delay_ms(100);
        }
     
        if(S1==1 || S2==1)
        {
        LED1=!LED1;
        __delay_ms(250);
        LED2=!LED2;
        __delay_ms(250); 
        }    
    }
    return;
}