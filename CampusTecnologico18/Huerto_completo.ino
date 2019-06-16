 const int sensorLluviaPin = 9;
 const int sensorHUMEDAD = A1;
 const int LDRLuzPin = A0;
 const int LuzMinima = 100;
 const int HumedadMinima = 500;
 const int rele = 7;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(sensorLluviaPin, INPUT);
  pinMode(rele,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int humedad = analogRead(sensorHUMEDAD);
  int luz = analogRead(LDRLuzPin);
  int llueve = digitalRead(sensorLluviaPin );  //lectura digital de pin

  while(true){
     Serial.print("¿llueve?");
      Serial.println(llueve);
    if(llueve == 1){//NO LLUEVE
       Serial.print("¿es de noche?");
       Serial.println(luz);
      if(luz < LuzMinima){ //es de noche
        Serial.print("humedad");
        Serial.println(humedad); 
        if(humedad > HumedadMinima){ // cuanto mayor es el numero mas secas estan las plantas
            digitalWrite(rele,LOW );
            Serial.println("REGAR"); 
        }
        else{
          digitalWrite(rele, HIGH);
          Serial.println("NO REGAR"); 
        }
      }else{
       digitalWrite(rele, HIGH);
       Serial.println("NO REGAR DE DIA"); 
      }
    }else{
       digitalWrite(rele, HIGH);
       Serial.println("NO REGAR LLOVIENDO");
    }
  delay(5000);

  humedad = analogRead(sensorHUMEDAD);
  luz = analogRead(LDRLuzPin);
  llueve = digitalRead(sensorLluviaPin );  //lectura digital de pin
  }
  
}
