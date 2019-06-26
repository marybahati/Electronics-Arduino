int LEDRED=9;
int LEDBLUE=5;


 
void setup() {
  
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDBLUE,OUTPUT);
  Serial.print("This Is My # Programme");
 
    
  

  // put your setup code here, to run once:

}

void loop() {
  
  digitalWrite (LEDRED,HIGH);
  delay(2000);
  digitalWrite (LEDRED,LOW);
  delay(1000);
  Serial.print("Blink #1 is RED");
  
  
  

  digitalWrite (LEDBLUE,HIGH);
  delay(2000);
  digitalWrite (LEDBLUE,LOW);
  delay(1000);
 Serial.print("Blink #2 is BLUE");
 
  
 
  digitalWrite (LEDRED,HIGH);
  delay(2000);
  digitalWrite (LEDRED,LOW);
  delay(1000);
  Serial.print("Blink #3 is BLUE");
 
 
  }
 
