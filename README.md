# HOA2004_Transmissive_Optoschmitt_Sensor

Basic program for use with HOA2004 Transmissive Optoschmitt Sensor
 * by: Mark Keranen
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
