void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void PinStrobe(int pin);

void loop()
{
  PinStrobe(11);
  //
  PinStrobe(12);
  //
  PinStrobe(13);
  //
}


void PinStrobe(int pin)
{
  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);
  delay(100); 
  digitalWrite(pin, HIGH);
  delay(100); 
  digitalWrite(pin, LOW);
  delay(500); 
}
