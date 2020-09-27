int yellowPin = 8;
int greenPin = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(5000);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(5000);
}
