#include "bsp_key.h"

void Key_GPIO_Init()
{
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd(KEY1_GPIO_CLK | KEY2_GPIO_CLK, ENABLE);

    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    
    GPIO_Init(KEY1_GPIO_PORT, &GPIO_InitStructure);
    GPIO_Init(KEY2_GPIO_PORT, &GPIO_InitStructure);
}

uint8_t Key_Scan(GPIO_TypeDef *GPIO_x, uint16_t GPIO_Pin)
{
    if (GPIO_ReadInputDataBit(GPIO_x, GPIO_Pin) == KEY_ON)
    {
        while (GPIO_ReadInputDataBit(GPIO_x, GPIO_Pin) == KEY_ON);
        return 1;
    }
    else
    {
        return 0;
    }
}