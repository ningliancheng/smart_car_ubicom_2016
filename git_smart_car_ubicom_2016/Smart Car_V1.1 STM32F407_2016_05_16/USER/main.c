#include "sys.h"
#include "usart.h"
#include "delay.h"
#include "led.h" 
#include "pwm.h"
#include "motor.h"

int main(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置系统中断优先级分组2
	delay_init(168);
	uart_init(115200);
	
	Motor_GPIO_Cfg();
	
	//MOTOR_FORWARD();
	//MOTOR_BACK();
	//MOTOR_LEFT();
	//MOTOR_RIGHT();
	//MOTOR_LEFT_FORWARD();
	//MOTOR_RIGHT_FORWARD();
	//MOTOR_LEFT_BACK();
	//MOTOR_RIGHT_BACK();
	
  while(1)
	{
		;
	}
}




