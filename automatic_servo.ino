#include <Servo.h>
Servo myservo;
int val, ServoPin=9,angle=0;
void setup() {
  Serial.begin(9600);
  myservo.attach(ServoPin);
  Serial.println("Enter inputs a/b/c/d:");
}
void loop() {
myservo.write(0);
      delay(200);
      myservo.write(60);
      delay(200);
      myservo.write(90);
      delay(200);
      myservo.write(120);
      delay(200);
      myservo.write(180);
      delay(200);
}
