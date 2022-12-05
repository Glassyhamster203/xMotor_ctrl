#include "Second.h"
#include "ULN2003.h"
#include "main.h"
#include "i2c.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"
void Fire(){
	HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_1);
	for(int i=0;i<9;i++){
	TIM2->CCR1 = i * kStep;
	HAL_Delay(tStep);
	}//软启动
	stepCCV(128,500);//拨盘转动
	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_SET);//电磁铁吸合
	HAL_Delay(5000);
	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_RESET);//电磁铁断电
	HAL_TIM_PWM_Stop(&htim2,TIM_CHANNEL_1);
	
}
void Catch(){
	HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_2);
	TIM2->CCR2 = 400;

}
void unCatch(){

TIM2->CCR2 =0;

}
