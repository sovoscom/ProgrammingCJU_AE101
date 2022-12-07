#include <Servo.h>

Servo angle;
int i = 0;
int val_angle = 0;
int nBluePin = 3;
int nOrangePin = 4;
int nRedPin = 5;

void Pointer(int valAngle)
{
  if(valAngle <= 60)
  {
    digitalWrite(nBluePin, HIGH);
    digitalWrite(nOrangePin, LOW);
    digitalWrite(nRedPin, LOW);
  }
  else if(60 < valAngle && valAngle <= 120)
  {
    digitalWrite(nOrangePin, HIGH);
    digitalWrite(nBluePin, LOW);
    digitalWrite(nRedPin, LOW);
  }
  else if(valAngle > 120)
  {
    digitalWrite(nRedPin, HIGH);
    digitalWrite(nBluePin, LOW);
    digitalWrite(nOrangePin, LOW);
  }
  else
  {
    digitalWrite(nBluePin, LOW);
    digitalWrite(nOrangePin, LOW);
    digitalWrite(nRedPin, LOW);
  }
}

void setup()
{
  angle.attach(2);
  pinMode(nRedPin, OUTPUT);
  pinMode(nOrangePin, OUTPUT);
  pinMode(nBluePin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  int getVal= analogRead(A0);
  int valAngle;
  
  valAngle = map(getVal, 0, 1023, 0, 180);
  angle.write(valAngle);
  delay(500);
  
  Serial.print(valAngle);
  Serial.print("\n"); 
  
  Pointer(valAngle);
  
}
