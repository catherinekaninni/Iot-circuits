// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(1, LOW);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(2,HIGH);
  delay(100); // wait for 100 milliseconds(s)
  digitalWrite(2,LOW);
  delay(100); // wait for 100 milliseconds);
  
}