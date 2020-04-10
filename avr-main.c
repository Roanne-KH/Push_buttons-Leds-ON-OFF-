/*
 * File:   avr-main.c
 * Author: Roanne
 *
 * Created on April 11, 2020, 12:17 AM
 */


#include <avr/io.h>
#define Button0 0
#define Button1 4
#define Button2 2

#define LED0 2
#define LED1 7
#define LED2 3

int main(void) {
    /* Replace with your application code */
    
    // Inputs
    DDRD&=~(1<<Button2);
      DDRB&=~(1<<Button1);
       DDRB&=~(1<<Button0);
       
       //Outputs
    DDRD|=(1<<LED2);
      DDRC|=(1<<LED1);
       DDRC|=(1<<LED0);
       
    PORTD&=~(1<<LED2);
      PORTC&=~(1<<LED1);
       PORTC&=~(1<<LED0); 
       
    while (1)
    {
        if (PIND & (1<<Button2))
            {
             PORTD|=(1<<LED2);
            }
        
        else if (PINB & (1<<Button1))
            {
            PORTC|=(1<<LED1);
            }
        
        else if (PINB & (1<<Button0))
            {
             PORTC|=(1<<LED0); 
            }
        else 
            {
            PORTD&=~(1<<LED2);
            PORTC&=~(1<<LED1);
            PORTC&=~(1<<LED0); 
            }
        
    }
    
    
}
