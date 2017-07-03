/* Basic program for use with HOA2004 Transmissive Optoschmitt Sensor
 *  by: Mark Keranen
 * 
 * This program monitors the status of the sensor's IR beam, and writes the status to Serial Output & Pin 13 LED.
 * 
 * Components Needed:
 *  - Arduino UNO
 *  - HOA2004
 *  - 100ohm resistor
 *  - 5 wires
 * 
 * Pinout description:
 * HOA2004 Pins:
 *  +IR Detector
 *    - Vcc to 5V
 *    - Vo to Pin 2
 *    - GND to GND
 *    
 *  +IR Emitter
 *    - Anode to 3.3V
 *    - Cathode to 100ohm resistor to GND
 *
 */


//Function: Reads in status of IR beam, outputs status to Serial Monitor & Pin 13 LED
int pathClear;
void pathStatus(void){
  pathClear = digitalRead(2);
  digitalWrite(13, pathClear);
  if (pathClear == 1){
    Serial.println("Path Clear");
  }
  else{
    Serial.println("Path Obstructed");
  }
}

//Setup Pinmodes, serial monitor
void setup() {
 
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
  Serial.println("Initialization complete, checking pathway status...\n");
  
}

//Check pathway status continuously
void loop() {

  pathStatus();
  delay(500);   //Adjust this for faster or slower refresh rates
  
  }
