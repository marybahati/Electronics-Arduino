int pinpot=A0;
int LEDBLUE=5;
int Brightness;
int Readvalue;

void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(LEDBLUE,OUTPUT);
  
  
  // put your setup code here, to run once:

}

void loop() {

  Readvalue=analogRead(pinpot);
  Brightness=(255./1023.)*Readvalue;
  analogWrite(LEDBLUE,Brightness);
  delay(1000);
  analogWrite(LEDBLUE,0);
  delay(1000);
   Serial.print("pinpot value= ");
   Serial.print(Readvalue);
   Serial.print(" ");
   Serial.print("Brightness= ");
   Serial.println(Brightness);
  
  // put your main code here, to run repeatedly:

}
