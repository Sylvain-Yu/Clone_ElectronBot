#ifndef __COMMON_INC_H__
#define __COMMON_INC_H__

#define CONFIG_FW_VERSION 1.0

/*---------------------------- C Scope ---------------------------*/
#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"
#include "adc.h"
#include "i2c.h"
#include "tim.h"
#include "flash.h"


void Main();

extern uint64_t serialNumber;
extern char serialNumberStr[13];


#ifdef __cplusplus
}

/*---------------------------- C++ Scope ---------------------------*/

//#include "motor.h"


#endif
#endif /* __COMMON_INC_H__ */
