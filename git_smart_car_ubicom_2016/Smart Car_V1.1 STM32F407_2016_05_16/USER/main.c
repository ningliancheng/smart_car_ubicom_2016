#include "sys.h"
#include "usart.h"
#include "delay.h"
#include "led.h" 
#include "pwm.h"

int main(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置系统中断优先级分组2
	delay_init(168);
	uart_init(115200);

 	TIM14_PWM_Init(500-1,84-1);	//84M/84=1Mhz的计数频率,重装载值500，所以PWM频率为 1M/500=2Khz.

	TIM_SetCompare1(TIM14,200);	//修改比较值，修改占空比	
  while(1)
	{
		;
	}
}




