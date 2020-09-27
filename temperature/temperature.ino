int tempPin = A0;

int redPin = 8;
int greenPin = 9;
int bluePin = 10;

float sensorValue, voltageOut;
float temperatureC;

void setup() {
  // put your setup code here, to run once:
  pinMode(tempPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(tempPin);

  voltageOut = (sensorValue * 5000) / 1024;

  temperatureC = voltageOut / 10;


  if(temperatureC >=30){
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    
    digitalWrite(redPin, HIGH);
  }
  else if(temperatureC >= 25 && temperatureC < 30){
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
    
    digitalWrite(greenPin, HIGH);
  }
  else{
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    
    digitalWrite(bluePin, HIGH);
  }
  
  Serial.print("Temperature Celcius: ");
  Serial.print(temperatureC);

  Serial.print("  Voltage(mV): ");
  Serial.println(voltageOut);

  delay(1000);
}
