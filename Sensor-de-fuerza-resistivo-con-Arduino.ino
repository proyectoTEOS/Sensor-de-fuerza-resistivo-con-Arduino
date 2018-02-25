/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  Google Plus https://goo.gl/gBnUdh
  WEB https://goo.gl/jtiYJy
*/

const int sensorPinT = A0;
int valT, calibrationReadingT;
String resultSerialT;

void setup(void) {
  Serial.begin(9600);
}

void loop(void) {
  calibrationReadingT = analogRead(sensorPinT);
  valT = map(calibrationReadingT, 0, 1023, 0, 100);
  valT = constrain (valT, 0, 100);
  resultSerialT = "Lectura analogica de: " + String(calibrationReadingT) + ", representando un " + String(valT) + "% de la fuerza soportada" ;
  Serial.println(resultSerialT);
  delay(500);
}
