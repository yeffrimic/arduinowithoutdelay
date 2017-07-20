#include<ESP8266WiFi.h>
int tiempoLed1 = 3; // segundos
int tiempoLed2 = 1; // segundos
int tiempoLed3 = 10; // segundos
long tiempoAnterior1;
long tiempoAnterior2;
long tiempoAnterior3;
int led1 = 13;
int led2 = 12;
int led3 = 11;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  tiempoAnterior1 = millis();
  tiempoAnterior2 = millis();
  tiempoAnterior3 = millis();
}

void loop() {
  if (millis() - tiempoAnterior1 > tiempoLed1 * 1000) { // multiplicamos por mil para segundos
    tiempoAnterior1 = millis();
  digitalWrite(led1, !digitalRead(led1));
  }  if (millis() - tiempoAnterior2 > tiempoLed1 * 1000) { // multiplicamos por mil para segundos
    tiempoAnterior2 = millis();
  digitalWrite(led2, !digitalRead(led1));
  }  if (millis() - tiempoAnterior3 > tiempoLed1 * 1000) { // multiplicamos por mil para segundos
    tiempoAnterior3 = millis();
  digitalWrite(led3, !digitalRead(led1));
  }
}
