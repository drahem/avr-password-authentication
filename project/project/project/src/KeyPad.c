/*
 * keypad.c
 *
 * Created: 07-Aug-17 12:30:48 AM
 *  Author: Mostafa Mahmoud
 */ 
#include "keypad.h"
#include "SevenSeg.h"
void keypad_init()
{
	CLR_LOWER_NIBBLE(DDRD);
	SET_HIGH_NIBBLE(DDRD); 
	SET_REG_NIBBLE(KEYPAD_PORT);
}

unsigned char KeyPad_getpressedkey(void)
{
	unsigned char col_index = 0; 
	unsigned char rows_val = 0;
	unsigned char key = NO_PRESSED_KEY;

	for(col_index=0;col_index<4;col_index++)
	{
		CLR_BIT(KEYPAD_PORT,(col_index+4));

		_delay_ms(1);

		rows_val= GET_LOWER_NIBBLE(KEYPAD_ROWS);

		if(rows_val != 0x0F)
		{
			while((GET_LOWER_NIBBLE(KEYPAD_ROWS)) != 0x0F);
			break;
		}
		SET_BIT(KEYPAD_PORT,(col_index+4));
	}

	if(col_index == 4)
	{
		return NO_PRESSED_KEY;
	}
	else
	{
		switch(col_index)
		{
			// Col_index = 0
			case 0:
			switch(rows_val)
			{
				case 0x0E:  
				key = 7;
				break;
				case 0x0D:  
				key = 4;
				break;
				case 0x0B:  
				key = 1;
				break;
				case 0x07:   
				key = ON_BUTTON;
				break;
				default:
				break;
			}
			break;

			case 1:
			switch(rows_val)
			{
				case 0x0E:   
				key = 8;
				break;
				case 0x0D:   
				key = 5;
				break;
				case 0x0B:
				key = 2;
				break;
				case 0x07:
				key = 0;
				break;
				default:
				break;
			}
			break;
			
			case 2:
			switch(rows_val)
			{
				case 0x0E:  
				key = 9;
				break;
				case 0x0D:  
				key = 6;
				break;
				case 0x0B:  
				key = 3;
				break;
				case 0x07:  
				key = EQUAL;
				break;
				default:
				break;
			}
			break;
			
			// Col3
			case 3:
			switch(rows_val)
			{
				case 0x0E:
				key = DIVIDE;
				break;
				case 0x0D:
				key = MULTIPLY;
				break;
				case 0x0B:
				key =SUBTRACT;
				break;
				case 0x07:
				key = ADD;
				break;
				default:
				break;
			}
			break;
			
			default:
			break;
		}
	}
	return key;
}
