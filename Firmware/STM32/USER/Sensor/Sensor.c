#include "Sensor.h"
#include "main.h"


#if 0
void lineSniffer(void)
{
  
	if(IO1_read()&&IO2_read()&&IO3_read()&&IO4_read()) motorForward();
	else if ((IO1_read()||IO2_read())&&!(IO3_read()||IO4_read())) motorRight();
	else if (!(IO1_read()||IO2_read())&&(IO3_read()||IO4_read())) motorLeft();
	else if (!(IO1_read()&&IO2_read()&&IO3_read()&&IO4_read())) motorStop();
	
}

#endif


void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	extern int autoFlag;
	if (autoFlag){
    if(GPIO_Pin==GPIO_PIN_12)
    {		
				motorRight();
    }
		if(GPIO_Pin==GPIO_PIN_13)
    {
				motorForward();
    }
		if(GPIO_Pin==GPIO_PIN_14)
    {
				motorLeft();
    }
		if(!IO1_read()&&!IO2_read()&&!IO3_read())//存档点动作
		{
				motorStop();
				printf("saved");
				HAL_Delay(100);
				motorForward();
		}
	}
}

