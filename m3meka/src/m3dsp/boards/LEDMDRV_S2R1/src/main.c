/* 
M3 -- Meka Robotics Real-Time Control System
Copyright (c) 2010 Meka Robotics
Author: edsinger@mekabot.com (Aaron Edsinger)

M3 is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

M3 is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with M3.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <p33Fxxxx.h>
#include "setup.h"


//---------------------------------------------------------------
//                  CONFIG
//---------------------------------------------------------------
//New config set
//Refer to p33FJ32MC204.h for the details
_FWDT(FWDTEN_OFF & WINDIS_OFF & WDTPRE_PR128 & WDTPOST_PS32768);					/* Turn off the Watch-Dog Timer.  */
_FPOR(FPWRT_PWR1 & ALTI2C_ON & HPOL_ON & LPOL_ON & PWMPIN_ON);			// Turn off the power-up timers, ALTI2C = 0: I2C mapped to ASDA1/ASCL1
_FOSCSEL(FNOSC_PRIPLL & IESO_ON);	// Auto switch to the EC+PLL clock
//Clock switching+monitor disabled, OSC2 is clock O/P, External clock, allow lock/unlock of peripheral-pin-select
_FOSC(FCKSM_CSDCMD & OSCIOFNC_OFF  & POSCMD_EC & IOL1WAY_OFF); 
_FGS(GCP_OFF & GSS_OFF & GWRP_OFF);            							// Disable Code Protection
_FICD(ICS_PGD2 & JTAGEN_OFF);

//---------------------------------------------------------------------------------
//                     MAIN
//---------------------------------------------------------------------------------

int main (void)
{

	uint16_t i;

	//Setup oscillator/ports/pins first
	setup_oscillator();
	setup_ports();
	setup_peripheral_pin_select();
	setup_interrupt_priorities();

	setup_dio();

	setup_timer3();

	setup_led_mdrv();

	while (!eeprom_loaded())		//Wait until ESC is ready
		//ToggleHeartbeatLED();				//Success
		SetHeartbeatLED;
	setup_ethercat();
	ClrHeartbeatLED;

	setup_interrupt_priorities();
	
	while(1)
	{

		step_ethercat();
	
//		if (step_led_flag == 1)

//		if (i++%10==0)
//			step_led_mdrv();

	}
	
}
