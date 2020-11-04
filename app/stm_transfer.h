#ifndef STM_TRANSFER_H_
#define STM_TRANSFER_H_
#include "nrf_drv_spi.h"

#define SPI_INSTANCE  0 /**< SPI instance index. */  
#define TEST_STRING "Nordic"

#define SPI_SCK_PIN 3
#define SPI_MISO_PIN 28
#define SPI_MOSI_PIN 4
#define SPI_SS_PIN 29

void stm_trans_init(void);
void stm_transfer(void *p_event_data,uint16_t event_size);


#endif
