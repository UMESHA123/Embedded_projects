#include<LiquidCrystal.h>

int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int temp_value_in = A0;
int output = 6;

void setup() {
  // put your setup code here, to run once:

  pinMode(temp_value_in, INPUT);
  pinMode(output, OUTPUT);

  Serial.begin(9600);
  Serial.println("The program is started.");
  Serial.println("The lcd is started.");
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Temp sensor.");
  lcd.setCursor(0, 1);
  lcd.print("UMESHA R H");
  delay(1000);
  lcd.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
  int temp_value = analogRead(temp_value_in);
  float volt = temp_value * (5000 / 1024.0);
  int temp_c = volt / 10;
  float temp_f = (temp_c * 1.8) + 32;
  Serial.print("The temperature value is in *c :"); Serial.println(temp_c);
  Serial.print("The temperature value is in *f :"); Serial.println(temp_f);
  lcd.setCursor(0, 0);
  lcd.print("c-->");
  lcd.setCursor(5, 0);
  lcd.print(temp_c);
  lcd.setCursor(0, 1);
  lcd.print("f-->");
  lcd.setCursor(5, 6);
  lcd.print(temp_f);
  delay(1000);
  lcd.clear();
  Serial.println(temp_c);
  if (temp_c == 31)
  {
    while (temp_c > 25)
    {
      
      int temp_value = analogRead(temp_value_in);
      float volt = temp_value * (5000 / 1024.0);
      int temp_c = volt / 10;
      lcd.clear();
      digitalWrite(output, HIGH);
      Serial.println("The room Temperature reaches the 30 *c...");
      lcd.setCursor(0, 0);
      lcd.print("Temperature:");
      lcd.setCursor(0, 1);
      lcd.print(temp_c);
      if(temp_c <25)
      {
        off();
        break;
      }
      delay(500);
    }

  }
}
void off(void)
{
  Serial.println("The temperature is below the 30.");
  digitalWrite(output, LOW);
}
