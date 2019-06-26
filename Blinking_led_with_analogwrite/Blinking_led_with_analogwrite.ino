int LEDBLUE=5;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDBLUE,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(LEDBLUE,50 );
delay(1000);
analogWrite(LEDBLUE,0);
delay(1000);
}
