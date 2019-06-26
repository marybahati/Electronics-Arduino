int LEDRED=9;
int LEDBLUE=5;
int BLINKRED=8;
int BLINKBLUE=5;
String Message="Hello Barre"; 
void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDBLUE,OUTPUT);
  Serial.println("HELLO WELCOME TO MY PROGRAMME");
  Serial.print(" ");
  
  // put your setup code here, to run once:

}

void loop() {
  
  for(int j=1; j<=BLINKRED; j=j+1){
  Serial.println(Message);
    Serial.print(" ");
    Serial.print(j);
    Serial.print(" ");
  digitalWrite (LEDRED,HIGH);
  delay(1000);
  digitalWrite (LEDRED,LOW);
  delay(1000);
  }
  for(int j=1; j<=BLINKBLUE; j=j+1){
  digitalWrite (LEDBLUE,HIGH);
  delay(1000);
  digitalWrite (LEDBLUE,LOW);
  delay(1000);
  }
}
 
