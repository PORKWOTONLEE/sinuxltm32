#include "userapp.h"
#include "bsp_led.h"
#include "bsp_rcc.h"

int userapp(void)
{
    HSE_SetSysCLock(RCC_PLLMul_9);
    LED_GPIO_Init();

    while (1)
    {
        LED1_TOGGLE;
        LED2_TOGGLE;
        LED3_TOGGLE;
        Delay(1000000);
    }

    return 0;
}
