#include "Motor.h"
void motorStop(){
	//moveFlag = 0;
	
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
	TIM3->CCR2 =400;
	TIM3->CCR3 =100;
	TIM3->CCR4 =00;
	motorStart();

}
void motorHalfLeft(){

	TIM3->CCR1 =100;
	TIM3->CCR2 =300;
	TIM3->CCR3 =100;
	TIM3->CCR4 =100;
	motorStart();

}
void motorRight(){

	TIM3->CCR1 =100;
	TIM3->CCR2 =00;
	TIM3->CCR3 =100;
	TIM3->CCR4 =400;
	motorStart();

}
void motorHalfRight(){

	TIM3->CCR1 =100;
	TIM3->CCR2 =150;
	TIM3->CCR3 =100;
	TIM3->CCR4 =300;
	motorStart();

}
void motorForward(){

	TIM3->CCR1 =100;
	TIM3->CCR2 =400;
	TIM3->CCR3 =100;
	TIM3->CCR4 =400;
	//moveFlag = 1;
	motorStart();
}
void motorBack(){

	TIM3->CCR1 =200;
	TIM3->CCR2 =100;
	TIM3->CCR3 =200;
	TIM3->CCR4 =100;
	//moveFlag = -1;
	motorStart();

}

