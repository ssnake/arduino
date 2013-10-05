/*
  ASCII table
 
 Prints out byte values in all possible formats:  
 * as raw binary values
 * as ASCII-encoded decimal, hex, octal, and binary values
 
 For more on ASCII, see http://www.asciitable.com and http://en.wikipedia.org/wiki/ASCII
 
 The circuit:  No external hardware needed.
 
 created 2006
 by Nicholas Zambetti 
 modified 9 Apr 2012
 by Tom Igoe
 
 This example code is in the public domain.

 <http://www.zambetti.com> 
 
 */

int led = 13;
int incomingByte = 0;

void setup() { 
 //Initialize serial and wait for port to open:
  Serial.begin(9600); 
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  pinMode(led, OUTPUT);   
  Serial.println("Control Led 13"); 
} 


void loop() { 
  if (Serial.available() > 0) {
   
    incomingByte = Serial.read();
    Serial.println(incomingByte) ;
    if (incomingByte == '1')
    {
      digitalWrite(led, HIGH);
      Serial.println("HIGH");
    }
    if (incomingByte == '2')
    {
      digitalWrite(led, LOW);
      Serial.println("LOW");
    }
    
  }
  

} 
