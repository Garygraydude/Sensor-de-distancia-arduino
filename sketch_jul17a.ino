#include <HCSR04.h>
HCSR04 sensorDistance(13 , 12);

float distancia = 0;

void setup() {
 Serial.begin(9600);



}

void loop() {
distancia = sensorDistance.dist()/100;
Serial.print(distancia);
delay(1000);

}
