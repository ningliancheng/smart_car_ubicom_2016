#include "stm32f4xx.h"
#include "usart.h"
#include "delay.h"
#include "led.h" 

int main(void)
{
	uart_init(115200);
	delay_init(168);
	LED_Init();
	
  while(1)
	{
		LED1 = 0;
		LED2 = 0;
		LED3 = 0;
		LED4 = 0;
		LED5 = 0;
		delay_ms(500);
		LED1 = 1;
		LED2 = 1;
		LED3 = 1;
		LED4 = 1;
		LED5 = 1;
		delay_ms(500);
	}
}



