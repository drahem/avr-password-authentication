/*
 * SevenSeg.c
 *
 * Created: 23/08/2017 20:10:42
 *  Author: mohamed drahem
 */ 

#include "SevenSeg.h"
int Hexa_Number(int number){
	
	
	switch(number){
		case 0 :
		return 0x3f;
		break;
		case 1:
		return 0x06;
		break;
		case 2:
		return 0x5b;
		break;
		case 3:
		return 0x4f;
		break;
		case 4:
		return 0x66;
		break;
		case 5:
		return 0x6d;
		break;
		case 6:
		return 0x7c;
		break;
		case 7:
		return 0x07;
		break;
		case 8:
		return 0x7f;
		break;
		case 9:
		return 0x6f;
		break;
	}
}
