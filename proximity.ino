// IR Proximity Sensor with Arduino

int IRSensor = 2;  // IR sensor connected to pin 9
int LED = 3;       // LED connected to pin 13

void setup() {
  Serial.begin(115200);  // Start serial communication
  Serial.println("IR Sensor Ready");

  pinMode(IRSensor, INPUT);  // Set IR sensor pin as input
  pinMode(LED, OUTPUT);      // Set LED pin as output
}

void loop() {
  int sensorStatus = digitalRead(IRSensor);  // Read IR sensor value

  if (sensorStatus == HIGH)  // No object detected
  {
    digitalWrite(LED, LOW);  // Turn LED OFF
    Serial.println("No Object Detected");
  } else  // Object detected
  {
    digitalWrite(LED, HIGH);  // Turn LED ON
    Serial.println("Object Detected");
  }

  delay(200);  // Small delay for stability
}
