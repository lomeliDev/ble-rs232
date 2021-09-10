#include <Arduino.h>
#include <SoftwareSerial.h>
#include "Globals.h"
#include "Write.h"
#include "Bluetooth.h"
#include "Serial.h"

void setup()
{
  Serial.begin(38400);
  nameBluetooth = "Ziros-Machine-BLE-RS232";
  pinBluetooth = 999999;
  delayBluetooth = 30;
  SerialRemote.begin(9600, SWSERIAL_8N1, RX_SERIAL, TX_SERIAL, false, 256); // SWSERIAL_8E1, SWSERIAL_8N1
  setupBluetooth();
}

void loop()
{
  loopReadBluetooth();
  SerialLoopRead();
  delay(10);
}