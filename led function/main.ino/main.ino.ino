int red=5;
int blue=6;
int green=7;
void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
delay(1000);
digitalWrite(red,LOW);
delay(1000);

digitalWrite(blue,HIGH);
delay(1000);
digitalWrite(blue,LOW);
delay(1000);

digitalWrite(green,HIGH);
delay(1000);
digitalWrite(green,LOW);
delay(1000);
}
