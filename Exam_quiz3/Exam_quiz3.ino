int LEDRED=9;
int LEDBLUE=5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDRED,OUTPUT);
pinMode(LEDBLUE,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LEDRED,HIGH);
delay(1000);
digitalWrite(LEDRED,LOW);
Serial.println("Mean score=55%");

digitalWrite(LEDBLUE,HIGH);
delay(1000);
digitalWrite(LEDBLUE,LOW);
Serial.println("Highest score=55%");

digitalWrite(LEDRED,HIGH);
delay(1000);
digitalWrite(LEDRED,LOW);
Serial.println("Lowest score=55%");

digitalWrite(LEDBLUE,HIGH);
delay(1000);
digitalWrite(LEDBLUE,LOW);
Serial.println("Average score=55%");
Serial.println(" ");
}
