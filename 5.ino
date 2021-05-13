long segundo = 0;
long segundo2 = 0;
int ledR= 13;
int ledA= 12;
int ledV= 11;

void setup()
{
  Serial.begin (9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  segundo =millis();
  
  digitalWrite(ledV, HIGH);
  digitalWrite(ledA, LOW);
  digitalWrite(ledR, LOW);
  
  if ((segundo-segundo2)>2000){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledV, LOW);
  digitalWrite(ledR, LOW);
  
  }if((segundo-segundo2)>3000){
  digitalWrite(ledR, HIGH);
  digitalWrite(ledV, LOW);
  digitalWrite(ledA, LOW);
    
  }if((segundo-segundo2)>4000){
    segundo2=segundo;
  }
}
