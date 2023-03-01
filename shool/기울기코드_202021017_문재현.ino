int a = 0;

void AT()
{
  a++;
}

void setup()
{
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
  
  attachInterrupt(digitalPinToInterrupt(2), AT, CHANGE);
}

void loop()
{
  if(a != 0)
  {
    a = 0;
    digitalWrite(4, 1);
    delay(1000);
  }
  else digitalWrite(4, 0);
}