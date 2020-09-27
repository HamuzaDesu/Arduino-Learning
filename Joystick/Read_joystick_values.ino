#include <FileIO.h>

const int sw_pin = 8;
const int x_pin = A0;
const int y_pin = A1;

int x_coord, y_coord, z_val;

void setup() {
  // put your setup code here, to run once:
  pinMode(sw_pin, INPUT);
  digitalWrite(sw_pin, HIGH);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  x_coord = analogRead(x_pin);
  y_coord = analogRead(y_pin);
  z_val = digitalRead(sw_pin);

  int coordinates[3] = {x_coord, y_coord, z_val};

  
  Serial.print("X: ");
  Serial.print(x_coord);
  Serial.print("  Y: ");
  Serial.print(y_coord);
  Serial.print("  Z: ");
  Serial.println(z_val);
  
  delayMicroseconds(10);


}
