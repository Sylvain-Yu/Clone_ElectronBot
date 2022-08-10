#ifndef _COMMON_INC_H_
#define _COMMON_INC_H_

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
#endif /* _COMMON_INC_H_ */
