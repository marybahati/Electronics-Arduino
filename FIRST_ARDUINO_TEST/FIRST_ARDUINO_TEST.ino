int LEDRED=9;
int LEDGREEN=5;

void setup() {
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite (LEDRED,HIGH);
  digitalWrite (LEDGREEN,HIGH);
  delay(1000);
  digitalWrite(LEDRED,LOW);
  digitalWrite(LEDGREEN,LOW);
  delay(1000);
  
  
  // put your main code here, to run repeatedly:

}  
