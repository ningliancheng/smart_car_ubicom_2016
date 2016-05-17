#include "sys.h"
#include "usart.h"
#include "delay.h"
#include "led.h" 
#include "pwm.h"

int main(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//����ϵͳ�ж����ȼ�����2
	delay_init(168);
	uart_init(115200);

 	TIM14_PWM_Init(500-1,84-1);	//84M/84=1Mhz�ļ���Ƶ��,��װ��ֵ500������PWMƵ��Ϊ 1M/500=2Khz.

	TIM_SetCompare1(TIM14,200);	//�޸ıȽ�ֵ���޸�ռ�ձ�	
  while(1)
	{
		;
	}
}




