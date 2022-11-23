#ifndef _MOTOR_H_
#define _MOTOR_H_

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

void motorInit(void);

void motorForward(void);
void motorBack(void);
void motorLeft(void);
void motorRight(void);

void motorStart(void);
void motorStop(void);

#endif

