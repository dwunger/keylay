# ArduinoBLE Quick Reference
## BLE class

- [`BLE.begin()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.begin/) (Initializes the BLE module) - Central/Peripheral
- [`BLE.end()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.end/) (Disables the BLE module) - Central/Peripheral
- [`BLE.poll()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.poll/) (Processes BLE events) - Central/Peripheral
- [`BLE.setEventHandler()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.seteventhandler/) (Sets up an event handler for BLE events) - Central/Peripheral
- [`BLE.connected()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.connected/) (Checks if a central device is connected) - Peripheral
- [`BLE.disconnect()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.disconnect/) (Disconnects the current central device) - Peripheral
- [`BLE.address()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.address/) (Gets the BLE device address) - Central/Peripheral
- [`BLE.rssi()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.rssi/) (Returns the signal strength of the connection) - Central/Peripheral
- [`BLE.setAdvertisedServiceUuid()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.setadvertisedserviceuuid/) (Sets the UUID for the advertised service) - Peripheral
- [`BLE.setAdvertisedService()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.setadvertisedservice/) (Sets the advertised service) - Peripheral
- [`BLE.setManufacturerData()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.setmanufacturerdata/) (Sets manufacturer-specific data for advertising) - Peripheral
- [`BLE.setLocalName()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.setlocalname/) (Sets the local name of the device for advertising) - Peripheral
- [`BLE.setDeviceName()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.setdevicename/) (Sets the device name) - Central/Peripheral
- [`BLE.setAppearance()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.setappearance/) (Sets the appearance of the device) - Peripheral
- [`BLE.addService()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.addservice/) (Adds a BLE service) - Peripheral
- [`BLE.advertise()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.advertise/) (Starts advertising the BLE service) - Peripheral
- [`BLE.stopAdvertise()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.stopadvertise/) (Stops advertising the BLE service) - Peripheral
- [`BLE.central()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.central/) (Returns the central device connected) - Peripheral
- [`BLE.setAdvertisingInterval()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.setadvertisinginterval/) (Sets the interval for BLE advertising) - Peripheral
- [`BLE.setConnectionInterval()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.setconnectioninterval/) (Sets the desired connection interval) - Peripheral
- [`BLE.setConnectable()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.setconnectable/) (Makes the device connectable or non-connectable) - Peripheral
- [`BLE.scan()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.scan/) (Starts scanning for BLE devices) - Central
- [`BLE.scanForName()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.scanforname/) (Scans for BLE devices with a specific name) - Central
- [`BLE.scanForAddress()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.scanforaddress/) (Scans for a device with a specific address) - Central
- [`BLE.scanForUuid()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.scanforuuid/) (Scans for devices offering a specific service UUID) - Central
- [`BLE.stopScan()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.stopscan/) (Stops the BLE scan) - Central
- [`BLE.available()`](https://www.arduino.cc/reference/en/libraries/arduinoble/ble.available/) (Checks if there are BLE devices available after scanning) - Central

## BLEDevice Class
- [`bleDevice.poll()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.poll/) (Processes BLE device events) - Central
- [`bleDevice.connected()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.connected/) (Checks if the device is connected) - Central
- [`bleDevice.disconnect()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.disconnect/) (Disconnects the device) - Central
- [`bleDevice.address()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.address/) (Gets the address of the BLE device) - Central
- [`bleDevice.rssi()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.rssi/) (Returns the signal strength of the connection with the device) - Central
- [`bleDevice.characteristic()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.characteristic/) (Accesses a specific characteristic of the device) - Central
- [`bleDevice.discoverAttributes()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.discoverattributes/) (Discovers attributes of the device) - Central
- [`bleDevice.discoverService()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.discoverservice/) (Discovers services offered by the device) - Central
- [`bleDevice.deviceName()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.devicename/) (Gets the name of the device) - Central
- [`bleDevice.appearance()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.appearance/) (Gets the appearance attribute of the device) - Central
- [`bleDevice.serviceCount()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.servicecount/) (Counts the services offered by the device) - Central
- [`bleDevice.hasService()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.hasservice/) (Checks if the device offers a specific service) - Central
- [`bleDevice.service()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.service/) (Accesses a specific service of the device) - Central
- [`bleDevice.characteristicCount()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.characteristiccount/) (Counts the characteristics in a service) - Central
- [`bleDevice.hasCharacteristic()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.hascharacteristic/) (Checks if a service has a specific characteristic) - Central
- [`bleDevice.hasLocalName()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.haslocalname/) (Checks if the device has a local name) - Central
- [`bleDevice.hasAdvertisedServiceUuid()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.hasadvertisedserviceuuid/) (Checks if the device advertises a specific UUID) - Central
- [`bleDevice.advertisedServiceUuidCount()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.advertisedserviceuuidcount/) (Counts the advertised service UUIDs) - Central
- [`bleDevice.localName()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.localname/) (Gets the local name of the device) - Central
- [`bleDevice.advertisedServiceUuid()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.advertisedserviceuuid/) (Gets one of the advertised service UUIDs) - Central
- [`bleDevice.connect()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledevice.connect/) (Initiates a connection to the device) - Central

## BLEService Class
- [`BLEService()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bleservice/) (Constructor for creating a new service) - Peripheral
- [`bleService.uuid()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bleservice.uuid/) (Gets the UUID of the service) - Peripheral
- [`bleService.addCharacteristic()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bleservice.addcharacteristic/) (Adds a characteristic to the service) - Peripheral
- [`bleService.characteristicCount()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bleservice.characteristiccount/) (Counts the characteristics in the service) - Peripheral
- [`bleService.hasCharacteristic()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bleservice.hascharacteristic/) (Checks if the service has a specific characteristic) - Peripheral
- [`bleService.characteristic()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bleservice.characteristic/) (Accesses a specific characteristic of the service) - Peripheral

## BLECharacteristic Class
- [`BLECharacteristic()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic/) (Constructor for creating a new characteristic) - Peripheral
- [`bleCharacteristic.uuid()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.uuid/) (Gets the UUID of the characteristic) - Peripheral
- [`bleCharacteristic.properties()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.properties/) (Gets the properties of the characteristic) - Peripheral
- [`bleCharacteristic.valueSize()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.valuesize/) (Gets the size of the characteristic value) - Peripheral
- [`bleCharacteristic.value()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.value/) (Gets the value of the characteristic) - Peripheral
- [`bleCharacteristic.valueLength()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.valuelength/) (Gets the length of the characteristic value) - Peripheral
- [`bleCharacteristic.readValue()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.readvalue/) (Reads the value of the characteristic) - Peripheral
- [`bleCharacteristic.writeValue()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.writevalue/) (Writes a value to the characteristic) - Peripheral
- [`bleCharacteristic.setEventHandler()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.seteventhandler/) (Sets an event handler for the characteristic) - Peripheral
- [`bleCharacteristic.broadcast()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.broadcast/) (Enables broadcasting of the characteristic) - Peripheral
- [`bleCharacteristic.written()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.written/) (Checks if the characteristic was written) - Peripheral
- [`bleCharacteristic.subscribed()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.subscribed/) (Checks if a central device has subscribed to the characteristic) - Peripheral
- [`bleCharacteristic.addDescriptor()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.adddescriptor/) (Adds a descriptor to the characteristic) - Peripheral
- [`bleCharacteristic.descriptorCount()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.descriptorcount/) (Counts the descriptors in the characteristic) - Peripheral
- [`bleCharacteristic.hasDescriptor()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.hasdescriptor/) (Checks if the characteristic has a specific descriptor) - Peripheral
- [`bleCharacteristic.descriptor()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.descriptor/) (Accesses a specific descriptor of the characteristic) - Peripheral
- [`bleCharacteristic.canRead()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.canread/) (Checks if the characteristic can be read) - Peripheral
- [`bleCharacteristic.canWrite()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.canwrite/) (Checks if the characteristic can be written) - Peripheral
- [`bleCharacteristic.canSubscribe()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.cansubscribe/) (Checks if the characteristic can be subscribed to) - Peripheral
- [`bleCharacteristic.subscribe()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.subscribe/) (Subscribes a central device to the characteristic) - Peripheral
- [`bleCharacteristic.canUnsubscribe()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.canunsubscribe/) (Checks if the subscription can be canceled) - Peripheral
- [`bleCharacteristic.unsubscribe()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.unsubscribe/) (Unsubscribes a central device from the characteristic) - Peripheral
- [`bleCharacteristic.valueUpdated()`](https://www.arduino.cc/reference/en/libraries/arduinoble/blecharacteristic.valueupdated/) (Checks if the characteristic value has been updated) - Peripheral

## BLEDescriptor Class
- [`BLEDescriptor()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledescriptor/) (Constructor for creating a new descriptor) - Peripheral
- [`bleDescriptor.uuid()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledescriptor.uuid/) (Gets the UUID of the descriptor) - Peripheral
- [`bleDescriptor.valueSize()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledescriptor.valuesize/) (Gets the size of the descriptor value) - Peripheral
- [`bleDescriptor.valueLength()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledescriptor.valuelength/) (Gets the length of the descriptor value) - Peripheral
- [`bleDescriptor.value()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledescriptor.value/) (Gets the value of the descriptor) - Peripheral
- [`bleDescriptor.readValue()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledescriptor.readvalue/) (Reads the value of the descriptor) - Peripheral
- [`bleDescriptor.read()`](https://www.arduino.cc/reference/en/libraries/arduinoble/bledescriptor.read/) (Alias for `readValue()`, reads the descriptor value) - Peripheral
