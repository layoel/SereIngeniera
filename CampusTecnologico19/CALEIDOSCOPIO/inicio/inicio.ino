/*
 * Realiza los siguientes cambios por orden y observa ¿que pasa?
 * 
 * 1º PRUEBA CAMBIAR LOS VALORES DE  ENTRE 0 Y 255 Y SUBELO A LA PLACA 
 * 
 * 2º CAMBIA el valor de DELAYVAL y subelo a la placa
 * 
 * 3º AVERIGUA donde se indica que led debe encenderse. 
 *--->Pista ---> Realiza un cambio en uno de los bucles y 
 *subelo a la placa ¿que ha pasado? si aun no lo has descubierto
 *sigue realizando cambios.
 *
 *4º ENCIENDE solo el led 1
 *
 *5º ENCIENDE solo el led 5
 *
 *6º ENCIENDE el led 2 de color verde y el led 1 de color azul.
 *
 *7º ENCIENDE todos los leds a la vez del color que más te guste.
 *
 *8º ENCIENDE cada led de un color distinto.
 *
 *9º ENCIENDE cada led de un color distinto. 
 *
 *10º Crea el vector1 de leds con los leds 3,4,5 y vector2 de leds con los led 1 y 2. 
 *Ponles el color rojo al vector1 y color azul al vector 2
 *
 *¡Ya estamos listas para montar nuestro caleidoscopio y crear
 * la secuencia que queremos para los leds de colores!
 */

#include <Adafruit_NeoPixel.h>

#define PIN        7 
#define NUMPIXELS 5 

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 500 

 uint8_t colR=150;
 uint8_t colG=30;
 uint8_t colB=15;
 
void setup() {
  pixels.begin();
}

void loop() {
  pixels.clear();
  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(colR, 0, 0));

    pixels.show();   

    delay(DELAYVAL); 
  }


    for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(0, colG, 0));
    pixels.show();  
    delay(DELAYVAL); 
  }

    for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(0, 0, colB));
    pixels.show();   
    delay(DELAYVAL); 
  }

    for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(colR, 0, colB));
    pixels.show();   
    delay(DELAYVAL); 
  }

    for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(colR, colG, 0));
    pixels.show();   
    delay(DELAYVAL); 
  }
      for(int i=0; i<NUMPIXELS; i++) { // For each pixel...
    pixels.setPixelColor(i, pixels.Color(colR, colG, colB));
    pixels.show();   
    delay(DELAYVAL);
  }
}
