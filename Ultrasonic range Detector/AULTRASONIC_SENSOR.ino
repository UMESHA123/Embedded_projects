int tri=9;
int eco=8;

int led=7;
int buzzer=6;

long durestion;
int distance_cm;
int distance_inch;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("The program is started.");
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(tri,LOW);
  delayMicroseconds(2);
  digitalWrite(tri,HIGH);
  delayMicroseconds(10);
  digitalWrite(tri,LOW);

  durestion=pulseIn(eco,HIGH);
  distance_cm=(durestion*0.034/2);
  distance_inch=distance_cm/2.54;
  
  Serial.print("The distance is cm is: "); Serial.print(distance_cm);Serial.println("cm");
  Serial.print("The distance is inch is: "); Serial.print(distance_inch);Serial.println("inch");
  if(distance_cm==5)
  {
    Serial.print("The object is detecetd.");
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    
    delay(5000);
    
  }
  else
  {
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);  
  }
  
  

}
