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
