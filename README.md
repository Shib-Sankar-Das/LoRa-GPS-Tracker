# LoRa GPS Tracker

This project demonstrates how to transmit and receive GPS data using LoRa modules and ESP32. The sender collects GPS coordinates and transmits them over LoRa, while the receiver listens for and displays the incoming data.

## Components Required
1. **ESP32 (2 units)** - One for the sender and one for the receiver.
2. **LoRa Module (2 units)** - For wireless communication.
3. **GPS Module (e.g., Neo-6M)** - For obtaining GPS coordinates (used with the sender).
4. **Jumper Wires** - For connections.
5. **Power Supply** - For powering the ESP32.

## Features
- Sends GPS coordinates (latitude and longitude) from the sender to the receiver using LoRa.
- Simple communication setup with reliable transmission.
- Receiver displays the data on the serial monitor.

## Circuit Diagram
### Sender
- **GPS RX** → ESP32 GPIO16
- **GPS TX** → ESP32 GPIO17
- **LoRa SS** → ESP32 GPIO5
- **LoRa RST** → ESP32 GPIO14
- **LoRa DIO0** → ESP32 GPIO26

### Receiver
- **LoRa SS** → ESP32 GPIO5
- **LoRa RST** → ESP32 GPIO14
- **LoRa DIO0** → ESP32 GPIO26

## Code Overview
### Sender
1. Initializes LoRa and GPS modules.
2. Continuously reads GPS data.
3. Sends the GPS coordinates (latitude, longitude) via LoRa.

### Receiver
1. Initializes LoRa module.
2. Continuously listens for LoRa packets.
3. Prints received data to the serial monitor.

## How to Use
1. **Upload the Sender Code**:
   - Upload the sender code to the ESP32 connected to the GPS module.
   - Connect the GPS module to the appropriate pins on the ESP32.

2. **Upload the Receiver Code**:
   - Upload the receiver code to the ESP32 connected to the LoRa module.

3. **Run the Setup**:
   - Power up both ESP32 devices.
   - Open the Serial Monitor (set baud rate to 9600) for both devices.

4. **View Data**:
   - On the sender, you will see "Sending Data" followed by the GPS coordinates.
   - On the receiver, you will see "Receiving Data" followed by the received GPS coordinates.

## Dependencies
- [LoRa Library](https://github.com/sandeepmistry/arduino-LoRa) (Install via Arduino Library Manager)
- [TinyGPS++ Library](https://github.com/mikalhart/TinyGPSPlus) (Install via Arduino Library Manager)

## Notes
- Ensure both the sender and receiver LoRa modules are configured to operate at the same frequency (433 MHz in this example).
- Ensure the GPS module has a clear view of the sky to acquire satellite signals.
- Adjust pin connections in the code if you're using a custom setup.

## ScreenShort
### Sender
![IMG_20241124_021944_1](https://github.com/user-attachments/assets/d57c1bfa-da7a-4afc-84e1-4946517ba038)


### Receiver
![IMG_20241124_021918_1](https://github.com/user-attachments/assets/a938faf7-6a5b-4c2f-ac05-b37f4e7b947c)


