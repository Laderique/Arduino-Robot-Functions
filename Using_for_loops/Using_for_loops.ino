unsigned long time;
#include <Servo.h>
Servo LeftWheel;
Servo RightWheel;
/*int whisker1=0; // Initial whisker mode off 0=off 1= on
int whisker2=0; // Initial whisker mode off 0=off 1= on*/
int LPhoto=0;
int RPhoto=0;

void setup() { // put your setup code here, to run once:
delay(5000);
RightWheel.attach(4);
LeftWheel.attach(3);
Serial.begin(9600);
pinMode(5, INPUT);
pinMode(6,INPUT);
Outofgrey();
}
void loop() {
Serial.print("Time: ");
  time = millis();//prints time since program started
  Serial.println(time); // wait a second so as not to send massive amounts of data
  delay(1000);
LPhoto = analogRead(1); //Right photoresistor Information 

RPhoto = analogRead(2); // read analog input pin 1 
if (millis() <= 26000)
{if ((RPhoto-LPhoto)>110 && (RPhoto-LPhoto)<140){Forward();}

if ((RPhoto-LPhoto)>-190 && (RPhoto-LPhoto)<70)
{Right();}

if ((RPhoto-LPhoto)>200 && (RPhoto-LPhoto)<400)
{Left();}

/*if ((RPhoto-LPhoto)>80 && (RPhoto-LPhoto)<120)
{Hault();}*/}
else if (millis() > 26000)
{LeftWheel.detach();
RightWheel.detach();}
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
