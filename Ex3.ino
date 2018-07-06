void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if((digitalRead(8))==0)
  digitalWrite(9,HIGH);
else
  digitalWrite(9,LOW);
}