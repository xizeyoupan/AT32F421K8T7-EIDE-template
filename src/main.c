/**
 **************************************************************************
 * @file     main.c
 * @brief    main program
 **************************************************************************
 *                       Copyright notice & Disclaimer
 *
 * The software Board Support Package (BSP) that is made available to
 * download from Artery official website is the copyrighted work of Artery.
 * Artery authorizes customers to use, copy, and distribute the BSP
 * software and its related documentation for the purpose of design and
 * development in conjunction with Artery microcontrollers. Use of the
 * software is governed by this copyright notice and the following disclaimer.
 *
 * THIS SOFTWARE IS PROVIDED ON "AS IS" BASIS WITHOUT WARRANTIES,
 * GUARANTEES OR REPRESENTATIONS OF ANY KIND. ARTERY EXPRESSLY DISCLAIMS,
 * TO THE FULLEST EXTENT PERMITTED BY LAW, ALL EXPRESS, IMPLIED OR
 * STATUTORY OR OTHER WARRANTIES, GUARANTEES OR REPRESENTATIONS,
 * INCLUDING BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT.
 *
 **************************************************************************
 */

#include "at32f421_clock.h"

void gpio_config(void)
{
    gpio_init_type gpio_init_struct;

    /* enable the gpioa clock */
    crm_periph_clock_enable(CRM_GPIOA_PERIPH_CLOCK, TRUE);

    /* set default parameter */
    gpio_default_para_init(&gpio_init_struct);

    /* configure the gpio */
    gpio_init_struct.gpio_drive_strength = GPIO_DRIVE_STRENGTH_STRONGER;
    gpio_init_struct.gpio_out_type       = GPIO_OUTPUT_PUSH_PULL;
    gpio_init_struct.gpio_mode           = GPIO_MODE_OUTPUT;
    gpio_init_struct.gpio_pins           = GPIO_PINS_2;
    gpio_init_struct.gpio_pull           = GPIO_PULL_NONE;
    gpio_init(GPIOA, &gpio_init_struct);
}

int main(void)
{
    system_clock_config();
    gpio_config();
    while (1) {
        GPIOA->scr = GPIO_PINS_2;
        __NOP();
        __NOP();
        /* reset pa.01 */
        GPIOA->clr = GPIO_PINS_2;
        __NOP();
        __NOP();
        GPIOA->scr = GPIO_PINS_2;
        __NOP();
        __NOP();
        /* reset pa.01 */
        GPIOA->clr = GPIO_PINS_2;
        __NOP();
        __NOP();
        GPIOA->scr = GPIO_PINS_2;
        __NOP();
        __NOP();
        /* reset pa.01 */
        GPIOA->clr = GPIO_PINS_2;
        __NOP();
        __NOP();
        GPIOA->scr = GPIO_PINS_2;
        __NOP();
        __NOP();
        /* reset pa.01 */
        GPIOA->clr = GPIO_PINS_2;
        __NOP();
        __NOP();
    }
}
