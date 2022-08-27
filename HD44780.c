/*
 * HD44780.c
 *
 *  Created on: Aug 15, 2022
 *      Author: neo-a
 */
#include "HD44780.h"
void InitDisplayOneLine()
{

	HAL_Delay(20);
	R_S_off;
	D7_off;
	D6_off;
	D5_on;
	D4_on;
	D3_off;
	D2_off;

	E_on;
	HAL_Delay(1);
	E_off;

	R_S_off;
	D7_off;
	D6_off;
	D5_off;
	D4_off;
	D3_on;
	D2_on;
	D1_on;
	D0_off;


	E_on;
	HAL_Delay(1);
	E_off;

	R_S_off;
	D7_off;
	D6_off;
	D5_off;
	D4_off;
	D3_off;
	D2_on;
	D1_on;
	D0_off;


	E_on;
	HAL_Delay(1);
	E_off;

}

void InitDisplayTwoLine()
{
	HAL_Delay(20);
	R_S_off;
	D7_off;
	D6_off;
	D5_on;
	D4_on;
	D3_on;
	D2_off;

	E_on;
	HAL_Delay(1);
	E_off;

	R_S_off;
	D7_off;
	D6_off;
	D5_off;
	D4_off;
	D3_on;
	D2_on;
	D1_on;
	D0_off;

	E_on;
	HAL_Delay(1);
	E_off;

	R_S_off;
	D7_off;
	D6_off;
	D5_off;
	D4_off;
	D3_off;
	D2_on;
	D1_on;
	D0_off;


	E_on;
	HAL_Delay(1);
	E_off;

}

void WriteSymbol(char s)
{
	R_S_on;

	if( s & (1 << 0))
		{
			D0_on;
		}
	else
		{
			D0_off;
		}

	if( s & (1 << 1))
		{
			D1_on;
		}
	else
		{
			D1_off;
		}

	if( s & (1 << 2))
		{
			D2_on;
		}
	else
		{
			D2_off;
		}

	if( s & (1 << 3))
		{
			D3_on;
		}
	else
		{
			D3_off;
		}
	if( s & (1 << 4))
		{
			D4_on;
		}
	else
		{
			D4_off;
		}
	if( s & (1 << 5))
		{
			D5_on;
		}
	else
		{
			D5_off;
		}
	if( s & (1 << 6))
		{
			D6_on;
		}
	else
		{
			D6_off;
		}
	if( s & (1 << 7))
		{
			D7_on;
		}
	else
		{
			D7_off;
		}

		E_on;
		HAL_Delay(1);
		E_off;

}

void WriteString(char S[])
{
	uint8_t i=0;
	while (S[i]!='\0')
	{
		WriteSymbol(S[i]);
		i++;

	}

}

void ClearDisplay()
{
	R_S_off;
	D7_off;
	D6_off;
	D5_off;
	D4_off;
	D3_off;
	D2_off;
	D1_off;
	D0_on;


	E_on;
	HAL_Delay(1);
	E_off;
}

void CursorShiftRight(uint8_t i)
{
	while(i)
	{
		R_S_off;
		D7_off;
		D6_off;
		D5_off;
		D4_on;
		D3_off;
		D2_on;

		E_on;
		HAL_Delay(1);
		E_off;
		i--;

	}

}

void CursorShiftLeft(uint8_t i)
{
	while(i)
	{
		R_S_off;
		D7_off;
		D6_off;
		D5_off;
		D4_on;
		D3_off;
		D2_off;

		E_on;
		HAL_Delay(1);
		E_off;
		i--;

	}

}

void SecondLine()
{
	R_S_off;
	D7_on;
	D6_on;
	D5_off;
	D4_off;
	D3_off;
	D2_off;
	D1_off;
	D0_off;


	E_on;
	HAL_Delay(1);
	E_off;
}
