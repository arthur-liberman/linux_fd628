#ifndef __I2CH__
#define __I2CH__

#include "protocol.h"
#include "../openvfd_drv.h"

#define I2C_DELAY_500KHz	1
#define I2C_DELAY_250KHz	2
#define I2C_DELAY_100KHz	5
#define I2C_DELAY_20KHz	25

#define I2C_MSB_FIRST		0
#define I2C_LSB_FIRST		1

struct protocol_interface *init_i2c(unsigned char _address, unsigned char _lsb_first, struct vfd_pin pin_scl, struct vfd_pin pin_sda, unsigned long i2c_delay);

#endif
