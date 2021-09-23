#include<LiquidCrystal.h>
int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int input=7;
int output=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(input,INPUT);
  pinMode(output,OUTPUT);
  
  Serial.begin(9600);
  Serial.println("The program is startted..\n");
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  Serial.println("The lcd is started.");
  lcd.print("PIR sensor:");
  lcd.setCursor(0,1);
  lcd.print("UMESHA R H.");
  delay(1000);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  int state=digitalRead(input);
  if(state==HIGH)
  {
    digitalWrite(output,HIGH);
    Serial.println("the object is detected.");
    lcd.print("object is ");
    lcd.setCursor(0,1);
    lcd.print("detected");
    delay(1000);
    lcd.clear();
  }
  else
  {
   digitalWrite(output,LOW); 
   Serial.println("The object is not detected.");
   lcd.print("object is not ");
   lcd.setCursor(0,1);
   lcd.print("detected.");
   delay(1000);
   lcd.clear();
  }
  

}
