int LEDRED=9;
int LEDGREEN=5;

void setup() {
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  for(int j=1; j<=5; j=j+1){ 
  digitalWrite (LEDGREEN,HIGH);
  delay(1000);
  digitalWrite (LEDGREEN,LOW);
  delay(1000);
  }
  digitalWrite (LEDRED,HIGH);
  delay(1000);
  digitalWrite (LEDRED,LOW);
  

}  
