/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MOTOR_H
#define __MOTOR_H

/* Includes ------------------------------------------------------------------*/
#include "sys.h"

/* Exported types ------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */

	

#define MOTOR_CONTROL_01_PIN                      GPIO_Pin_8
#define MOTOR_CONTROL_01_PORT                     GPIOC 
#define MOTOR_CONTROL_01_CLK             					RCC_AHB1Periph_GPIOC


#define MOTOR_CONTROL_02_PIN                      GPIO_Pin_9
#define MOTOR_CONTROL_02_PORT                     GPIOC 
#define MOTOR_CONTROL_02_CLK             					RCC_AHB1Periph_GPIOC


#define MOTOR_CONTROL_03_PIN                       GPIO_Pin_14
#define MOTOR_CONTROL_03_PORT                      GPIOD 
#define MOTOR_CONTROL_03_CLK             					 RCC_AHB1Periph_GPIOD

#define MOTOR_CONTROL_04_PIN                       GPIO_Pin_15
#define MOTOR_CONTROL_04_PORT                      GPIOD 
#define MOTOR_CONTROL_04_CLK             					 RCC_AHB1Periph_GPIOD


void Motor_GPIO_Cfg(void);
void MOTOR_GO_STOP(void);
void MOTOR_FORWARD(void);
void MOTOR_BACK(void);
void MOTOR_LEFT(void);
void MOTOR_RIGHT(void);
void MOTOR_LEFT_FORWARD(void);	
void MOTOR_RIGHT_FORWARD(void);
void MOTOR_LEFT_BACK(void);
void MOTOR_RIGHT_BACK(void);
#endif /***** __MOTOR_H   ****/
