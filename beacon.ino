#include <SoftwareSerial.h>  
SoftwareSerial BTSerial(3, 2); 
void setup()  
{  
  Serial.begin(9600);  
  Serial.println("Hello!");  
  // set the data rate for the BT port  
  BTSerial.begin(9600);  
}  
void loop() {  
  while (BTSerial.available()) {
    byte data = BTSerial.read();  
    Serial.write(data); // write it to serial(serial monitor)  
  }  
  while (Serial.available()) { 
    byte data = Serial.read();  
    BTSerial.write(data); 
  }  
}
