int a1=5;
int a2=2;
int a3=3;
int a4=4;
int b1=6;
int b2=7;
int b3=8;
int b4=9;
int button=10;
int state=0;
void setup()
{
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(button,INPUT);
}
int n=0;
void loop()
{
  state=digitalRead(button);
  if(state==HIGH)
  {
    n=0;
  }
  if(n==100)
  {
    n=0;
  }
  n++;
  int a=n%10;
  int b=n/10;
disp1(b);
disp2(a);
delay(1000);
}
void disp1(int num)
{
  if(num == 0)
{
digitalWrite(a1, LOW);
digitalWrite(a2,LOW);
digitalWrite(a3, LOW);
digitalWrite(a4, LOW);
}
    if(num == 1)
{
digitalWrite(a1, HIGH);
digitalWrite(a2,LOW);
digitalWrite(a3, LOW);
digitalWrite(a4, LOW);
}
      if(num == 2)
{
digitalWrite(a1, LOW);
digitalWrite(a2,HIGH);
digitalWrite(a3, LOW);
digitalWrite(a4, LOW);
}
        if(num == 3)
{
digitalWrite(a1,HIGH);
digitalWrite(a2,HIGH);
digitalWrite(a3, LOW);
digitalWrite(a4, LOW);
}        if(num == 4)
{
digitalWrite(a1,LOW);
digitalWrite(a2,LOW);
digitalWrite(a3, HIGH);
digitalWrite(a4, LOW);
}
  if(num == 5)
{
digitalWrite(a1,HIGH);
digitalWrite(a2,LOW);
digitalWrite(a3, HIGH);
digitalWrite(a4, LOW);
}
   if(num == 6)
{
digitalWrite(a1,LOW);
digitalWrite(a2,HIGH);
digitalWrite(a3, HIGH);
digitalWrite(a4, LOW);
}
   if(num == 7)
{
digitalWrite(a1,HIGH);
digitalWrite(a2,HIGH);
digitalWrite(a3, HIGH);
digitalWrite(a4, LOW);
}
if(num == 8)
{
digitalWrite(a1, LOW);
digitalWrite(a2,LOW);
digitalWrite(a3, LOW);
digitalWrite(a4, HIGH);
}
  if(num == 9)
{
digitalWrite(a1,HIGH);
digitalWrite(a2,LOW);
digitalWrite(a3, LOW);
digitalWrite(a4, HIGH);
}
}
void disp2(int num)
{
if(num == 0)
{
digitalWrite(b1, LOW);
digitalWrite(b2,LOW);
digitalWrite(b3, LOW);
digitalWrite(b4, LOW);
}
    if(num == 1)
{
digitalWrite(b1, HIGH);
digitalWrite(b2,LOW);
digitalWrite(b3, LOW);
digitalWrite(b4, LOW);
}
      if(num == 2)
{
digitalWrite(b1, LOW);
digitalWrite(b2,HIGH);
digitalWrite(b3, LOW);
digitalWrite(b4, LOW);
}
        if(num == 3)
{
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3, LOW);
digitalWrite(b4, LOW);
}        if(num == 4)
{
digitalWrite(b1,LOW);
digitalWrite(b2,LOW);
digitalWrite(b3, HIGH);
digitalWrite(b4, LOW);
}
  if(num == 5)
{
digitalWrite(b1,HIGH);
digitalWrite(b2,LOW);
digitalWrite(b3, HIGH);
digitalWrite(b4, LOW);
}
   if(num == 6)
{
digitalWrite(b1,LOW);
digitalWrite(b2,HIGH);
digitalWrite(b3, HIGH);
digitalWrite(b4, LOW);
}
   if(num == 7)
{
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3, HIGH);
digitalWrite(b4, LOW);
}
if(num == 8)
{
digitalWrite(b1, LOW);
digitalWrite(b2,LOW);
digitalWrite(b3, LOW);
digitalWrite(b4, HIGH);
}
  if(num == 9)
{
digitalWrite(b1,HIGH);
digitalWrite(b2,LOW);
digitalWrite(b3, LOW);
digitalWrite(b4, HIGH);
}
}
