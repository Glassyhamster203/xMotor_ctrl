#include "Motor.h"
void motorStop(){
	
	HAL_TIM_PWM_Stop(&htim3,TIM_CHANNEL_1);
	HAL_TIM_PWM_Stop(&htim3,TIM_CHANNEL_2);
	HAL_TIM_PWM_Stop(&htim3,TIM_CHANNEL_3);
	HAL_TIM_PWM_Stop(&htim3,TIM_CHANNEL_4);
	
}
void motorInit(){

		TIM3->ARR =499;
		TIM3->CCR1 =0;
		TIM3->CCR2 =0;
		TIM3->CCR3 =0;
		TIM3->CCR4 =0;
	


}
void motorStart(){

	HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_2);
	HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_3);
	HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_4);
	
}
void motorLeft(){

	TIM3->CCR1 =100;
	TIM3->CCR2 =800;
	TIM3->CCR3 =100;
	TIM3->CCR4 =400;
	motorStart();

}
void motorRight(){

	TIM3->CCR1 =100;
	TIM3->CCR2 =400;
	TIM3->CCR3 =100;
	TIM3->CCR4 =800;
	motorStart();

}
void motorForward(){

	TIM3->CCR1 =100;
	TIM3->CCR2 =800;
	TIM3->CCR3 =100;
	TIM3->CCR4 =800;
	motorStart();
}
void motorBack(){

	TIM3->CCR1 =800;
	TIM3->CCR2 =100;
	TIM3->CCR3 =800;
	TIM3->CCR4 =100;
	motorStart();

}