#ifndef _MCP3008
#define _MCP3008
	extern int MCP3008_Setup();
	extern int MCP3008_GetCurrent();
	extern int MCP3008_GetVoltage();

#define MCP3008_SPI_CHANNEL 1 // CE1
#define MCP3008_pin 69
#define SPI_CLOCK_SPEED 1000000
#define channelcurrent 0
#define channelvolt 1

#endif
