void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(5,HIGH);
delay(500);
digitalWrite(5,LOW);

digitalWrite(6,HIGH);
delay(500);
digitalWrite(6,LOW);

digitalWrite(7,HIGH);
delay(500);
digitalWrite(7,LOW);

}