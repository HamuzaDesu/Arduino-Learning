int red_pin = 8;
int green_pin = 9;
int blue_pin = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  RGB_color(1l, 0, 0);
//  delay(1000);
//  RGB_color(0, 0, 0);
//  delay(1000);
  digitalWrite(13, HIGH);
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
{
  digitalWrite(red_pin, red_light_value);
  digitalWrite(green_pin, green_light_value);
  digitalWrite(blue_pin, blue_light_value);
}
