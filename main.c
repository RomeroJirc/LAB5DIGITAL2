/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
uint8_t estado = 0;
uint8_t J1counter = 0;
uint8_t J2counter = 0;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {

	  if (HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin) == GPIO_PIN_RESET){
		  estado = 1;
		  HAL_GPIO_WritePin(J1LED1_GPIO_Port, J1LED1_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J1LED2_GPIO_Port, J1LED2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J1LED3_GPIO_Port, J1LED3_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J1LED4_GPIO_Port, J1LED4_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J1LED5_GPIO_Port, J1LED5_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J1LED6_GPIO_Port, J1LED6_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J1LED7_GPIO_Port, J1LED7_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J1LED8_GPIO_Port, J1LED8_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J2LED1_GPIO_Port, J2LED1_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J2LED2_GPIO_Port, J2LED2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J2LED3_GPIO_Port, J2LED3_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J2LED4_GPIO_Port, J2LED4_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J2LED5_GPIO_Port, J2LED5_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J2LED6_GPIO_Port, J2LED6_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J2LED7_GPIO_Port, J2LED7_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(J2LED8_GPIO_Port, J2LED8_Pin, GPIO_PIN_RESET);
	  }

	  if (estado == 1){
		  J1counter = 0;
		  J2counter = 0;
		  HAL_GPIO_WritePin(RLED_GPIO_Port, RLED_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(YLED_GPIO_Port, YLED_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GLED_GPIO_Port, GLED_Pin, GPIO_PIN_RESET);
		  HAL_Delay(800);
		  HAL_GPIO_WritePin(RLED_GPIO_Port, RLED_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(YLED_GPIO_Port, YLED_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GLED_GPIO_Port, GLED_Pin, GPIO_PIN_RESET);
		  HAL_Delay(800);
		  HAL_GPIO_WritePin(RLED_GPIO_Port, RLED_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(YLED_GPIO_Port, YLED_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GLED_GPIO_Port, GLED_Pin, GPIO_PIN_SET);
		  HAL_Delay(800);
		  estado = 2;
	  }

	  if (estado == 2){
		  if (HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin) == GPIO_PIN_RESET){
			  HAL_Delay(200);
			  J1counter++;
			  if (J1counter == 0){
				  HAL_GPIO_WritePin(J1LED1_GPIO_Port, J1LED1_Pin, GPIO_PIN_RESET);
			  }
			  else if (J1counter == 1){
				  HAL_GPIO_WritePin(J1LED1_GPIO_Port, J1LED1_Pin, GPIO_PIN_SET);
			  }
			  else if (J1counter == 2){
				  HAL_GPIO_WritePin(J1LED1_GPIO_Port, J1LED1_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J1LED2_GPIO_Port, J1LED2_Pin, GPIO_PIN_SET);
			  }
			  else if (J1counter == 3){
				  HAL_GPIO_WritePin(J1LED2_GPIO_Port, J1LED2_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J1LED3_GPIO_Port, J1LED3_Pin, GPIO_PIN_SET);
			  }
			  else if (J1counter == 4){
				  HAL_GPIO_WritePin(J1LED3_GPIO_Port, J1LED3_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J1LED4_GPIO_Port, J1LED4_Pin, GPIO_PIN_SET);
			  }
			  else if (J1counter == 5){
				  HAL_GPIO_WritePin(J1LED4_GPIO_Port, J1LED4_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J1LED5_GPIO_Port, J1LED5_Pin, GPIO_PIN_SET);
			  }
			  else if (J1counter == 6){
				  HAL_GPIO_WritePin(J1LED5_GPIO_Port, J1LED5_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J1LED6_GPIO_Port, J1LED6_Pin, GPIO_PIN_SET);
			  }
			  else if (J1counter == 7){
				  HAL_GPIO_WritePin(J1LED6_GPIO_Port, J1LED6_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J1LED7_GPIO_Port, J1LED7_Pin, GPIO_PIN_SET);
			  }
			  else if (J1counter == 8){
				  HAL_GPIO_WritePin(J1LED7_GPIO_Port, J1LED7_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J1LED8_GPIO_Port, J1LED8_Pin, GPIO_PIN_SET);
			  }
			  else if (J1counter == 9){
				  HAL_GPIO_WritePin(J1LED1_GPIO_Port, J1LED1_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J1LED2_GPIO_Port, J1LED2_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J1LED3_GPIO_Port, J1LED3_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J1LED4_GPIO_Port, J1LED4_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J1LED5_GPIO_Port, J1LED5_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J1LED6_GPIO_Port, J1LED6_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J1LED7_GPIO_Port, J1LED7_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J1LED8_GPIO_Port, J1LED8_Pin, GPIO_PIN_SET);
				  estado = 0;
			  }
		  	  }
		  if (HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin) == GPIO_PIN_RESET){
			  HAL_Delay(200);
			  J2counter++;
			  if (J2counter == 0){
				  HAL_GPIO_WritePin(J2LED1_GPIO_Port, J2LED1_Pin, GPIO_PIN_RESET);
			  }
			  else if (J2counter == 1){
				  HAL_GPIO_WritePin(J2LED1_GPIO_Port, J2LED1_Pin, GPIO_PIN_SET);
			  }
			  else if (J2counter == 2){
				  HAL_GPIO_WritePin(J2LED1_GPIO_Port, J2LED1_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J2LED2_GPIO_Port, J2LED2_Pin, GPIO_PIN_SET);
			  }
			  else if (J2counter == 3){
				  HAL_GPIO_WritePin(J2LED2_GPIO_Port, J2LED2_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J2LED3_GPIO_Port, J2LED3_Pin, GPIO_PIN_SET);
			  }
			  else if (J2counter == 4){
				  HAL_GPIO_WritePin(J2LED3_GPIO_Port, J2LED3_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J2LED4_GPIO_Port, J2LED4_Pin, GPIO_PIN_SET);
			  }
			  else if (J2counter == 5){
				  HAL_GPIO_WritePin(J2LED4_GPIO_Port, J2LED4_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J2LED5_GPIO_Port, J2LED5_Pin, GPIO_PIN_SET);
			  }
			  else if (J2counter == 6){
				  HAL_GPIO_WritePin(J2LED5_GPIO_Port, J2LED5_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J2LED6_GPIO_Port, J2LED6_Pin, GPIO_PIN_SET);
			  }
			  else if (J2counter == 7){
				  HAL_GPIO_WritePin(J2LED6_GPIO_Port, J2LED6_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J2LED7_GPIO_Port, J2LED7_Pin, GPIO_PIN_SET);
			  }
			  else if (J2counter == 8){
				  HAL_GPIO_WritePin(J2LED7_GPIO_Port, J2LED7_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(J2LED8_GPIO_Port, J2LED8_Pin, GPIO_PIN_SET);
			  }
			  else if (J2counter == 9){
				  HAL_GPIO_WritePin(J2LED1_GPIO_Port, J2LED1_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J2LED2_GPIO_Port, J2LED2_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J2LED3_GPIO_Port, J2LED3_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J2LED4_GPIO_Port, J2LED4_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J2LED5_GPIO_Port, J2LED5_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J2LED6_GPIO_Port, J2LED6_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J2LED7_GPIO_Port, J2LED7_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(J2LED8_GPIO_Port, J2LED8_Pin, GPIO_PIN_SET);
				  estado = 0;
			  }
		  }

	  }
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, J2LED1_Pin|J2LED2_Pin|J2LED3_Pin|J2LED4_Pin
                          |J1LED4_Pin|J1LED5_Pin|J1LED6_Pin|J1LED7_Pin
                          |J2LED5_Pin|J2LED6_Pin|J2LED7_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GLED_Pin|YLED_Pin|RLED_Pin|J1LED2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, J1LED1_Pin|J1LED3_Pin|LED1_Pin|J1LED8_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(J2LED8_GPIO_Port, J2LED8_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : BUTTON1_Pin */
  GPIO_InitStruct.Pin = BUTTON1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(BUTTON1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : J2LED1_Pin J2LED2_Pin J2LED3_Pin J2LED4_Pin
                           J1LED4_Pin J1LED5_Pin J1LED6_Pin J1LED7_Pin
                           J2LED5_Pin J2LED6_Pin J2LED7_Pin */
  GPIO_InitStruct.Pin = J2LED1_Pin|J2LED2_Pin|J2LED3_Pin|J2LED4_Pin
                          |J1LED4_Pin|J1LED5_Pin|J1LED6_Pin|J1LED7_Pin
                          |J2LED5_Pin|J2LED6_Pin|J2LED7_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : GLED_Pin YLED_Pin RLED_Pin J1LED2_Pin */
  GPIO_InitStruct.Pin = GLED_Pin|YLED_Pin|RLED_Pin|J1LED2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : BUTTON2_Pin BUTTON3_Pin */
  GPIO_InitStruct.Pin = BUTTON2_Pin|BUTTON3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : J1LED1_Pin J1LED3_Pin LED1_Pin J1LED8_Pin */
  GPIO_InitStruct.Pin = J1LED1_Pin|J1LED3_Pin|LED1_Pin|J1LED8_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : J2LED8_Pin */
  GPIO_InitStruct.Pin = J2LED8_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(J2LED8_GPIO_Port, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
