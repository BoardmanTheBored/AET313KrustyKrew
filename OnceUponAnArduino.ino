#include <Servo.h>

const int SignSwitchPin = 1;
const int SquidwardSwitchPin = 6;
//const int SpongebobSwitchPin = 3;
const int SpongebobSpatulaPin = 3;
const int PhoneSwitchPin = 4;
const int SlasherSwitchPin = 2;
const int SlasherSpatulaPin = 5;

const int LightsLEDPin = 7;
const int PhoneLEDPin = 8;
bool PreviousPhone = false;
bool PHONE = true;
bool PreviousBus = false;
bool BUS = true;
Servo ChestLid;
Servo SpongebobDoor;
Servo Bus;
Servo SlasherTrack;
//Servo FrontDoors;
Servo Curtains;

void setup() {
  pinMode(SignSwitchPin, INPUT);
  pinMode(SquidwardSwitchPin, INPUT);
  //PinMode(SpongebobSwitchPin, INPUT);
  pinMode(SpongebobSpatulaPin, INPUT);
  pinMode(PhoneSwitchPin, INPUT);
  pinMode(SlasherSwitchPin, INPUT);
  pinMode(SlasherSpatulaPin, INPUT);
  pinMode(LightsLEDPin, OUTPUT);
  pinMode(PhoneLEDPin, OUTPUT);

  ChestLid.attach(9);
  SpongebobDoor.attach(10);
  Bus.attach(11);
  SlasherTrack.attach(12);
  Curtains.attach(13);
  Serial.begin(9600);
  
}

void loop() {
  Serial.println(SquidwardSwitchPin == LOW);
  //Serial.println(SignSwitchPin == HIGH);
  if(digitalRead(SignSwitchPin)== HIGH){
    ChestLid.write(0);
    digitalWrite(LightsLEDPin, HIGH);
  }
  else{
    ChestLid.write(100);
    digitalWrite(LightsLEDPin, LOW);
  }
  if(digitalRead(SquidwardSwitchPin)== HIGH){
    SpongebobDoor.write(180);
  
  }
  else{
    SpongebobDoor.write(90);
  }
  if(digitalRead(SpongebobSpatulaPin)== HIGH){
    //insert LED code
      if(PHONE != PreviousPhone){
      for(int i = 0; i<3; i++){
      digitalWrite(PhoneLEDPin, HIGH);
      delay(100);
      digitalWrite(PhoneLEDPin, LOW);
      delay(100);
      }
      }
      else{

      }
      if(digitalRead(PhoneSwitchPin)== LOW){
    if(BUS != PreviousBus){
      Bus.write(10);}
    else{
      Bus.write(90);
    }
    //Lights start flashing
    PHONE = false;
    PreviousPhone = PHONE;
    digitalWrite(LightsLEDPin, LOW);
  }
  else{
    
    //lights stop flashing
    digitalWrite(LightsLEDPin, LOW);
  }
    
      //digitalWrite(PhoneLEDPin, LOW);
    
  }
  else{
    //LED off
    digitalWrite(PhoneLEDPin, LOW);
  }
  

  if(digitalRead(SlasherSwitchPin)== HIGH){
    SlasherTrack.write(10);
    BUS = false;
    PreviousBus = BUS;
      //FrontDoors.write(90);
  
  }
  else{
    SlasherTrack.write(130);
    //FrontDoors.write(0);
  }
  if(digitalRead(SlasherSpatulaPin)== HIGH){
  Curtains.write(0);
  }
  else{
    Curtains.write(90);
  }
 /* delay(10);
  ChestLid.write(100);
  SlasherTrack.write(100);
  Bus.write(90);
  SpongebobDoor.write(90);
  Curtains.write(90);
  digitalWrite(LightsLEDPin, LOW);
  */
 
 

  
}
