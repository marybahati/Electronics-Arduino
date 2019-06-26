int LEDRED=9;
int LEDBLUE=5;
int blinkred;
int blinkblue;

int redon;
int blueon;

int redoff;
int blueoff;

String message1="This is the REDLED Blink #  ";
String message2="This is the BLUELED Blink #  ";


void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDBLUE,OUTPUT);
  Serial.println("This is my first program");
  Serial.println(" ");
  
  Serial.print("How many blinks for red led");
  Serial.println(" ");
  while(Serial.available()==0){};
  blinkred=Serial.parseInt();
  Serial.print(" ");


  Serial.print("How long should the red led be on");
  while(Serial.available()==0){};
  redon=Serial.parseInt ();
  Serial.println(" ");


  Serial.print("How long should the red led be off");
  while(Serial.available()==0){};
  redoff=Serial.parseInt ();
  Serial.println(" "); 

  Serial.print(" ");
  Serial.print("How many blinks for blue led");
  Serial.println(" ");
  while(Serial.available()==0){};
  blinkblue=Serial.parseInt();
  Serial.print(" ");


  Serial.print("How long should the blue led be on");
  while(Serial.available()==0){};
  blueon=Serial.parseInt ();
  Serial.println(" ");

  Serial.print("How long should the blue led be off");
  while(Serial.available()==0){};
  redoff=Serial.parseInt ();
  Serial.println(" "); 
  
  
  
  
  
  // put your setup code here, to run once:

}

void loop() {
  
  for(int j=1; j<=blinkred; j=j+1){
  Serial.print(message1);
  Serial.println(j);  
  digitalWrite (LEDRED,HIGH);
  delay(redon);
  digitalWrite (LEDRED,LOW);
  delay(redoff);
  }
  Serial.println(" "); 
  for(int j=1; j<=blinkblue; j=j+1){
  
  Serial.print(message2);
  Serial.println(j); 
  digitalWrite (LEDBLUE,HIGH);
  delay(blueon);
  digitalWrite (LEDBLUE,LOW);
  delay(blueoff);
  }

 Serial.println(" "); 
}
