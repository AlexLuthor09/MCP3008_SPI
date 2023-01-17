
#include <wiringPi.h>
#include <wiringPiSPI.h>
#include <mcp3004.h>

#include "MCP3008.h"
#include <iostream>
using namespace std;

int MCP3008_Setup() {
	wiringPiSPISetup(MCP3008_SPI_CHANNEL, SPI_CLOCK_SPEED);
	int MCP3008 = mcp3004Setup(MCP3008_pin, MCP3008_SPI_CHANNEL);
}
int MCP3008_GetCurrent() {

	return analogRead(MCP3008_pin+channelcurrent);
	
}
int MCP3008_GetVoltage() {

	return analogRead(MCP3008_pin + channelvolt);

}