/*
 * ejemplo simple
 * Este codigo demuestra el uso de milis y no 
 * delay para poder ejecutar cualquier codigo 
 * cada 3 segundos.
 * Yeffri J. Salazar 
 * 13 de julio de 2017 
 * 
 */


uint16_t tiempoEstablecido = 3; // segundos
uint16_t tiempoAnterior;

void setup() {
  
  Serial.begin(9600);
  tiempoAnterior = millis();
  Serial.println(tiempoAnterior);
}

void loop() {
  Serial.println(millis()-tiempoAnterior);
  if (millis() - tiempoAnterior > tiempoEstablecido * 1000) { // multiplicamos por mil ya que lo que estamos evaluando son milisegundos y no los segundos de la variable tiempoEstablecido
    //ejecutar codigo
    tiempoAnterior=millis();
    Serial.println("hola mundo");
  }

}
