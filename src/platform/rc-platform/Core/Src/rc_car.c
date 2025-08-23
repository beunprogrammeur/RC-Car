/*
 * rc_car.c
 *
 *  Created on: Aug 22, 2025
 *      Author: Vincent
 */

#include <stdlib.h>
#include "rc_car.h"


rc_car_motor rc_car_motor_FrontLeft  = { &htim1, TIM_CHANNEL_1, TIM_CHANNEL_2 };
rc_car_motor rc_car_motor_FrontRight = { &htim1, TIM_CHANNEL_3, TIM_CHANNEL_4 };
rc_car_motor rc_car_motor_RearLeft   = { &htim2, TIM_CHANNEL_1, TIM_CHANNEL_2 };
rc_car_motor rc_car_motor_RearRight  = { &htim2, TIM_CHANNEL_3, TIM_CHANNEL_4 };


void rc_car_MotorInit(rc_car_motor* motor)
{
	HAL_TIM_PWM_Start(motor->timerHandle,motor->forwardChannel);
	HAL_TIM_PWM_Start(motor->timerHandle,motor->backwardChannel);
}

void rc_car_MotorsInit()
{
	rc_car_MotorInit(&rc_car_motor_FrontLeft);
	rc_car_MotorInit(&rc_car_motor_FrontRight);
	rc_car_MotorInit(&rc_car_motor_RearLeft);
	rc_car_MotorInit(&rc_car_motor_RearRight);
}

void rc_car_SetMotorSpeed(rc_car_motor* motor, int8_t speed)
{
	if(speed > 0 && __HAL_TIM_GET_COMPARE(motor->timerHandle, motor->forwardChannel) > 0)
	{
		__HAL_TIM_SET_COMPARE(motor->timerHandle, motor->forwardChannel, speed);
	}
	else if (speed < 0 && __HAL_TIM_GET_COMPARE(motor->timerHandle, motor->backwardChannel) > 0)
	{
		__HAL_TIM_SET_COMPARE(motor->timerHandle, motor->backwardChannel, abs(speed));
	}
	else
	{
		__HAL_TIM_SET_COMPARE(motor->timerHandle, motor->forwardChannel, 0);
		__HAL_TIM_SET_COMPARE(motor->timerHandle, motor->backwardChannel, 0);

		uint8_t forward  = speed >= 0 ?     speed  : 0;
		uint8_t backward = speed <= 0 ? abs(speed) : 0;

		__HAL_TIM_SET_COMPARE(motor->timerHandle, motor->forwardChannel, forward);
		__HAL_TIM_SET_COMPARE(motor->timerHandle, motor->backwardChannel, backward);
	}
}

