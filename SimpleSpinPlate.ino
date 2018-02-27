#include <Servo.h>
Servo servo_1;

int angle = 0;
int servo_pin = 9;
int ang_velocity = 1;
int potent = A0;

void setup() {
  // put your setup code here, to run once:
  servo_1.attach(servo_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  angle = analogRead(potent);
  angle = map(angle, 0, 1023, 0, 179);
  servo_1.write(angle);
  delay(5);
}
