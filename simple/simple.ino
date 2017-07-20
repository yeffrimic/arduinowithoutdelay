/*
 * ejemplo simple
 * Este codigo demuestra el uso de milis y no 
 * delay para poder ejecutar cualquier codigo 
 * cada 3 segundos.
 * Yeffri J. Salazar 
 * 13 de julio de 2017 
 * 
 */


int tiempoEstablecido = 3; // segundos
long tiempoAnterior;

void setup() {
  tiempoAnterior = millis();
}

void loop() {
  if (millis() - tiempoAnterior > tiempoEstablecido * 1000) { // multiplicamos por mil ya que lo que estamos evaluando son milisegundos y no los segundos de la variable tiempoEstablecido
    //ejecutar codigo
  }

}
