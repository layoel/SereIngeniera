int buzzer=10;
int i;

void setup() {
 pinMode(buzzer, OUTPUT);
 Serial.begin(9600);

}

void loop() {
  for(i=0;i<=255;i++){
    //analogWrite(buzzer,i);
    //delay(500);
    analogWrite(buzzer, 0);
    delay(50);
  }
}
