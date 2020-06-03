//state.h
/* @author   : Nguyen Hoang Phung
 * student-id: 1710246
 * e-mail: phung.nguyen104@hcmut.edu.vn
 * nickname  : NHP
 * version   : 1.0.0
 */

#ifndef STATE_STATE_H_
#define STATE_STATE_H_

#define OPENDOOR 1<<2
#define CLOSEDOOR 0

#define LEDON   GPIOPinWrite(LED_PORT_F,LED_R,1<<1);
#define LEDOFF  GPIOPinWrite(LED_PORT_F,LED_R,0);

//
typedef enum{
    S_NOMOTION,
    S_WAIT_MOTION,
    S_MOTION,
    S_WAIT_NOMOTION
}motionState_t;
typedef enum{
    MOTION,
    NOMOTION
}motionSensor_t;
typedef enum{
    D_MOTION,
    D_NOMOTION
}motionDetector_t;
typedef enum{
    S_LEDON,
    S_LEDOFF
}ledState_t;
typedef enum{
    S_DOOR_CLOSE,
    S_DOOR_OPEN,
    S_DOOR_WAIT_CLOSE
}doorState_t;


motionSensor_t motionSensor(void);

// ---------------------------------------------------------------------------------------------------------------------------------

void doorCtrl(int State);
void ledinit(void);

// ---------------------------------------------------------------------------------------------------------------------------------
// Initial State of Machine
void initmotionState(void);
void initDoorState(void);
void initLedState(void);

// ---------------------------------------------------------------------------------------------------------------------------------
// State Updates
void motionStateMachineUpdate(void);
void doorStateMachineUpdate(void);
void ledStateMachineUpdate(void);

#endif /*STATE_STATE_H_ */
