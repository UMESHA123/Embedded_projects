#include<LiquidCrystal.h>
int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int pina0 = A0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pina0, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:


  if (Serial.available() > 0)
  {
    String state1 = Serial.readString();
   
    Serial.println(state1);
    if (state1 == "0")
    {

      lcd.println("The Number: 0");
      Serial.println("The number is 0");
      delay(1000);
      lcd.clear();

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      delay(1000);
      lcd.clear();
    }
    if (state1 == "2")
    {

      lcd.println("The Number: 2");
      Serial.println("The number is 2");

      digitalWrite(pin7, LOW);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();

    }
    if (state1 == "3")
    {

      lcd.println("The Number: 3");
      Serial.println("The number is 3");

      digitalWrite(pin7, LOW);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();

    }
    if (state1 == "4")
    {

      lcd.println("The Number: 4");
      Serial.println("The number is 4");

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();

    }
    if (state1 == "5")
    {

      lcd.println("The Number: 5");
      Serial.println("The number is 5");

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();

    }
    if (state1 == "6")
    {

      lcd.println("The Number: 6");
      Serial.println("The number is 6");

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();

    }
    if (state1 == "7")
    {

      lcd.println("The Number: 7");
      Serial.println("The number is 7");

      digitalWrite(pin7, LOW);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();

    }
    if (state1 == "8")
    {

      lcd.println("The Number: 8");
      Serial.println("The number is 8");

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);

      delay(1000);
      lcd.clear();

    }
    if (state1 == "9")
    {

      lcd.println("The Number: 9");
      Serial.println("The number is 9");

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();

    }

    if (state1 == "A")
    {

      a_value();

    }
    if (state1 == "65")
    {

      a_value();

    }
    if (state1 == "B")
    {

      b_value();

    }
    if (state1 == "66")
    {

      b_value();

    }
    if(state1=="C")
  {
    c_value();
  }
  if(state1=="67")
  {
    c_value();
  }
  if(state1=="D")
  {
    d_value();
  }
  if(state1=="68")
  {
    d_value();
  }
  
  if(state1=="E")
  {
    e_value();
  }
  if(state1=="69")
  {
    e_value();
  }
  if(state1=="F")
  {
    f_value();
  }
  if(state1=="70")
  {
    f_value();
  }
  if(state1=="71")
  {
    Serial.println("The letter is G");
    lcd.print("G");
      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
    
  }
  if(state1=="72")
  {
    Serial.println("The letter is H");
    lcd.print("H");
      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
  }
  if(state1=="73")
  {
    Serial.println("The letter is I");
    lcd.print("I");
      digitalWrite(pin7, LOW);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
  }
  if(state1=="74")
  {
    Serial.println("The letter is J");
    lcd.print("J");
      digitalWrite(pin7, LOW);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
  }
  if(state1=="75")
  {
    Serial.println("The letter is K");
    lcd.print("K");
      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
  }
  if(state1=="76")
  {
    Serial.println("The letter is L");
    lcd.print("L");
      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
  }
  if(state1=="77")
  {
    Serial.println("The letter is M");
    lcd.print("M");
      delay(1000);
      lcd.clear();
  }
  if(state1=="78")
  {
    Serial.println("The letter is N");
    lcd.print("N");
      delay(1000);
      lcd.clear();
  }
  
  if(state1=="79")
  {
    Serial.println("The letter is O");
    lcd.print("O");
    
      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
      delay(1000);
      lcd.clear();
  }
  if(state1=="80")
  {
    lcd.println("The Number: P");
      Serial.println("The number is P");
    p_value();
  }
  if(state1=="81")
  {
     lcd.println("The Number: Q");
      Serial.println("The number is Q");
    q_value();
  }
  if(state1=="82")
  {
     lcd.println("The Number: R");
      Serial.println("The number is R");
    digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
  }
  if(state1=="83")
  {
     lcd.println("The Number: S");
      Serial.println("The number is S");
    s_value();
  }
  if(state1=="84")
  {
    lcd.println("The Number: T");
      Serial.println("The number is T");
    t_value();
  }
  if(state1=="85")
  {
    lcd.println("The Number: U");
      Serial.println("The number is U");
    u_value();
  }
  if(state1=="86")
  {
    lcd.println("The Number: V");
      Serial.println("The number is V");
    u_value();
  }
  if(state1=="87")
  {
    lcd.println("The Number: W");
      Serial.println("The number is W");
    u_value();
  }
  if(state1=="88")
  {
    lcd.println("The Number: X");
      Serial.println("The number is X");
    x_value();
  }
  if(state1=="89")
  {
    lcd.println("The Number: Y");
      Serial.println("The number is Y");
    y_value();
  }
  if(state1=="90")
  {
    lcd.println("The Number: Z");
      Serial.println("The number is Z");
    z_value();
  }
  if(state1=="97")
  {
    lcd.println("The Number: Z");
      Serial.println("The number is Z");
    digitalWrite(pin7, LOW);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
  }
  if(state1=="98")
  {
    lcd.println("The Number: b");
      Serial.println("The number is b");
    digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
  }
  if(state1=="99")
  {
    lcd.println("The Number: c");
      Serial.println("The number is c");
    digitalWrite(pin7, LOW);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
  }
  if(state1=="100")
  {
    lcd.println("The Number: d");
      Serial.println("The number is d");
    digitalWrite(pin7, LOW);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
  }
  if(state1=="101")
  {
    lcd.println("The Number: e");
      Serial.println("The number is e");
    digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
  }
  if(state1=="102")
  {
    lcd.println("The Number: f");
      Serial.println("The number is f");
    f_value();
  }
  if(state1=="103")
  {
    lcd.println("The Number: g");
      Serial.println("The number is g");
    digitalWrite(pin7, HIGH);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
  }
  if(state1=="104")
  {
    lcd.println("The Number: h");
      Serial.println("The number is h");
    digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
  }
  if(state1=="105")
  {
    lcd.println("The Number: i");
      Serial.println("The number is i");
  
    digitalWrite(pin7, LOW);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
  }
  if(state1=="106")
  {
    lcd.println("The Number: j");
      Serial.println("The number is j");
  
    digitalWrite(pin7, LOW);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
  }
  if(state1=="107")
  {
    lcd.println("The Number: k");
      Serial.println("The number is k");
  
    digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
  }
  if(state1=="108")
  {
    lcd.println("The Number: l");
      Serial.println("The number is l");
  
    digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
  }
  if(state1=="109")
  {
    lcd.println("The Number: m");
      Serial.println("The number is m");
  m_value();
    
  }
  if(state1=="110")
  {
    lcd.println("The Number: n");
      Serial.println("The number is n");
  m_value();
    
  }
  if(state1=="111")
  {
    lcd.println("The Number: o");
      Serial.println("The number is o");
  m_value();
    
  }
  if(state1=="112")
  {
    lcd.println("The Number: p");
      Serial.println("The number is p");
  p_value();
    
  }
  if(state1=="113")
  {
    lcd.println("The Number: q");
      Serial.println("The number is q");
  p_value();
    
  }
  if(state1=="113")
  {
    lcd.println("The Number: r");
      Serial.println("The number is r");
 digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
    
  }
  if(state1=="114")
  {
    lcd.println("The Number: r");
      Serial.println("The number is r");
 digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
    
  }
  if(state1=="115")
  {
    lcd.println("The Number: s");
      Serial.println("The number is s");
      s_value();
  }
  if(state1=="116")
  {
    lcd.println("The Number: t");
      Serial.println("The number is t");
      t_value();
  }
  if(state1=="117")
  {
    lcd.println("The Number: u");
      Serial.println("The number is u");
      digitalWrite(pin7, LOW);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
  }
  if(state1=="118")
  {
    lcd.println("The Number: v");
      Serial.println("The number is v");
     digitalWrite(pin7, LOW);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
  }
  if(state1=="119")
  {
    lcd.println("The Number: w");
      Serial.println("The number is w");
     digitalWrite(pin7, LOW);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
  }
  if(state1=="120")
  {
    lcd.println("The Number: x");
      Serial.println("The number is x");
     x_value();
  }
  if(state1=="121")
  {
    lcd.println("The Number: y");
      Serial.println("The number is y");
     y_value();
  }
  if(state1=="122")
  {
    lcd.println("The Number: z");
      Serial.println("The number is z");
     z_value();
  }
}
}
void m_value(void)
{
  digitalWrite(pin7, LOW);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}

void z_value(void)
{
  digitalWrite(pin7, LOW);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}
void y_value(void)
{
  digitalWrite(pin7, HIGH);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}
void x_value(void)
{
  digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}
void u_value(void)
{
  digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
}
void t_value(void)
{
  digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}
void s_value(void)
{
  digitalWrite(pin7, HIGH);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}
void p_value(void)
{
  

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}
void q_value(void)
{
 

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, LOW);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}
void a_value(void)
{
  lcd.println("The Number: A");
      Serial.println("The number is A");

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}
void b_value(void)
{
  lcd.println("The Number: B");
      Serial.println("The number is B");

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}
void c_value(void)
{
  lcd.println("The Number: C");
      Serial.println("The number is C");

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
}
void d_value(void)
{
  lcd.println("The Number: D");
      Serial.println("The number is D");

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, LOW);
      delay(1000);
      lcd.clear();
}
void e_value(void)
{
  lcd.println("The Number: E");
      Serial.println("The number is E");

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, HIGH);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}
void f_value(void)
{
      lcd.println("The Number: F");
      Serial.println("The number is F");

      digitalWrite(pin7, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin5, LOW);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pina0, HIGH);
      delay(1000);
      lcd.clear();
}
