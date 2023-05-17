#ifndef __STEPMOTOR_H__
#define __STEPMOTOR_H__

#include "stm32f1xx_hal.h"
#include "main.h"

#define StepMotor_1_H HAL_GPIO_WritePin(StepMotor_IN1_GPIO_Port, StepMotor_IN1_Pin, GPIO_PIN_SET)
#define StepMotor_1_L HAL_GPIO_WritePin(StepMotor_IN1_GPIO_Port, StepMotor_IN1_Pin, GPIO_PIN_RESET)
#define StepMotor_2_H HAL_GPIO_WritePin(StepMotor_IN2_GPIO_Port, StepMotor_IN2_Pin, GPIO_PIN_SET)
#define StepMotor_2_L HAL_GPIO_WritePin(StepMotor_IN2_GPIO_Port, StepMotor_IN2_Pin, GPIO_PIN_RESET)
#define StepMotor_3_H HAL_GPIO_WritePin(StepMotor_IN3_GPIO_Port, StepMotor_IN3_Pin, GPIO_PIN_SET)
#define StepMotor_3_L HAL_GPIO_WritePin(StepMotor_IN3_GPIO_Port, StepMotor_IN3_Pin, GPIO_PIN_RESET)
#define StepMotor_4_H HAL_GPIO_WritePin(StepMotor_IN4_GPIO_Port, StepMotor_IN4_Pin, GPIO_PIN_SET)
#define StepMotor_4_L HAL_GPIO_WritePin(StepMotor_IN4_GPIO_Port, StepMotor_IN4_Pin, GPIO_PIN_RESET)

void StepMotor_Control(uint8_t direction);
void StepMotor_Start(uint16_t angle, uint8_t direction);
void StepMotor_Stop(void);

#endif
