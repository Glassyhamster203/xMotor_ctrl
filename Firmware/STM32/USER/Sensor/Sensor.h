#ifndef _SENSOR_H_
#define _SENSOR_H_

#include "main.h"
#include "i2c.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"
#include "IIC.h"
#include "mpu6050.h"
#include "inv_mpu.h"
#include "inv_mpu_dmp_motion_driver.h"
#include "stdio.h"
#include "Motor.h"

#define IO1_read() HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)
#define IO2_read() HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)
#define IO3_read() HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_14)
#define IO4_read() HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)

//void lineSniffer(void);

#endif

