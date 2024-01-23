#include <Servo.h>
Servo LeftWheel;
Servo RightWheel;
void setup() {
  // put your setup code here, to run once:
  RightWheel.attach(3);
  LeftWheel.attach(4);
}

void loop() {
  // put your main code here, to run repeatedly:
backward();
}



void backward ()
{ LeftWheel.writeMicroseconds(1300);
  RightWheel.writeMicroseconds(1700);
}

void forward ()
{ LeftWheel.writeMicroseconds (1700);
  RightWheel.writeMicroseconds (1300);
}

