
int whisker1=0; // Initial whisker mode off 0=off 1= o
void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);
pinMode(3,OUTPUT);
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
whisker1=digitalRead(7);
if(whisker1==LOW)
{digitalWrite(3, HIGH);
Serial.println ("High");}  
 else
{digitalWrite (3,HIGH);
Serial.println ("Low");} //not needed but just incase
}

