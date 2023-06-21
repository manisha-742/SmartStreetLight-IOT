#include <dht.h>
int led = 13;                // the pin that the LED is atteched to
int pr = A0;
int val = 0;                 // variable to store the sensor status (value)
#define dht_apin A1 // Analog Pin sensor is connected to
 
dht DHT;

void setup() {
  pinMode(led, OUTPUT);      // initalize LED as an output
   Serial.begin(9600);        // initialize serial
}

void loop(){
  int value = analogRead(pr);  // read light value
  Serial.println(value);
  DHT.read11(dht_apin);
  if (val == LOW) {           // check if the sensor is HIGH
    if(value < 20){
     digitalWrite(led, HIGH);   // turn LED ON
     delay(500);
    }
    if(value > 20){
      digitalWrite(led, LOW);   // turn LED ON
      delay(500);
    }
}
}
