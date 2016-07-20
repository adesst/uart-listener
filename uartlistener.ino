#include <SoftwareSerial.h>

SoftwareSerial mySerial = SoftwareSerial(8,9);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial){
    ;
  }

  mySerial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    mySerial.print(Serial.readString());
  }

  if(mySerial.available()){
    Serial.print(mySerial.readString());
  }
}

