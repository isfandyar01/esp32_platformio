extern "C" 
{
#include "driver/adc.h"
#include "freertos/FreeRTOS.h"
#include "esp_adc/adc_continuous.h"

#define ADC_CONT_MODE 0
#define ADC_SINGLE_SHOT_MODE

#ifdef ADC_CONT_MODE
{
adc_continuous_handle_cfg_t adc_config = {
    .max_store_buf_size = 1024,
    .conv_frame_size = 100,
};
ESP_ERROR_CHECK(adc_continuous_new_handle(&adc_config));
}
#endif




}