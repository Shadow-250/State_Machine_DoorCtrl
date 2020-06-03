/* @author   : Nguyen Hoang Phung
 * student-id: 1710246
 * e-mail: phung.nguyen104@hcmut.edu.vn
 * nickname  : NHP
 * version   : 1.0.0
 */

#include "../NHP.h"
#include "GPIO_PORTF.h"

void Config_LED_F(void){
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(LED_PORT_F, LED_R);
    GPIOPinTypeGPIOOutput(LED_PORT_F, LED_B);
    GPIOPinWrite(LED_PORT_F, LED_R, 0);
    GPIOPinWrite(LED_PORT_F, LED_B, 0);

}
void Config_SWITCH(void){
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOInput(SW_PORT,SW_1);
    GPIOPadConfigSet(SW_PORT, SW_1, GPIO_STRENGTH_8MA, GPIO_PIN_TYPE_STD_WPU);

}
