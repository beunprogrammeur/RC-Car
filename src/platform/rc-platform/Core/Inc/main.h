/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MOTOR_C_FW_Pin GPIO_PIN_0
#define MOTOR_C_FW_GPIO_Port GPIOA
#define MOTOR_C_BW_Pin GPIO_PIN_1
#define MOTOR_C_BW_GPIO_Port GPIOA
#define MOTOR_D_FW_Pin GPIO_PIN_2
#define MOTOR_D_FW_GPIO_Port GPIOA
#define MOTOR_D_BW_Pin GPIO_PIN_3
#define MOTOR_D_BW_GPIO_Port GPIOA
#define MOTOR_A_FW_Pin GPIO_PIN_8
#define MOTOR_A_FW_GPIO_Port GPIOA
#define MOTOR_A_BW_Pin GPIO_PIN_9
#define MOTOR_A_BW_GPIO_Port GPIOA
#define MOTOR_B_FW_Pin GPIO_PIN_10
#define MOTOR_B_FW_GPIO_Port GPIOA
#define MOTOR_B_BW_Pin GPIO_PIN_11
#define MOTOR_B_BW_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
