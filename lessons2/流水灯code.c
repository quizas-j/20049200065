
// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}
int i=0;
void loop()
{
  digitalWrite(7+i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7+i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  i++;
  if(i==5)
  {
    i=0;
  }
}
