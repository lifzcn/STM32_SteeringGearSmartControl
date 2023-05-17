#include "stepmotor.h"

void StepMotor_Control(uint8_t direction)
{
	static uint8_t step = 0;
	if (direction == 1)
	{
		if (step == 0)
		{
			step = 8;
		}
		else
		{
			step--;
		}
	}
	switch (step)
	{
	case 0:
		StepMotor_1_H;
		StepMotor_2_L;
		StepMotor_3_L;
		StepMotor_4_L;
		break;
	case 1:
		StepMotor_1_H;
		StepMotor_2_H;
		StepMotor_3_L;
		StepMotor_4_L;
		break;
	case 2:
		StepMotor_1_L;
		StepMotor_2_H;
		StepMotor_3_L;
		StepMotor_4_L;
		break;
	case 3:
		StepMotor_1_L;
		StepMotor_2_H;
		StepMotor_3_H;
		StepMotor_4_L;
		break;
	case 4:
		StepMotor_1_L;
		StepMotor_2_L;
		StepMotor_3_H;
		StepMotor_4_L;
		break;
	case 5:
		StepMotor_1_L;
		StepMotor_2_L;
		StepMotor_3_H;
		StepMotor_4_H;
		break;
	case 6:
		StepMotor_1_L;
		StepMotor_2_L;
		StepMotor_3_L;
		StepMotor_4_H;
		break;
	case 7:
		StepMotor_1_H;
		StepMotor_2_L;
		StepMotor_3_L;
		StepMotor_4_H;
		break;
	default:
		break;
	}
	if (direction == 0)
	{
		step++;
		if (8 == step)
		{
			step = 0;
		}
	}
}

void StepMotor_Start(uint16_t angle, uint8_t direction)
{
	int i = 0;
	int pulse = (int)((double)(angle / 5.625) * 64);
	for (i = 0; i < pulse; i++)
	{
		StepMotor_Control(direction);
		HAL_Delay(1);
	}
}

void StepMotor_Stop(void)
{
	StepMotor_1_L;
	StepMotor_2_L;
	StepMotor_3_L;
	StepMotor_4_L;
}
