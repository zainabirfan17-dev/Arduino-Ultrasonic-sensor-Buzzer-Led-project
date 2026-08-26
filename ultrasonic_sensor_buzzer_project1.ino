const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin = 13;

long duration;
int distance;
int safetyDistance = 10; // cm, adjust as needed

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Add a timeout (30ms ~ 5m max range) so it doesn't hang
  duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    // No echo received - out of range or bad wiring
    Serial.println("No echo received");
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin, LOW);
  } else {
    distance = duration * 0.034 / 2;

    if (distance <= safetyDistance) {
      digitalWrite(buzzer, HIGH);
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(buzzer, LOW);
      digitalWrite(ledPin, LOW);
    }

    Serial.print("Distance: ");
    Serial.println(distance);
  }

  delay(100); // small delay for stable readings
}
