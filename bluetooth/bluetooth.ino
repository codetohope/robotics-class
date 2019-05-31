#include <SoftwareSerial.h>
    
SoftwareSerial BTSerial(2, 3);
char incoming;

void setup() {  
  BTSerial.begin(9600);
  pinMode(13, OUTPUT);
}  

void loop() {  
  if (BTSerial.available() > 0) {  
    
    while(BTSerial.available()) { 
      incoming = (char)BTSerial.read();  
    }
    
    BTSerial.println(incoming); 
    
    if(incoming == '1') {
      BTSerial.println("Turning L ON");
      digitalWrite(13, HIGH);
    }

    
    if(incoming == '0') {
      BTSerial.println("Turning L OFF");
      digitalWrite(13, LOW);
    }
    
  }
}
