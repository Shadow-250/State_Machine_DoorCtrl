/* @author   : Nguyen Hoang Phung
 * student-id: 1710246
 * e-mail: phung.nguyen104@hcmut.edu.vn
 * nickname  : NHP
 * version   : 1.0.0
 */

#ifndef GPIO_PORTF_H_
#define GPIO_PORTF_H_

#define LED_PORT_F GPIO_PORTF_BASE
#define LED_R GPIO_PIN_1
#define LED_B GPIO_PIN_2
#define SW_PORT GPIO_PORTF_BASE
#define SW_1 GPIO_PIN_4

void Config_LED_F(void);
void Config_SWITCH(void);


#endif /* GPIO_PORTF_H_ */
