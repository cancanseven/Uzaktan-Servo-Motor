#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#include <Servo.h>
Servo servo;

char auth[] = "yivQO6rMYDeAqnaZmx4k0oRy3r71A2UQ";
char ssid[] = "Dsmart_129";
char pass[] = "70866187";

BLYNK_WRITE(V1) {
  
  servo.write(param.asInt());
}

void setup() {
  
  Serial.begin(115200);
  servo.attach(D4);
  Blynk.begin(auth, ssid, pass);  
}

void loop() {
  Blynk.run();
}
