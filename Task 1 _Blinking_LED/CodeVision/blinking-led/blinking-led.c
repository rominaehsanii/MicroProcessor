/*
 * blinking-led.c
 *
 * Created: 12/12/2020 2:03:20 AM
 * Author: R
 */

#include <io.h>
#include <delay.h>

void main(void)
{
DDRB.0 = 1;     //PORT KHOROOJI
PORTB.0 = 0;
DDRB.1 = 1;     //PORT KHOROOJI
PORTB.1 = 0;
DDRB.2 = 1;     //PORT KHOROOJI
PORTB.2 = 0;
DDRB.3 = 1;     //PORT KHOROOJI
PORTB.3 = 0;
DDRB.4 = 1;     //PORT KHOROOJI
PORTB.4 = 0;
DDRB.5 = 1;     //PORT KHOROOJI
PORTB.5 = 0;
DDRB.6 = 1;     //PORT KHOROOJI
PORTB.6 = 0;
DDRB.7 = 1;     //PORT KHOROOJI
PORTB.7 = 0;




DDRA.0 = 0;     //PORTE VOROODI
PORTA.0 = 0;    

while (1)
    {
    // Please write your application code here 
    if(PINA.0 == 1){ 
        PORTB.0 = 1;
        PORTB.1 = 0;
        PORTB.2 = 0;
        PORTB.3 = 0;
        PORTB.4 = 0;
        PORTB.5 = 0;
        PORTB.6 = 0;
        PORTB.7 = 0;
        delay_ms(500);
        
        PORTB.0 = 0;
        PORTB.1 = 1;
        PORTB.2 = 0;
        PORTB.3 = 0;
        PORTB.4 = 0;
        PORTB.5 = 0;
        PORTB.6 = 0;
        PORTB.7 = 0;
        delay_ms(500); 
        
        PORTB.0 = 0;
        PORTB.1 = 0;
        PORTB.2 = 1;
        PORTB.3 = 0;
        PORTB.4 = 0;
        PORTB.5 = 0;
        PORTB.6 = 0;
        PORTB.7 = 0;
        delay_ms(500);
        
        PORTB.0 = 0;
        PORTB.1 = 0;
        PORTB.2 = 0;
        PORTB.3 = 1;
        PORTB.4 = 0;
        PORTB.5 = 0;
        PORTB.6 = 0;
        PORTB.7 = 0;
        delay_ms(500);
        
        PORTB.0 = 0;
        PORTB.1 = 0;
        PORTB.2 = 0;
        PORTB.3 = 0;
        PORTB.4 = 1;
        PORTB.5 = 0;
        PORTB.6 = 0;
        PORTB.7 = 0;
        delay_ms(500);
        
        PORTB.0 = 0;
        PORTB.1 = 0;
        PORTB.2 = 0;
        PORTB.3 = 0;
        PORTB.4 = 0;
        PORTB.5 = 1;
        PORTB.6 = 0;
        PORTB.7 = 0;
        delay_ms(500);
        
        PORTB.0 = 0;
        PORTB.1 = 0;
        PORTB.2 = 0;
        PORTB.3 = 0;
        PORTB.4 = 0;
        PORTB.5 = 0;
        PORTB.6 = 1;
        PORTB.7 = 0;
        delay_ms(500);
        
        PORTB.0 = 0;
        PORTB.1 = 0;
        PORTB.2 = 0;
        PORTB.3 = 0;
        PORTB.4 = 0;
        PORTB.5 = 0;
        PORTB.6 = 0;
        PORTB.7 = 1;
        delay_ms(500); 
        
        PORTB.0 = 0;
        PORTB.1 = 0;
        PORTB.2 = 0;
        PORTB.3 = 0;
        PORTB.4 = 0;
        PORTB.5 = 0;
        PORTB.6 = 1;
        PORTB.7 = 0;
        delay_ms(500); 
        
        PORTB.0 = 0;
        PORTB.1 = 0;
        PORTB.2 = 0;
        PORTB.3 = 0;
        PORTB.4 = 0;
        PORTB.5 = 1;
        PORTB.6 = 0;
        PORTB.7 = 0;
        delay_ms(500);
        
        PORTB.0 = 0;
        PORTB.1 = 0;
        PORTB.2 = 0;
        PORTB.3 = 0;
        PORTB.4 = 1;
        PORTB.5 = 0;
        PORTB.6 = 0;
        PORTB.7 = 0;
        delay_ms(500);
        
        PORTB.0 = 0;
        PORTB.1 = 0;
        PORTB.2 = 0;
        PORTB.3 = 1;
        PORTB.4 = 0;
        PORTB.5 = 0;
        PORTB.6 = 0;
        PORTB.7 = 0;
        delay_ms(500); 
        
        PORTB.0 = 0;
        PORTB.1 = 0;
        PORTB.2 = 1;
        PORTB.3 = 0;
        PORTB.4 = 0;
        PORTB.5 = 0;
        PORTB.6 = 0;
        PORTB.7 = 0;
        delay_ms(500); 
        
        PORTB.0 = 0;
        PORTB.1 = 1;
        PORTB.2 = 0;
        PORTB.3 = 0;
        PORTB.4 = 0;
        PORTB.5 = 0;
        PORTB.6 = 0;
        PORTB.7 = 0;
        delay_ms(500);
        

    }

    }
}
