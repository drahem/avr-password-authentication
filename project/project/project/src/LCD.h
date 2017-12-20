/*
 * LCD.h
 *
 * Created: 23/08/2017 20:39:35
 *  Author: moham
 */ 


#ifndef LCD_H_
#define LCD_H_

void LCD_Init(void); 
void LCD_SendData(unsigned char data);
void LCD_Send_Command(unsigned char cmd);
void LCD_Clear(void);
void LCD_GotoXY(unsigned char x, unsigned char y);
void LCD_SendString(char *str);
void LCD_SendString_XY(char *str, unsigned char x, unsigned char y);
char* convertData(unsigned int var);
void lcd_disp_char(unsigned char);


#endif /* LCD_H_ */