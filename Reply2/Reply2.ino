// This program shown how to control arduino from PC Via Bluetooth
// Connect ...
// arduino>>bluetooth
// D11   >>>  Rx
// D10   >>>  Tx
//Written By Mohannad Rawashdeh
//for http://www.genotronex.com/

// you will need arduino 1.0.1 or higher to run this sketch

#include <SoftwareSerial.h>// import the serial library

SoftwareSerial Genotronex(10, 11); // RX, TX
char BluetoothData; // the data given from Computer

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // open the serial port at 9600 bps:
  Genotronex.begin(9600);
  Genotronex.println("Arduino thingy is online");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Genotronex.available()){
    BluetoothData=Genotronex.read();
    if(true){

      Serial.print(BluetoothData);
      Genotronex.print(BluetoothData);

    }
   
   }
  

  delay(50);// prepare for next data ...
}
