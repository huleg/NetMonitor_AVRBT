/* * Project: Bluetooth Net Monitor * Author: Zak Kemble, contact@zakkemble.co.uk * Copyright: (C) 2013 by Zak Kemble * License: GNU GPL v3 (see License.txt) * Web: http://blog.zakkemble.co.uk/bluetooth-net-monitor-v2/ */#ifndef PING_H_#define PING_H_#include <stdint.h>#include "typedefs.h"void ping_init(void);void ping_end(void);uint16_t ping_get(void);byte ping_loss(void);void ping_setHost(char*);#endif /* PING_H_ */