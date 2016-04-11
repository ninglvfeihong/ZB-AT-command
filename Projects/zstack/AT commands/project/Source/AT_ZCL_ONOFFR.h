
#ifndef AT_ZCL_ONOFFR_H
#define AT_ZCL_ONOFFR_H

#include "zcl.h"


#define AT_ZCL_ONOFFR_ENDPOINT            0x21
#define AT_ZCL_ONOFFR_MAX_ATTRIBUTES      10

#define AT_ZCL_GEN_OFF                       0x00
#define AT_ZCL_GEN_ON                        0x01

#define AT_ZCL_ONOFFR_IDENTIFY_TIMEOUT_EVT    0x0001
#define AT_ZCL_ONOFFR_WDG_TIMEOUT_EVT         0x0002   //for watch dog of switch
/*********************************************************************
 * Global variable
 */

extern SimpleDescriptionFormat_t AT_ZCL_ONOFFR_SimpleDesc;
extern CONST zclAttrRec_t AT_ZCL_ONOFFR_Attrs[];
extern uint16 AT_ZCL_ONOFFR_IdentifyTime;
extern uint8  AT_ZCL_ONOFFR_OnOff;


/*********************************************************************
 * FUNCTIONS
 */

 /*
  * Initialization for the task
  */
extern void AT_ZCL_ONOFFR_Init( byte task_id );

/*
 *  Event Process for the task
 */
extern UINT16 AT_ZCL_ONOFFR_event_loop( byte task_id, UINT16 events );

extern void AT_ZCL_ONOFFR_EP_ENABLE( bool isEnable);

#endif