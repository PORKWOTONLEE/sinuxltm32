#include "userapp.h"
#include "bsp_led.h"

int userapp(void)
{
    LED_GPIO_Init();

    LED_WHITE;

    return 0;
}
