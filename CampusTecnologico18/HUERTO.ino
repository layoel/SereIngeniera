
//porta pilas 12V https://www.youtube.com/watch?v=45mqkY-hYU4
//SENSOR DE LLUVIA

/*
 *https://www.luisllamas.es/arduino-lluvia/
 * 
 *
 */
 const int sensorPin = 9;
void setup() {
  Serial.begin(9600);   //iniciar puerto serie
  pinMode(sensorPin, INPUT);  //definir pin como entrada
}
 
void loop(){
  int value = 0;
  
  value = digitalRead(sensorPin );  //lectura digital de pin
  
  Serial.print("llueve:");
  Serial.println(value);
  
  
  if (value == HIGH) {
      Serial.println("Esta lloviendo!!!");
  }
  else
    Serial.println("NO llueve");
  delay(1000);
}//*/

//SENSOR DE HUMEDAD:
/*
 * https://www.luisllamas.es/arduino-humedad-suelo-fc-28/
 * 
 */
 /*
const int sensorHUMEDAD = A1;
 
void setup() {
   Serial.begin(9600);
}
 
void loop() 
{
   int humedad = analogRead(sensorHUMEDAD);
   Serial.print("humedad:");
   Serial.println(humedad);
  
   if(humedad > 300)// el valor muy alto significa que la planta esta muy seca
   {
      Serial.println("Encendider bomba agua");  
      //hacer las acciones necesarias
   }
   else
     Serial.println("APAGAR bomba agua");  
   delay(1000);
}*/
//*/

//FOTORRESIST3ENCIA
/*
const int LDRPin = A0;
const int excitacion = 100;
 
void setup() {
   pinMode(LDRPin, INPUT);
   Serial.begin(9600);
}
 
void loop() {
   int input = analogRead(LDRPin);
   if (input < excitacion) {
      Serial.println("Es de noche");
   }
   else {
       Serial.println("Es de dia");
   }
}*/

// RElé bomba de agua.
//http://diwo.bq.com/utilizar-rele-arduino-zum-core/
//https://www.luisllamas.es/arduino-salida-rele/
/**
const int rele = 7;
 
//   Setup 
void setup() {
    pinMode(rele,OUTPUT);
}
 
//   Loop 
void loop() {
    digitalWrite(rele, LOW);
    delay(3000);
    digitalWrite(rele, HIGH);
    delay(3000);
}*/
