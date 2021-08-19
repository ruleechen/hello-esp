#include <Arduino.h>
#include <WiFi.h>
#include <BluetoothSerial.h>
#include <WebServer.h>

void ledOn() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(100); // at least light for some time
}

void ledOff() {
  digitalWrite(LED_BUILTIN, HIGH);
}

void setup() {
  Serial.begin(115200);

  pinMode(LED_BUILTIN, OUTPUT);
  ledOn();

  ledOff();
}

void loop() {
  delay(2000);
  ledOn();
  Serial.println("heartbeat");
  ledOff();
}
