#include <Servo.h>
Servo LeftWheel;
Servo RightWheel;
int whisker2=0; // Initial whisker mode off 0=off 1= on
int LPhoto=0;
int RPhoto=0;
int unsigned long time=0;
void setup() {
  // put your setup code here, to run once:
delay(2000);
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
if(time>29400){LeftWheel.detach();RightWheel.detach();}
LPhoto = analogRead(1); //Right photoresistor Information 


RPhoto = analogRead(2); // read analog input pin 1
Serial.println(RPhoto-LPhoto); 
delay(30);


if ((RPhoto-LPhoto)>0 && (RPhoto-LPhoto)<165)
{Forward();}

if ((RPhoto-LPhoto)>175)
{Left();}

if ((RPhoto-LPhoto)<-10)
{Right();}



whisker2=digitalRead(5);
if(whisker2==HIGH) //whisker2==HIGH if right whisker pressed 
{outoftheway();}


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
  LeftWheel.writeMicroseconds(1500);
  RightWheel.writeMicroseconds(1600);
  delay (500);
  LeftWheel.writeMicroseconds(1400);
  RightWheel.writeMicroseconds(1600);
  delay (700);
  }
