
#include <Servo.h>

int xPin = A0;
int yPin = A1;
int sPin = 12;
int xVal;
int yVal;
int sVal;
int servoPin = 2;
int servoPosition;
int delayT = 200;

Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  pinMode(servoPin, OUTPUT);
  digitalWrite(sPin, HIGH);
  myServo.attach(servoPin);
}

void loop() {
  xVal = analogRead(xPin);

  servoPosition = xVal * (180.0/1023.0);
  Serial.println(servoPosition);
  myServo.write(servoPosition);
}
