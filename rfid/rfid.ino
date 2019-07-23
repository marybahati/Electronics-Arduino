#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>
 
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
Servo servopin;
int red = 5;
int blue = 7;
int numblink;
 
void setup() 
{
  servopin.attach(8);
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522

   pinMode (red,OUTPUT);
  pinMode (blue,OUTPUT);
  Serial.println("How many blinks for the led?");
  while (Serial.available()==0){}
  numblink=Serial.parseInt();
  
  Serial.println("Tap your card to the reader...");
  Serial.println();
 

}
void loop() 
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "BO AF 5E 4D") //change here the UID of the card/cards that you want to give access
  {
    for (int j =1; j<=numblink; j++){
      digitalWrite(blue,HIGH);
      delay(500);
      digitalWrite(blue,LOW);
      delay(500);
      if (numblink>0&&numblink<=5){
        servopin.write(90);
        
      }
      if (numblink>5){
        servopin.write(180);
        
      }
    }
    Serial.println("working");
    Serial.println();
    servopin.write(180);
    delay(500);

  }
    
   if (content.substring(1) == "A4 14 31 5B") //change here the UID of the card/cards that you want to give access
  {

    for( int j =1; j<=numblink; j++){
      digitalWrite(red,HIGH);
      delay(500);
      digitalWrite(red,LOW);
      delay(1000);
    }
    
  Serial.println("working");
    Serial.println();
    servopin.write(180);
    delay(500);

  }
 
 else   {
    Serial.println("electronics class");
    Serial.println(" you are  welcome");
    delay(500);
  }
} 
