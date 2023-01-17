#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <string.h>
#include <errno.h>

#include <wiringPi.h>
#include <wiringPiSPI.h>

#include "PhaseMeter.h"
#include <iostream>

int ARDUINO;
char ARDUINO_voltage = 0;
char ARDUINO_phase = 0;
unsigned char buffer[3];


using namespace std;

int PHASEMETER_Setup() {
	ARDUINO = wiringPiSPISetup(ARDUINO_SPI_CHANNEL, SPI_CLOCK_SPEED);
}
void PHASEMETER_VOLTAGE() {
	int mesures[2];
	//digitalWrite(ARDUINO_SPI_CHANNEL, LOW);
	wiringPiSPIDataRW(ARDUINO_SPI_CHANNEL, buffer, sizeof(buffer));
	delay(100);
	//for(int i =0;i<sizeof(buffer);i++)
		//cout << "buffer[" << i << "] :" << (int)buffer[i] << endl;

	ARDUINO_voltage=buffer[1];
	ARDUINO_phase = buffer[0];
}
int PHASEMETER_GetVoltage() {
	return ARDUINO_voltage;
}
int PHASEMETER_GetPhase(){
	return ARDUINO_phase;
}
