#ifndef GLOBALS_H
#define GLOBALS_H

#include <Arduino.h>
#include "SoftwareSerial.h"

/*Serial*/
extern SoftwareSerial SerialRemote;
extern int RX_SERIAL;
extern int TX_SERIAL;
extern bool debug;

/*BLUETOOTH*/
extern std::string nameBluetooth;
extern uint32_t pinBluetooth;
extern int delayBluetooth;

#endif