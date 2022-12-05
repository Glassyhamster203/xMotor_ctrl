#ifndef _ULN2003_H_
#define _ULN2003_H_
#include "main.h"
#define IN1_PIN GPIO_PIN_1
#define IN1_PORT GPIOA
#define IN2_PIN GPIO_PIN_2
#define IN2_PORT GPIOA
#define IN3_PIN GPIO_PIN_3
#define IN3_PORT GPIOA
#define IN4_PIN GPIO_PIN_4
#define IN4_PORT GPIOA

void stepCCV (int steps, uint16_t delay); // CCV - Counter Clockwise
void stepCV (int steps, uint16_t delay); // CV - Clockwise

#endif
