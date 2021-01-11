/*
 * Steper_Motor_part3.c
 *
 * Created: 1/11/2021 9:37:38 PM
 * Author: R
 */

#include <mega16.h>
#include <delay.h>

const unsigned char Step[4] = {0b00001001 , 0b00000101 , 0b00000110 , 0b00001010};

int tre_time;

interrupt [TIM0_OVF] void timer0_ovf_isr(void)
{

TCNT0=0x0C;

if(tre_time < 20){
    if(PINC.2== 0) {
            PORTB = Step[3];   
            delay_ms(10);
            
            PORTB = Step[2];
            delay_ms(10); 

            PORTB = Step[1];
            delay_ms(10); 

            PORTB = Step[0];
            delay_ms(10); 
        }    
    ++tre_time;
    } 
tre_time = 0;
}

void main(void)
{

TCCR0=(0<<WGM00) | (0<<COM01) | (0<<COM00) | (0<<WGM01) | (1<<CS02) | (0<<CS01) | (1<<CS00);
TCNT0=0x0C;
OCR0=0x00;

TCCR1A=(0<<COM1A1) | (0<<COM1A0) | (0<<COM1B1) | (0<<COM1B0) | (0<<WGM11) | (0<<WGM10);
TCCR1B=(0<<ICNC1) | (0<<ICES1) | (0<<WGM13) | (0<<WGM12) | (0<<CS12) | (0<<CS11) | (0<<CS10);
TCNT1H=0x00;
TCNT1L=0x00;


TCCR2=(0<<PWM2) | (0<<COM21) | (0<<COM20) | (0<<CTC2) | (0<<CS22) | (0<<CS21) | (0<<CS20);
TCNT2=0x00;


TIMSK=(0<<OCIE2) | (0<<TOIE2) | (0<<TICIE1) | (0<<OCIE1A) | (0<<OCIE1B) | (0<<TOIE1) | (0<<OCIE0) | (1<<TOIE0);

#asm("sei")

tre_time = 0;  
DDRC = 0x00;   
PINC = 0x00;  
DDRB = 0xff;  
PORTB = 0x00;

while (1)
      {
       
      }
}