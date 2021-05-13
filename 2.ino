long s1 = 0;
long s2 = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  s1=millis();
  if((s1-s2)>2000){
    s2=s1;
    Serial.println("Timer Activo");
  }
}
