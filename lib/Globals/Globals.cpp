#include <Arduino.h>
#include "Globals.h"
#include "SoftwareSerial.h"

/*Serial*/
SoftwareSerial SerialRemote;
int RX_SERIAL = 13;
int TX_SERIAL = 22;
bool debug = false;

/*BLUETOOTH*/
std::string nameBluetooth = "Machine";
uint32_t pinBluetooth = 999999;
int delayBluetooth = 30;
