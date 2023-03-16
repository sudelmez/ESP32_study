#include <ESP32Servo.h>
Servo myservo;
int pos=0;

#define LEDPIN 2
#define servopin 4
void setup() {
  myservo.attach(servopin,1000,2000);

  pinMode(LEDPIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LEDPIN, HIGH);
  for(pos=0;pos<=180;pos+=1){
    myservo.write(pos);
  }
  delay(1000); 
  digitalWrite(LEDPIN, LOW);
  for(pos=180;pos>=0;pos-=1){
    myservo.write(pos);
  }
  delay(1000);
}
