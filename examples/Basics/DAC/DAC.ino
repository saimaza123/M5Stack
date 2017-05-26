/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.
*/

#include <M5Stack.h>
#include "esp32-hal-dac.h"

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize the M5Stack object
  m5.begin();
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_PIN, OUTPUT);
  // pinMode(25, OUTPUT);
  // dacWrite(25, 90);
}

// the loop function runs over and over again forever
void loop() {
  // digitalWrite(25, digitalRead(25));
  // delay(10);
  // digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  // delay(1000);                       // wait for a second
  // digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  // delay(1000);                       // wait for a second

  for(uint8_t i=0; i<=255; i++) {
    dacWrite(25, i);
    // delayMicroseconds(1);
    // delay(1);
  }

  for(uint8_t i=255; i>0; i--) {
    dacWrite(25, i);
    // delayMicroseconds(1);
    // delay(1);
  }
}