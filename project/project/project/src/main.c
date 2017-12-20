/**
 * \file
 *
 * // project.c
 * // Authour : mohamed drahem
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
#include <asf.h>
#include <avr/io.h>
#include <util/delay.h>
#include "registersetting.h"
#include "LCD.h"
#include "KeyPad.h"
#include "SevenSeg.h"
int main (void)
{
		// Insert application code here, after the board has been initialized.
	CLR_BIT(PORTC,7);
	SET_BIT(PORTC,7);
	SET_REG_NIBBLE(DDRA);
	SET_LOWER_NIBBLE(DDRC);
	CLR_LOWER_NIBBLE(PORTC);
	PORTC=0x80;
	int i=0;
	unsigned char pass[4]={1,2,3,4};
	int n=0;
	unsigned char c;
	LCD_Init();
	keypad_init();
	
	while(1)
{
	//LCD_Clear();
	// display welcome message 

	LCD_SendString("Welcome Our User ");		 LCD_GotoXY(0,1);
	LCD_SendString("    Please       ");	     _delay_ms(100);		LCD_GotoXY(0,1);		
	LCD_Clear();
	LCD_GotoXY(0,0);
	LCD_SendString("    Enter Your   ");       	 LCD_GotoXY(0,1);
	LCD_SendString("    Password     ");    	 _delay_ms(100);	

	LCD_Clear();

	LCD_SendString("  to access    ");	         LCD_GotoXY(0,1);
	LCD_SendString("  the switch :) ");		     _delay_ms(100);
	LCD_GotoXY(0,0);	
	LCD_Clear();
	LCD_SendString("pass : ");
	// take and check password 
	int j=0;
	for (i=0;i<4;i++){
		pass[i]=KeyPad_getpressedkey()+'0';
		c=pass[i];
		if(c=='1'|| c=='2'|| c=='3'|| c=='4' ||c=='5'|| c=='6'|| c=='7'|| c=='8'|| c=='9'||c=='0'){
			LCD_SendData('*');}
		else{
			i--;}
			}
	if (pass[0]=='1' && pass[1]=='2' && pass[2]=='3' && pass[3]=='4'){
		LCD_Clear();
		LCD_SendString(" your password ");		LCD_GotoXY(0,1);
		LCD_SendString(" is correct");			_delay_ms(1000);
		
		int i,b1=0,j;
		if( GET_BIT(PINC,7) == 0 && b1==0 ){
			b1=1;
			for (j=0;j<3;j++)
			{
			for(i=0;i<10;i++){
				PORTC=i;
				_delay_ms(500);
				}
			PORTC=0x00;}
		if(GET_BIT(PINC,7)==1){
			b1=0;}
			}
			LCD_Clear();/*
		LCD_GotoXY(0,0);
		LCD_SendString("                ");
		LCD_GotoXY(0,1);
		LCD_SendString("                ");*/
		LCD_GotoXY(0,0);
		}
	
	else{
		LCD_Clear();
		LCD_SendString("Wrong Password");	
		_delay_ms(500);	
		LCD_SendString("                ");
		_delay_ms(500);
		LCD_GotoXY(0,0);
		}
	}	
}


