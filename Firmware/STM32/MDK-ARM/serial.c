#include "serial.h"

# if 0
void serialRes(){

		if (RxBuffer[0] == 'S')
			autoFlag = 1;
		else if(RxBuffer[0] == 'M'&&!autoFlag)
		{	
		if(RxBuffer[1] == 'F')
				motorForward();
			else if(RxBuffer[1] == 'B')
				motorBack();
			else if(RxBuffer[1] == 'L')
				motorLeft();
			else if(RxBuffer[1] == 'R')
				motorRight();
			else if(RxBuffer[1] == 'S')
				motorStop();	
		}

}
#endif