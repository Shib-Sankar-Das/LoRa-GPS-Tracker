
#include <SPI.h>
#include <LoRa.h>
#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#define SS 5
#define RST 14
#define DIO0 26

#define RXPin 16        // GPS RX pin connected to ESP32 GPIO3
#define TXPin 17 

TinyGPSPlus gps;
SoftwareSerial gpsSerial(RXPin, TXPin);
void setup()
{
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Sender Host");
  LoRa.setPins(SS, RST, DIO0);
  if (!LoRa.begin(433E6)) {
    Serial.println("LoRa Error");
    delay(100);
    while (1);
  }
}
void loop()
{
  Serial.print("Sending Data: ");
  String dataString = String(gps.location.lat(), 6) + "," + String(gps.location.lng(), 6);
  Serial.println(dataString);
        LoRa.beginPacket();
        LoRa.print(dataString);
        LoRa.endPacket();
  delay(3000);
}