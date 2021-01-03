/*
 * lcd_hello_world.c
 *
 * Created: 1/3/2021 9:15:07 PM
 * Author: R
 */

#include <mega16.h>
#include <alcd.h>

void main(void)
{

DDRD=(0<<DDC7) | (0<<DDC6) | (0<<DDC5) | (0<<DDC4) | (0<<DDC3) | (0<<DDC2) | (0<<DDC1) | (0<<DDC0);
PORTD=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);


 //lcd initialization
    lcd_init(20);

while (1)
    {   
    lcd_gotoxy(0,0);
    lcd_putsf("Hello Wrold!");
    }
}
