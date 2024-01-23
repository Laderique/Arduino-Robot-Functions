#include <Servo.h>
Servo LeftWheel;
Servo RightWheel;
void setup() {
  // put your setup code here, to run once:
delay(5000);
RightWheel.attach(4);
LeftWheel.attach(3);
Forward();
UTurn();
Forward2();
LeftWheel.detach();
RightWheel.detach();
}

void loop() {
  // put your main code here, to run repeatedly:
}
void Forward()
{ LeftWheel.writeMicroseconds(1400);
  RightWheel.writeMicroseconds(1630);
  delay(7000);}
  
void UTurn ()
{LeftWheel.writeMicroseconds(1600);
  RightWheel.writeMicroseconds(1570);
  delay(1600);}
void Forward2()
{ LeftWheel.writeMicroseconds(1400);
  RightWheel.writeMicroseconds(1630);
  delay(5200);}
