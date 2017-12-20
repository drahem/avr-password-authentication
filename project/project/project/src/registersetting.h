#ifndef _REGISTERSETTING_H_
#define _REGISTERSETTING_H_

#define SET_BIT(reg,index)  reg|=(1<<index)
#define CLR_BIT(reg,index)  reg&=(~(1<<index))
#define TOG_BIT(reg,index)  reg^=(1<<index)
#define GET_BIT(reg,index)  ((reg>>index)&0x01)
#define SET_HIGH_NIBBLE(reg)   reg=reg|0xf0
#define SET_LOWER_NIBBLE(reg)  reg=reg|0x0f
#define CLR_HIGH_NIBBLE(reg)   reg=reg&0x0f
#define CLR_LOWER_NIBBLE(reg)  reg=reg&0xf0
#define GET_HIGH_NIBBLE(reg)   reg>>4
#define GET_LOWER_NIBBLE(reg)  reg&0x0f
#define PUTVAL_HIGH_NIBBLE(reg,val)  reg=(reg&0x0f)|(val<<4)
#define PUTVAL_LOWER_NIBBLE(reg,val)  reg=(reg&0xf0)|(val&0x0f)
#define SET_REG_NIBBLE(reg)  reg=reg|0xff

#endif