long segundo1 = 0;
long segundo2 = 0;
int led=4;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  
}

void loop()
{

  segundo1=millis();
  if((segundo1-segundo2)>2000){
      
      digitalWrite(led,HIGH);
      if((segundo1-segundo2)>4000){
      digitalWrite(led,LOW);
        segundo2=segundo1;
      }
    
    }
}
