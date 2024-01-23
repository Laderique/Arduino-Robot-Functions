#include <Servo.h> //put this statement in your program to use library – don’t forget the space
Servo Leftwheel; //“declare” the name of your servo as “myservo1” - can choose any name
Servo Rightwheel; // can choose any name
void setup() {
  // put your setup code here, to run once:
Rightwheel.attach(4); Rightwheel.writeMicroseconds(1500); //send a pulse of 1700 μs or 1.7ms out pin 2
delay(1000);
Leftwheel.attach(3); Leftwheel.writeMicroseconds(1500);
delay (500);
}

void loop() {
  // put your main code here, to run repeatedly:

}
