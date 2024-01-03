#include <adc.hpp>
#ifndef generic
#include <main.h>
extern ADC_HandleTypeDef hadc;
#endif

void stm32wle5_adc::initalize() {
#ifndef generic
    hadc.Instance                        = ADC;
    hadc.Init.ClockPrescaler             = ADC_CLOCK_SYNC_PCLK_DIV1;
    hadc.Init.Resolution                 = ADC_RESOLUTION_12B;
    hadc.Init.DataAlign                  = ADC_DATAALIGN_RIGHT;
    hadc.Init.ScanConvMode               = ADC_SCAN_DISABLE;
    hadc.Init.EOCSelection               = ADC_EOC_SINGLE_CONV;
    hadc.Init.LowPowerAutoWait           = DISABLE;
    hadc.Init.LowPowerAutoPowerOff       = ENABLE;
    hadc.Init.ContinuousConvMode         = DISABLE;
    hadc.Init.NbrOfConversion            = 1;
    hadc.Init.DiscontinuousConvMode      = DISABLE;
    hadc.Init.ExternalTrigConv           = ADC_SOFTWARE_START;
    hadc.Init.ExternalTrigConvEdge       = ADC_EXTERNALTRIGCONVEDGE_NONE;
    hadc.Init.DMAContinuousRequests      = DISABLE;
    hadc.Init.Overrun                    = ADC_OVR_DATA_PRESERVED;
    hadc.Init.SamplingTimeCommon1        = ADC_SAMPLETIME_79CYCLES_5;
    hadc.Init.SamplingTimeCommon2        = ADC_SAMPLETIME_79CYCLES_5;
    hadc.Init.OversamplingMode           = DISABLE;
    hadc.Init.Oversampling.Ratio         = ADC_OVERSAMPLING_RATIO_8;
    hadc.Init.Oversampling.RightBitShift = ADC_RIGHTBITSHIFT_NONE;
    hadc.Init.Oversampling.TriggeredMode = ADC_TRIGGEREDMODE_SINGLE_TRIGGER;
    hadc.Init.TriggerFrequencyMode       = ADC_TRIGGER_FREQ_HIGH;
    if (HAL_ADC_Init(&hadc) != HAL_OK) {
        Error_Handler();
    }
#endif
}

bool stm32wle5_adc::isReady() {
    return true;
}