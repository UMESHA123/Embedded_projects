#include<LiquidCrystal.h>
int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int input=2;
int buzzer=6;
int led=7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("The program is startted..\n");

  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(input,INPUT);
  
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
    
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    Serial.println("The human motion is deteceted.");
    lcd.print("The Human motion");
    lcd.setCursor(0,1);
    lcd.print("is Deteceted.");
    delay(1000);
    lcd.clear();
  }
  else
  {
    
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    Serial.println("The human motion is NOT deteceted.");
    lcd.print("The Human motion");
    lcd.setCursor(0,1);
    lcd.print("NOT Deteceted.");
    delay(1000);
    lcd.clear();
  }


}
