#include <Servo.h>
Servo LeftWheel;
Servo RightWheel;
int whisker1=0; // Initial whisker mode off 0=off 1= on
int whisker2=0; // Initial whisker mode off 0=off 1= on
void setup() {
  // put your setup code here, to run once:
RightWheel.attach(3);
LeftWheel.attach(4);
Serial.begin(9600);
pinMode(5, INPUT);
pinMode(6,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
whisker1=digitalRead(5);
if(whisker1==HIGH) //whisker1==HIGH if whisker pressed 
{backward(); delay(2000); Serial.println ("R whisker pressed");} //turn LED on pin13 on & state R whisker pressed

whisker2=digitalRead(6); //if whisker pressed turn Led on else not
if(whisker2==HIGH)
{forward(); delay(2000); Serial.println ("L whisker pressed");} //turn LED on pin13 on & state which L pressed

if (whisker1== LOW && whisker2== LOW)
{RightWheel.writeMicroseconds(1530); 
LeftWheel.writeMicroseconds(1520);}

}

void backward ()
{ LeftWheel.writeMicroseconds(1300);
  RightWheel.writeMicroseconds(1700);
}

void forward ()
{ LeftWheel.writeMicroseconds (1700);
  RightWheel.writeMicroseconds (1300);
}

