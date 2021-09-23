#include<LiquidCrystal.h>
int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int input=7;
int pin6=6;
int pin5=5;
int pin4=4;
int pin3=3;
int pin2=2;
int pina0=A0;
int pina1=A1;
int pina2=A2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("The program is startted..\n");

  pinMode(input,INPUT);
  pinMode(pin6,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pina0,OUTPUT);
  pinMode(pina1,OUTPUT);
  pinMode(pina2,OUTPUT);
  
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  Serial.println("The lcd is started.");
  lcd.print("IR sensor:");
  lcd.setCursor(0, 1);
  lcd.print("UMESHA R H.");
  delay(1000);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  int state=digitalRead(input);

  if(state==HIGH)
  {
    Serial.println("The object is detected.");
    //for 0
    Serial.println("Number is -->0");
    digitalWrite(pin6,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin2,HIGH);
    digitalWrite(pina0,HIGH);
    digitalWrite(pina2,LOW);
    lcd.print("0");
    delay(500);
    off();
    lcd.clear();

    //for 1
    Serial.println("Number is -->1");
    digitalWrite(pin5,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pina2,LOW);
    lcd.print("1");
    delay(500);
    off();
    lcd.clear();
    
    //for 2
    Serial.println("Number is -->2");
    digitalWrite(pin6,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pina1,HIGH);
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pina2,LOW);
    lcd.print("2");
    delay(500);
    off();
    lcd.clear();

    //for 3
    Serial.println("Number is -->3");
    digitalWrite(pin6,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pina1,HIGH);
    digitalWrite(pina2,LOW);
    lcd.print("3");
    delay(500);
    off();
    lcd.clear();

    //for 4
    Serial.println("Number is -->4");
    digitalWrite(pin5,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pina0,HIGH);
    digitalWrite(pina1,HIGH);
    digitalWrite(pina2,LOW);
    lcd.print("4");
    delay(500);
    off();
    lcd.clear();

    //for 5
    Serial.println("Number is -->5");
    digitalWrite(pin6,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pina0,HIGH);
    digitalWrite(pina1,HIGH);
    digitalWrite(pina2,LOW);
    lcd.print("5");
    delay(500);
    off();
    lcd.clear();

    //for 6
    Serial.println("Number is -->6");
    digitalWrite(pin6,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin2,HIGH);
    digitalWrite(pina0,HIGH);
    digitalWrite(pina1,HIGH);
    digitalWrite(pina2,LOW);
    lcd.print("6");
    delay(500);
    off();
    lcd.clear();

    //for 7
    Serial.println("Number is -->7");
    digitalWrite(pin6,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pina2,LOW);
    lcd.print("7");
    delay(500);
    off();
    lcd.clear();

    //for 8
    Serial.println("Number is -->8");
    digitalWrite(pin6,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin2,HIGH);
    digitalWrite(pina0,HIGH);
    digitalWrite(pina1,HIGH);
    digitalWrite(pina2,LOW);
    lcd.print("8");
    delay(500);
    off();
    lcd.clear();

    //for 9
    Serial.println("Number is -->9");
    digitalWrite(pin6,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pina0,HIGH);
    digitalWrite(pina1,HIGH);
    digitalWrite(pina2,LOW);
    lcd.print("9");
    delay(500);
    off();
    lcd.clear();
  }
  else
  {
    Serial.println("Number is -->0");
    digitalWrite(pin6,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin2,HIGH);
    digitalWrite(pina0,HIGH);
    digitalWrite(pina2,LOW);
    lcd.print("0");
    delay(500);
    off();
    lcd.clear();
  }
}
void off(void)
{
    digitalWrite(pin6,LOW);
    digitalWrite(pin5,LOW);
    digitalWrite(pin4,LOW);
    digitalWrite(pin3,LOW);
    digitalWrite(pin2,LOW);
    digitalWrite(pina0,LOW);
    digitalWrite(pina1,LOW);
    digitalWrite(pina2,LOW);
}
