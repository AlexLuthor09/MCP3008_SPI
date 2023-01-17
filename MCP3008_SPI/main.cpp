#include <iostream>
#include <wiringPiSPI.h>
#include <wiringPi.h>

#include "PhaseMeter.h"
#include "MCP3008.h"




using namespace std;
int main(void)
{
    cout << "SPI SETUP" << endl;
   
    int MCP3008 = MCP3008_Setup();
    int ARDUINO = PHASEMETER_Setup();
    if (MCP3008 == -1 || ARDUINO == -1) {
       cout << "Failed to init SPI communication.\n";
        return -1;
    }
    cout << "SPI SETUP END.\n";
    int count = 0;
    while (1) {
        PHASEMETER_VOLTAGE(); //a faire avant de getPhase et GetVoltage
        cout <<"["<<count<<"]"<< " phase: " << PHASEMETER_GetPhase() << " || voltage : " << PHASEMETER_GetVoltage() << "\n";
        std::cout << "Courant MCP: " << MCP3008_GetCurrent() << "\n";
        count++;
    }
    
}