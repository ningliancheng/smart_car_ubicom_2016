#ifndef __LED_H
#define __LED_H
#include "sys.h"

//LED端口定义
#define LED1 PEout(1)	
#define LED2 PEout(2)
#define LED3 PEout(3)
#define LED4 PEout(4)
#define LED5 PEout(5)

void LED_Init(void);//初始化		 				    
#endif
