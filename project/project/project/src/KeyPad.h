/*
 *
 * Created: 07-Aug-17 12:26:31 AM
 *  Author: Mostafa Mahmoud
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_
#include <avr/io.h>
#include <util/delay.h>
#include "registersetting.h"
#define NO_PRESSED_KEY      0xff
#define KEYPAD_PORT         PORTD
#define KEYPAD_ROWS         PIND
#define ON_BUTTON           10
#define EQUAL               11
#define DIVIDE              12
#define MULTIPLY            13
#define SUBTRACT            14
#define ADD                 15
#define LED_toggle(reg,index){\
SET_BIT(reg,index);\
_delay_ms(500);\
CLR_BIT(reg,index);\
}
void keypad_init();
unsigned char KeyPad_getpressedkey();

#endif 