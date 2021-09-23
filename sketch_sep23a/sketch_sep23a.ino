#include<LiquidCrystal.h>
#include<Keypad.h>

int rs=13,en=12,d4=11,d5=10,d6=9,d7=8;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

const int row=4;
const int col=3;

char keys[row][col]={
                {'1','2','3'},
                {'4','5','6'},
                {'7','8','9'},
                {'*','0','#'}
              };
byte rowPins[row]={4,3,2,A5};
byte colPins[col]={5,6,7};

Keypad keypad=Keypad(makeKeymap(keys),rowPins,colPins,row,col);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("The key pad");
  lcd.setCursor(0,1);
  lcd.print("In Arduino.");
  delay(1000);
  lcd.clear();
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  char key=keypad.getKey();
  if(key)
  {
    Serial.print("The entered key is"); Serial.print(key); Serial.println("\n");
    lcd.setCursor(0,0);
    lcd.print("The entered key");
    lcd.setCursor(0,1);
    lcd.print(key);
    delay(1000);
    lcd.clear();
  }

}
