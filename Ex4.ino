#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Hola mundo!");
delay(1000);

}