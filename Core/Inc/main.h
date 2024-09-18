/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define BUTTON1_Pin GPIO_PIN_13
#define BUTTON1_GPIO_Port GPIOC
#define J2LED1_Pin GPIO_PIN_0
#define J2LED1_GPIO_Port GPIOC
#define J2LED2_Pin GPIO_PIN_1
#define J2LED2_GPIO_Port GPIOC
#define J2LED3_Pin GPIO_PIN_2
#define J2LED3_GPIO_Port GPIOC
#define J2LED4_Pin GPIO_PIN_3
#define J2LED4_GPIO_Port GPIOC
#define GLED_Pin GPIO_PIN_5
#define GLED_GPIO_Port GPIOA
#define YLED_Pin GPIO_PIN_6
#define YLED_GPIO_Port GPIOA
#define RLED_Pin GPIO_PIN_7
#define RLED_GPIO_Port GPIOA
#define J1LED4_Pin GPIO_PIN_5
#define J1LED4_GPIO_Port GPIOC
#define BUTTON2_Pin GPIO_PIN_1
#define BUTTON2_GPIO_Port GPIOB
#define BUTTON3_Pin GPIO_PIN_2
#define BUTTON3_GPIO_Port GPIOB
#define J1LED1_Pin GPIO_PIN_12
#define J1LED1_GPIO_Port GPIOB
#define J1LED5_Pin GPIO_PIN_6
#define J1LED5_GPIO_Port GPIOC
#define J1LED6_Pin GPIO_PIN_8
#define J1LED6_GPIO_Port GPIOC
#define J1LED7_Pin GPIO_PIN_9
#define J1LED7_GPIO_Port GPIOC
#define J1LED2_Pin GPIO_PIN_11
#define J1LED2_GPIO_Port GPIOA
#define J2LED5_Pin GPIO_PIN_10
#define J2LED5_GPIO_Port GPIOC
#define J2LED6_Pin GPIO_PIN_11
#define J2LED6_GPIO_Port GPIOC
#define J2LED7_Pin GPIO_PIN_12
#define J2LED7_GPIO_Port GPIOC
#define J2LED8_Pin GPIO_PIN_2
#define J2LED8_GPIO_Port GPIOD
#define J1LED3_Pin GPIO_PIN_6
#define J1LED3_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_7
#define LED1_GPIO_Port GPIOB
#define J1LED8_Pin GPIO_PIN_8
#define J1LED8_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
