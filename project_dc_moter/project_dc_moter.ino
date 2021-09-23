#include<LiquidCrystal.h>
int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int led1=A0;
int led2=A1;
int led3=A2;
int led4=A3;

int in1=7;
int in2=6;

int in3=5;
int in4=4;
void setup() {
  // put your setup code here, to run once: 
  Serial.begin(9600);
  Serial.println("The program is startted..\n");
  
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  Serial.println("The lcd is started.");
  lcd.print("DC Moter:");
  lcd.setCursor(0,1);
  lcd.print("UMESHA R H.");
  delay(1000);
  lcd.clear();
  
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int led1_state=digitalRead(led1);
  int led2_state=digitalRead(led2);
  int led3_state=digitalRead(led3);
  int led4_state=digitalRead(led4);

  //MOTER TURNS LEFT
  if(led1_state==LOW && led2_state==HIGH && led3_state==HIGH && led4_state==HIGH)
  {
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
    Serial.println("Dc moter turn to left.");
    lcd.print("moter turn left");
    delay(1000);
    lcd.clear();
  }
  //TURM RIGHT
  else if(led1_state==HIGH && led2_state==HIGH && led3_state==LOW && led4_state==HIGH)
  {
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    Serial.println("Dc moter turn to RIGHT.");
    lcd.print("moter turn RIGHT");
    delay(1000);
    lcd.clear();
  }
  // move forword
  else if(led1_state==LOW && led2_state==HIGH && led3_state==LOW && led4_state==HIGH)
  {
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    Serial.println("Dc moter move forword.");
    lcd.print("FORWORD");
    delay(1000);
    lcd.clear();
  }
  // move BACKWORD
  else if(led1_state==HIGH && led2_state==LOW && led3_state==HIGH && led4_state==LOW)
  {
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
    Serial.println("Dc moter move backword.");
    lcd.print("backword");
    delay(1000);
    lcd.clear();
  }
  else
  {
  if(led1_state==HIGH && led2_state==HIGH && led3_state==HIGH && led4_state==HIGH)
  {
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
    Serial.println("Dc moter off.");
    lcd.print("moter off");
    delay(1000);
    lcd.clear();
  }
  }

}
