/*
 * Four_digit_counter.c
 *
 * Created: 12/21/2020 3:14:57 AM
 * Author: R
 */

#include <io.h>
#include <mega16.h>
#include <delay.h>

 unsigned char SevenSegment[10] = { 0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
 unsigned char Counter[4] = {0x11110111,0b11111011,0b11111101,0b11111110};


int i=0;


interrupt [TIM0_OVF] void timer0_ovf_isr(void)
{
           PORTD = SevenSegment[Counter[i]];    
                i++;
           if(i ==4){
           i = 0;
           }

       TCNT0=0x00;
}


interrupt [TIM1_OVF] void timer1_ovf_isr(void)
{
        TCNT1H=0xFF;
        TCNT1L=0xF0;
}



void main(void)
{

DDRD=0b11111111;
PORTD=0b00000000;
DDRC=0b11111111;
PORTC=0b11101111;
TIMSK=(0<<OCIE2) | (0<<TOIE2) | (0<<TICIE1) | (0<<OCIE1A) | (0<<OCIE1B) | (1<<TOIE1) | (0<<OCIE0) | (1<<TOIE0);
TCCR0=(0<<WGM00) | (0<<COM01) | (0<<COM00) | (0<<WGM01) | (1<<CS02) | (0<<CS01) | (1<<CS00);
TCNT0=0x00;
OCR0=0x00;
TCCR1A=(0<<COM1A1) | (0<<COM1A0) | (0<<COM1B1) | (0<<COM1B0) | (0<<WGM11) | (0<<WGM10);
TCCR1B=(0<<ICNC1) | (0<<ICES1) | (0<<WGM13) | (0<<WGM12) | (1<<CS12) | (0<<CS11) | (1<<CS10);
TCNT1H=0xFF;
TCNT1L=0xF0;

MCUCR=(0<<ISC11) | (0<<ISC10) | (0<<ISC01) | (0<<ISC00);
MCUCSR=(0<<ISC2);

#asm("sei")
while (1)
      {

      }
}

