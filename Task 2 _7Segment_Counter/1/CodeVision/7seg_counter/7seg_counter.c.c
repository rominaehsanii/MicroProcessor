/*
 * 7seg_counter.c
 *
 * Created: 12/21/2020 12:35:49 AM
 * Author: R
 */
 
 
#include <io.h>
#include <mega16.h>
#include <delay.h>

 unsigned char SevenSegment[10] = { 0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
 int tre_time=0;
 int count =0;

interrupt [TIM1_OVF] void timer1_ovf_isr(void)
{

    ++tre_time;
        if(tre_time == 5 ){

          if(count < 10){
           PORTD =  SevenSegment[count];
         }else{
           count = 0 ;
           PORTD = SevenSegment[count];

         }

         count++;

        }

    TCNT1H=0xFF;
    TCNT1L=0xF0;

}

void main(void)
{
// Declare your local variables here

DDRD=0b11111111;
PORTD=0b00000000;

TCCR1A=(0<<COM1A1) | (0<<COM1A0) | (0<<COM1B1) | (0<<COM1B0) | (0<<WGM11) | (0<<WGM10);
TCCR1B=(0<<ICNC1) | (0<<ICES1) | (0<<WGM13) | (0<<WGM12) | (0<<CS12) | (0<<CS11) | (1<<CS10);
TCNT1H=0xFF;
TCNT1L=0xF0;

TIMSK=(0<<OCIE2) | (0<<TOIE2) | (0<<TICIE1) | (0<<OCIE1A) | (0<<OCIE1B) | (1<<TOIE1) | (0<<OCIE0) | (0<<TOIE0);

MCUCR=(0<<ISC11) | (0<<ISC10) | (0<<ISC01) | (0<<ISC00);
MCUCSR=(0<<ISC2);


#asm("sei")

while (1)
      {

      }
}