/*
 * main.c
 */
#include <NHP.h>


int main(void) {
    // Active system clock
    SysCtlClockSet(SYSCTL_SYSDIV_1|SYSCTL_USE_PLL|SYSCTL_OSC_MAIN|SYSCTL_XTAL_16MHZ);
    Config_LED_F(); //doorCtrlIninit
    Config_SWITCH(); //Sensor Initial
    SysTickPeriodSet(SysCtlClockGet()/1000);
    IntMasterEnable();
    SysTickEnable();
    SysTickIntEnable();

    initDoorState();
    initLedState();
    initmotionState();

    while(1)
    {
        motionStateMachineUpdate();
        doorStateMachineUpdate();
        ledStateMachineUpdate();
    }
}
