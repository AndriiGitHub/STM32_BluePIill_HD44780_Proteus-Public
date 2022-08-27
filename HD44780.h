/*
 * HD44780.h
 *
 *  Created on: Aug 15, 2022
 *      Author: neo-a
 */
#include "main.h"
#ifndef INC_HD44780_H_
#define INC_HD44780_H_

#define D0_on HAL_GPIO_WritePin(GPIOA, D0_Pin, GPIO_PIN_SET);
#define D1_on HAL_GPIO_WritePin(GPIOA, D1_Pin, GPIO_PIN_SET);
#define D2_on HAL_GPIO_WritePin(GPIOA, D2_Pin, GPIO_PIN_SET);
#define D3_on HAL_GPIO_WritePin(GPIOA, D3_Pin, GPIO_PIN_SET);
#define D4_on HAL_GPIO_WritePin(GPIOA, D4_Pin, GPIO_PIN_SET);
#define D5_on HAL_GPIO_WritePin(GPIOA, D5_Pin, GPIO_PIN_SET);
#define D6_on HAL_GPIO_WritePin(GPIOA, D6_Pin, GPIO_PIN_SET);
#define D7_on HAL_GPIO_WritePin(GPIOA, D7_Pin, GPIO_PIN_SET);

#define D0_off HAL_GPIO_WritePin(GPIOA, D0_Pin, GPIO_PIN_RESET);
#define D1_off HAL_GPIO_WritePin(GPIOA, D1_Pin, GPIO_PIN_RESET);
#define D2_off HAL_GPIO_WritePin(GPIOA, D2_Pin, GPIO_PIN_RESET);
#define D3_off HAL_GPIO_WritePin(GPIOA, D3_Pin, GPIO_PIN_RESET);
#define D4_off HAL_GPIO_WritePin(GPIOA, D4_Pin, GPIO_PIN_RESET);
#define D5_off HAL_GPIO_WritePin(GPIOA, D5_Pin, GPIO_PIN_RESET);
#define D6_off HAL_GPIO_WritePin(GPIOA, D6_Pin, GPIO_PIN_RESET);
#define D7_off HAL_GPIO_WritePin(GPIOA, D7_Pin, GPIO_PIN_RESET);

#define E_on HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_SET);
#define R_S_on HAL_GPIO_WritePin(GPIOB, R_S_Pin, GPIO_PIN_SET);

#define E_off HAL_GPIO_WritePin(GPIOB, E_Pin, GPIO_PIN_RESET);
#define R_S_off HAL_GPIO_WritePin(GPIOB, R_S_Pin, GPIO_PIN_RESET);


void InitDisplayOneLine();
void InitDisplayTwoLine();
void WriteSymbol(char s);
void WriteString(char S[]);
void ClearDisplay();
void CursorShiftRight(uint8_t i);
void CursorShiftLeft(uint8_t i);
void SecondLine();
#endif /* INC_HD44780_H_ */
