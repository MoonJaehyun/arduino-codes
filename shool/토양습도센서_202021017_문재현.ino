// C++ code
//


int val = 0; 
int soilPin = A0;
int soilPower = 7;


void setup() 
{
  Serial.begin(9600); 

  pinMode(soilPower, OUTPUT);
  digitalWrite(soilPower, LOW);
}

void loop() 
{
Serial.print("Soil Moisture = ");    

Serial.println(readSoil());


delay(1000);
}
int readSoil()
{

    digitalWrite(soilPower, HIGH);
    delay(10);
    val = analogRead(soilPin);
    digitalWrite(soilPower, LOW);
    return val;
}
