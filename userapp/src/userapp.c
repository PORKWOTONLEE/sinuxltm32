#include "userapp.h"
#include "bsp_led.h"
#include "bsp_key.h"

int userapp(void)
{
    LED_GPIO_Init();
    Key_GPIO_Init();

    while (1)
    {
        if (Key_Scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN))
        {
            LED1_TOGGLE;
            LED2_TOGGLE;
            LED3_TOGGLE;
        }
        else
        {

        }
    }

    return 0;
}
