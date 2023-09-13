
#ifndef PS2PROTOCOL_H_
#define PS2PROTOCOL_H_

/* Private includes ----------------------------------------------------------*/
#include "configboard.h"
#include "swqueue.h"
/* Private typedef -----------------------------------------------------------*/
enum {START_BIT=1,PARITY_BIT=10,STOP_BIT=11};
/* Private define ------------------------------------------------------------*/

#define PS2QUEUEBUFFERSIZE  10
/* Size of a ps2 scan code is 1 byte */
#define PS2QUEUEDATASIZE    1
/* Private macro -------------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
extern swqueue_t ps2queueobj;
extern uint8_t ps2queuedatabuffer[PS2QUEUEBUFFERSIZE];
/**
  * @brief Initializing the PS2 clock as external interrupt and data as digital input
  * @return None
  **/
void vPS2IntInitialize(void);


#endif /* PS2PROTOCOL_H_ */
