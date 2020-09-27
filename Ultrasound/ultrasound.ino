int trigPin = 11;
int echoPin = 12;

int redPin = 1;
int greenPin = 2;
int bluePin = 3;

  
long duration, distanceCm;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
}



void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distanceCm = (duration/2) / 29.1;

  if(distanceCm < 5){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);

    digitalWrite(bluePin, HIGH);
  }
  else if(distanceCm > 10 & distanceCm < 20){
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);

    digitalWrite(greenPin, HIGH);
  }
  else{
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW);

    digitalWrite(redPin, HIGH);
  }
  

  Serial.print(distanceCm);
  Serial.print("cm\n");
  
}
