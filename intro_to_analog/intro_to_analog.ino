int pinpot=A0;
int Readvalue;
int BLUELED=4;


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600); 
pinMode(pinpot,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 Readvalue=analogRead(pinpot);
Serial.println(Readvalue);
delay(1000);
}
