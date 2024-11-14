#include <Servo.h>

const int SignSwitchPin = 1;
const int SquidwardSwitchPin = 2;
//const int SpongebobSwitchPin = 3;
const int SpongebobSpatulaPin = 3;
const int PhoneSwitchPin = 4;
const int SlasherSwitchPin = 5;
const int SlasherSpatulaPin = 6;

const int LightsLEDPin = 7;
const int PhoneLEDPin = 8;

Servo ChestLid = 9;
Servo SpongebobDoor = 10;
Servo Bus = 11;
Servo SlasherTrack = 12;
//Servo FrontDoors = 14;
Servo Curtains = 13;

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



  
}

void loop() {
  if(digitalRead(SignSwitchPin)== HIGH){
    ChestLid.write(180);
  }
  else{
    ChestLid.write(0);
  }
  if(digitalRead(SquidwardSwitchPin)== HIGH){
    SpongebobDoor.write(180);
  }
  else{
    SpongebobDoor.write(0);
  }
  if(digitalRead(SpongebobSpatulaPin)== HIGH){
    //insert LED code
    digitalWrite(PhoneLEDPin, HIGH);
  }
  else{
    //LED off
    digitalWrite(PhoneLEDPin, LOW);
  }
  if(digitalRead(PhoneSwitchPin)== HIGH){
    Bus.write(180);
    //Lights start flashing
    digitalWrite(LightsLEDPin, HIGH);
  }
  else{
    Bus.write(0);
    //lights stop flashing
    digitalWrite(LightsLEDPin, LOW);
  }
  if(digitalRead(SlasherSwitchPin)== HIGH){
    SlasherTrack.write(180);
    //FrontDoors.write(90);
  }
  else{
    SlasherTrack.write(0);
    //FrontDoors.write(0);
  }
  if(digitalRead(SlasherSpatulaPin)== HIGH){
    Curtains.write(90);
  }
  else{
    Curtains.write(0);
  }
}
