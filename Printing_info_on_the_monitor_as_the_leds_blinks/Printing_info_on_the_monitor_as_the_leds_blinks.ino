int LEDRED=9;
int LEDBLUE=5;
int BLINKRED;
int BLINKBLUE;
int REDLEDon;
int REDLEDoff;
int BLUELEDon;
int BLUELEDoff;



 
void setup() {
  
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDBLUE,OUTPUT);
  Serial.println("This Is My Blink Programme");
  Serial.println(" ");

  // put your setup code here, to run once:

}

void loop() {
  
  digitalWrite (LEDRED,HIGH);
  delay(1000);
  digitalWrite (LEDRED,LOW);
  delay(1000);
  Serial.println("Blink #1 IS RED");
  
  digitalWrite (LEDBLUE,HIGH);
  delay(1000);
  digitalWrite (LEDBLUE,LOW);
  delay(1000);
  Serial.println("Blink #2 is BLUE" );

  digitalWrite (LEDRED,HIGH);
  delay(1000);
  digitalWrite (LEDRED,LOW);
  delay(1000);
  Serial.println("Blink #3 is RED");
  Serial.println(" ");
  
  }
 
