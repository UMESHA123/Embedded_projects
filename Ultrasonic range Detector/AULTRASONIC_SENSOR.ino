#include<LiquidCrystal.h>

int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int tri = A0;
int eco = 6;

int led = 2;


long durestion;
int distance_cm;
int distance_inch;
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  
  Serial.println("The program is started.");
  Serial.println("The lcd is started.");
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Sensor.");
  lcd.setCursor(0, 1);
  lcd.print("UMESHA R H");
  delay(1000);
  lcd.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(tri, LOW);
  delayMicroseconds(2);
  digitalWrite(tri, HIGH);
  delayMicroseconds(10);
  digitalWrite(tri, LOW);

  durestion = pulseIn(eco, HIGH);
  distance_cm = (durestion * 0.034 / 2);
  distance_inch = distance_cm / 2.54;

  Serial.print("The distance is cm is: "); Serial.print(distance_cm); Serial.println("cm");
  Serial.print("The distance is inch is: "); Serial.print(distance_inch); Serial.println("inch");
  if (distance_cm == 5)
  {
    Serial.print("The object is detecetd.");
    lcd.print("The object is");
    lcd.setCursor(0,1);
    lcd.print("detected.");
    digitalWrite(led, HIGH);
    delay(5000);
    lcd.clear();
  }
  else
  {
    digitalWrite(led, LOW);
  }
}
