#ifndef _PHASEMETER
#define _PHASEMETER

	extern int PHASEMETER_Setup();
	extern void PHASEMETER_VOLTAGE();
	extern int PHASEMETER_GetVoltage();
	extern int PHASEMETER_GetPhase();
	 

#define SPI_CLOCK_SPEED 1000000
#define ARDUINO_SPI_CHANNEL 0 //CE0
#endif