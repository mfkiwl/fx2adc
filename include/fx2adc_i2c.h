#ifndef __I2C_H
#define __I2C_H

int fx2adc_i2c_write_fn(void *dev, uint8_t i2c_addr, uint8_t *buffer, uint16_t len);
int fx2adc_i2c_read_fn(void *dev, uint8_t i2c_addr, uint8_t *buffer, uint16_t len);

#endif
