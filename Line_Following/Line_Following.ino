#include <Servo.h>
Servo LeftWheel;
Servo RightWheel;
/*int whisker1=0; // Initial whisker mode off 0=off 1= on
int whisker2=0; // Initial whisker mode off 0=off 1= on*/
int LPhoto=0;
int RPhoto=0;
int time = 0;
void setup() {
  // put your setup code here, to run once:
delay(5000);
RightWheel.attach(4);
LeftWheel.attach(3);
Serial.begin(9600);
pinMode(5, INPUT);
pinMode(6,INPUT);
Outofgrey();
}

void loop() {
  // put your main code here, to run repeatedly: 

time = millis();
if(time>26000){LeftWheel.detach();RightWheel.detach();}
LPhoto = analogRead(1); //Right photoresistor Information 
RPhoto = analogRead(2); // Left photoresistor Information 
Serial.println(RPhoto-LPhoto); //serial moniter 
delay (30);
if (10<(RPhoto-LPhoto)<200){Forward();} //forward
if (-190<(RPhoto-LPhoto)<0){Right();} //right
if (200<(RPhoto-LPhoto)<400){Left();} //left 

}

void Forward()
{ LeftWheel.writeMicroseconds(1400);
  RightWheel.writeMicroseconds(1600);
}

void backward()
{ LeftWheel.writeMicroseconds (1570);
  RightWheel.writeMicroseconds (1480);
}
void Hault()
{RightWheel.writeMicroseconds(1530); LeftWheel.writeMicroseconds(1500);
}
void Left()
{LeftWheel.writeMicroseconds(1430);
  RightWheel.writeMicroseconds(1530);
}
void Right()
{LeftWheel.writeMicroseconds(1500);
  RightWheel.writeMicroseconds(1600);
}
void Out()
{ LeftWheel.writeMicroseconds(1350);
  RightWheel.writeMicroseconds(1650);
  delay(1200);
}
void UTurn ()
{LeftWheel.writeMicroseconds(1700);
  RightWheel.writeMicroseconds(1600);
  delay(1700);
  }
  void Outofgrey()
  { LeftWheel.writeMicroseconds(1400);
  RightWheel.writeMicroseconds(1600);
  delay(1500);
}
void outoftheway()
{LeftWheel.writeMicroseconds(1600);
  RightWheel.writeMicroseconds(1400);
  delay (2000);
  LeftWheel.writeMicroseconds(1430);
  RightWheel.writeMicroseconds(1530);
  delay (500);
  LeftWheel.writeMicroseconds(1400);
  RightWheel.writeMicroseconds(1600);
  delay (700);
  }
