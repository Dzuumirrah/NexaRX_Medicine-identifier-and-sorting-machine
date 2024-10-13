#include "config.h"
#include "app.h"

// Define constans for button pins
const int buttonPins[] = {up_button, down_button, yes_button, no_button};
const int numButtons = sizeof(buttonPins) / sizeof(buttonPins[0]);

// Define states
volatile uint8_t buttonStates = 0;
volatile bool buttonPressed[numButtons] = {false};

// Function pointers  for action
void (*buttonActions[numButtons])() = {up_select, down_select, yes_select, no_select};

// Interrupt service routine for button presses
void IRAM_ATTR buttonISR(){
    for (int i = 0; i < numButtons; i++){
        if (digitalRead(buttonPins[i]) == LOW){
            buttonPressed[i] = true;
        }
    }
}

void setup(){
    Serial.begin(115200);
    
    // Initialize the WiFi connection
    CheckWifiConnection();

    // Initialaize buttons pins and attach interrupts
    for (int i = 0; i < numButtons; i++){
      pinMode(buttonPins[i], INPUT_PULLUP);
      attachInterrupt(digitalPinToInterrupt(buttonPins[i]), buttonISR, FALLING);
    }
}

void loop(){
    // Check user feature
    // Check if any button was pressed
    for (int i = 0; i < numButtons; i++){
        if (buttonPressed[i]){
          buttonPressed[i] = false;
          buttonActions[i]();
        }
    }

}