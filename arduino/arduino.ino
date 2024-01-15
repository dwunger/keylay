#include <ArduinoBLE.h>

#define HID_KEYBOARD 0xC103
#define DEVICE_ID "Bluetooth Keyboard Relay"
void blePeripheralConnectHandler(BLEDevice central) {
  // central connected event handler
  Serial.print("Connected event, central: ");
  Serial.println(central.address());
}

void blePeripheralDisconnectHandler(BLEDevice central) {
  // central disconnected event handler
  Serial.print("Disconnected event, central: ");
  Serial.println(central.address());
}

void setup() {
    
    // begin initialization
    if (!BLE.begin()) {
        Serial.println("starting Bluetooth® Low Energy module failed!");
    }
    // assign event handlers for connected, disconnected to peripheral
    BLE.setEventHandler(BLEConnected, blePeripheralConnectHandler);
    BLE.setEventHandler(BLEDisconnected, blePeripheralDisconnectHandler);    

    BLE.setAppearance(HID_KEYBOARD);

    BLE.setLocalName(DEVICE_ID);

    while(BLE.connected()) {
        Serial.print("Doing Bluetooth stuff...");
    }
    
    BLE.advertise();

    if (BLE.connected()) {
        
        BLE.disconnect();
    }
}

void loop() {
}
