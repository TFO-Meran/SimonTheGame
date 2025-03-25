/*
    ======== Simon - the Game ============

 */

#include <Arduino.h>
#include "helper.h"
#include "analogblinker.h"

#define LED1 5    // Low-side switch (leuchtet mit LOW)
#define LED2 6    // High-side switch (leuchtet mit HIGH)
#define TASTER1 3 // HIGH wenn gedrückt
#define TASTER2 2 // LOW wenn gedrückt
#define PWM_TEST 10 // PWM Testpin
#define POTI A7   // Poti an A7

void setup()
{
    Serial.begin(115200);
    Serial.println("..Start..\n");

    TCCR1A = 0b00000001; // Timer1: Fast PWM, non-inverted
    TCCR1B = 0b00001001; // Timer1: Fast PWM, Prescaler 1    
}

void loop()
{
   
}
