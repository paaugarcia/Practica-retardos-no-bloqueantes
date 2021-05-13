
void setup()
{
  Serial.begin (9600);
}

void loop()
{
 long tiempo=millis ()/1000;
 Serial.print ("El arduino lleva encendido");
 Serial.print (tiempo);
 Serial.print ("segundos");
  delay (1000);
}
