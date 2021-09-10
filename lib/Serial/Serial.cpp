#include <Arduino.h>
#include "Serial.h"
#include "Write.h"
#include "Globals.h"
#include "Bluetooth.h"

void SerialLoopRead()
{
    if (SerialRemote.available() > 0)
    {
        while (SerialRemote.available())
        {
            byte byteSerial = SerialRemote.read();
            byte msg[1];
            msg[0] = byteSerial;

            writeBluetooth(byteSerial);

            if (debug == true)
            {
                Serial.write(msg, 1);
            }

            delay(delayBluetooth);
        }
    }
}