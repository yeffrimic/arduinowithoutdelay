/*
 * ejemplo parpadeo
 * Este codigo demuestra el uso de milis y no 
 * delay para poder parpadear el led 13 
 * cada 3 segundos.
 * Yeffri J. Salazar 
 * 13 de julio de 2017 
 * 
 */

#define led 13
uint16_t tiempoEstablecido = 10; // segundos
unsigned long tiempoAnterior;
boolean estadoLed;
void setup() {
  pinMode(led, 1);
  //Serial.begin(9600);
  tiempoAnterior = millis();
  //Serial.println(tiempoAnterior);
}

void loop() {
  //Serial.println(millis()-tiempoAnterior);
  if (millis() - tiempoAnterior > tiempoEstablecido * 1000) { // multiplicamos por mil ya que lo que estamos evaluando son milisegundos y no los segundos de la variable tiempoEstablecido
    //ejecutar codigo
    estadoLed = !digitalRead(led);
    tiempoAnterior=millis();
  }
  digitalWrite(led, estadoLed);

}
