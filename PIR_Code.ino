void setup() 
{
  pinMode(12, INPUT);  // make the 12 pin an INPUT:
  pinMode(8, OUTPUT);  // make the 8 pin an OUTPUT:
}
void loop() 
{
  int PIR_State = digitalRead(12);  // read the input pin:

  if(PIR_State == HIGH)   // Check if PIR Sensor Detected Motion
  {
    digitalWrite(8,HIGH);  // Turn ON LED
  }
  else
  digitalWrite(8,LOW);  // Turn OFF LED
}
