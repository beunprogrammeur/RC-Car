/*
 * rc_car.h
 *
 *  Created on: Aug 22, 2025
 *      Author: Vincent
 */

#ifndef INC_RC_CAR_H_
#define INC_RC_CAR_H_

#include "stm32f1xx_hal.h"
#include "tim.h"
//
// type definitions
//

typedef struct {
	TIM_HandleTypeDef* timerHandle;
	uint16_t forwardChannel;
	uint16_t backwardChannel;
}
rc_car_motor;


//
// configuration definitions
//

extern rc_car_motor rc_car_motor_FrontLeft;
extern rc_car_motor rc_car_motor_FrontRight;
extern rc_car_motor rc_car_motor_RearLeft;
extern rc_car_motor rc_car_motor_RearRight;



//
// action definitions
//

void rc_car_MotorInit(rc_car_motor* motor);
void rc_car_MotorsInit();
void rc_car_SetMotorSpeed(rc_car_motor* motor, int8_t speed);
int8_t rc_car_GetMotorSpeed(rc_car_motor* motor);




#endif /* INC_RC_CAR_H_ */
