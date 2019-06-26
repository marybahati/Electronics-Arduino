# include <Servo.h>
Servo myservo;
int LEDRED = 7;
int LEDGREEN = 3;
int Readvalue;
int potpin = A0;


void setup() {
 Serial.begin(9600);
 myservo.attach(10);
pinMode(potpin,INPUT);
}

void loop() {
Readvalue =analogRead(potpin);
if(Readvalue <=90){
 digitalWrite(LEDRED,HIGH);
 delay(1000);
 digitalWrite(LEDRED,LOW);
 delay(1000);
}
else(Readvalue >=90);{
 digitalWrite(LEDGREEN,HIGH);
 delay(1000);
 digitalWrite(LEDGREEN,LOW);
 delay(1000);
}


Serial.print(Readvalue);
Serial.println(" ");
Readvalue=map(Readvalue,0,1023,0,180);
myservo.write(Readvalue);
delay(15);



}
