const int trigPin = 2;
const int echoPin = 3;

void setup() {
Serial.begin(19200);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}

void loop(){
digitalWrite(trigPin, LOW);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
long durata = pulseIn(echoPin, HIGH);
long cm = 0.034 * durata / 2;
Serial.print(cm);
Serial.print(" cm");
Serial.println();
delay(100);
}
