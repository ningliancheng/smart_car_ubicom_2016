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

 	TIM2_PWM_CH1_Init(500-1,84-1);	//84M/84=1Mhz�ļ���Ƶ��,��װ��ֵ500������PWMƵ��Ϊ 1M/500=2Khz.
	TIM_SetCompare1(TIM2,200);	//�޸ıȽ�ֵ���޸�ռ�ձ�
	
 	TIM2_PWM_CH2_Init(500-1,84-1);	//84M/84=1Mhz�ļ���Ƶ��,��װ��ֵ500������PWMƵ��Ϊ 1M/500=2Khz.
	TIM_SetCompare2(TIM2,200);	//�޸ıȽ�ֵ���޸�ռ�ձ�
	
	TIM_Cmd(TIM2, ENABLE);  //ʹ��TIM2	
	
  while(1)
	{
		;
	}
}




