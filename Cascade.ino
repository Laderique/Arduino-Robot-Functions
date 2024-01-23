int whisker1=0; // Initial whisker mode off 0=off 1= o
void setup() {
pinMode(3,OUTPUT);
pinMode(5, INPUT);
Serial.begin (9600);
}
void loop() {
whisker1=digitalRead(5);
if(whisker1==HIGH)
{digitalWrite(3, HIGH);
delay(500);
digitalWrite(3, LOW);
delay(2000);
Serial.println ("Open");}
if (whisker1==LOW)
{digitalWrite(3, LOW);
delay(2000);
Serial.println ("Closed");}
}



