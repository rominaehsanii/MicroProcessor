/*
 * lcd_letters.c
 *
 * Created: 1/3/2021 11:05:30 PM
 * Author: R
 */

#include <mega16.h>
#include <alcd.h>
#include <delay.h>

unsigned char Letters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int x;
void main(void)
{
DDRD=(0<<DDC7) | (0<<DDC6) | (0<<DDC5) | (0<<DDC4) | (0<<DDC3) | (0<<DDC2) | (0<<DDC1) | (0<<DDC0);
PORTD=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);

lcd_init(16);

while (1)
      {     
        for(x=0;x<27;x++){
            lcd_putchar(Letters[x]); 
            delay_ms(100);  
            } 
        lcd_clear();  
        delay_ms(200); 
        lcd_gotoxy(0,0);
      }

}
