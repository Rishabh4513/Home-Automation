#include <Servo.h>
int data=0;
Servo myservo;
int pos=0;
void setup() {
  myservo.attach(9);
  Serial.begin(9600);
}
void loop() {
  if(Serial.available()>0)
  {
    data=Serial.read();
    Serial.print(data);
    if(data=='1')
    {
      myservo.write(0);
    }
    if(data=='0')
    {
      myservo.write(90);
    }
  }
}
  
