#include "key_task.h"
#include "cmsis_os.h"
#include "vofa.h"
#include "bsp_user_key.h"
#include "bsp_buzzer.h"
#include "ws2812.h"

float vbus = 0;
volatile uint16_t adc_val[2];

void KeyTask_Entry(void const * argument)
{
    /* USER CODE BEGIN KeyTask_Entry */
    
    /* USER CODE END KeyTask_Entry */
}



