#ifndef _UART_FRAME_H
#define _UART_FRAME_H

#include <stdio.h>
#include "freertos/FreeRTOS.h"

typedef struct {
    uint8_t *buf;
    uint32_t buf_size;
} rx_buffer_t;

typedef enum {
    IDLE = 0x00,
    WAIT_FINISH ,
    FINISH,
} frame_state_n;

extern QueueHandle_t uart_buffer_quenue;
extern frame_state_n frame_state;

extern void uart_init();
extern void uart_frame_task(void *arg);

#endif
