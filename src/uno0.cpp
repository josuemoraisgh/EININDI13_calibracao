 #include <Arduino.h>
 
 #define pinANALOG A5 // Configura o pino de leitura
 
 uint32_t timeDelayMS = 10;
 uint32_t expiresDelayMS = 0;
 
 void setup() {
     Serial.begin(9600);
 }
 
 void loop() {
     if ((millis() - expiresDelayMS) >= timeDelayMS)
     {
       expiresDelayMS = millis();
       Serial.print(">graf:");
       Serial.print(expiresDelayMS);
       Serial.print(":");
       Serial.print(analogRead(pinANALOG));
       Serial.println("|g");
     }
 }