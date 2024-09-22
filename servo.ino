#include <Servo.h>
Servo servo;

int servoPin = 9;

void setup() {       
    servo.attach(servoPin);  
}

void loop() {
    servo.write(0);   // تعيين السيرفو إلى 0 درجة
    delay(1000);      // تأخير 1 ثانية
    servo.write(90);  // تعيين السيرفو إلى 90 درجة
    delay(1000);      // تأخير 1 ثانية
    servo.write(180); // تعيين السيرفو إلى 180 درجة
    delay(1000);      // تأخير 1 ثانية
}
