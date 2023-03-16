#define servopin 4
float ham1;
float ham2;
float temp1;
float temp2;
float derece;
int servo1;
int servo2;
int potpin1=0;
int potpin2=1;

void start(){
  for (int i=0;i<=3;i++){
    digitalWrite(servopin, HIGH);
    delay(100);
    digitalWrite(servopin, LOW);
    delay(20);
  }
  delay(500);
}

void degispos(){
  for(int i=0;i<=3;i++){
    digitalWrite(servopin, HIGH);
    delayMicroseconds(ham1);
    digitalWrite(servopin, LOW);
    delay(25);
  }
}


void setup() {
pinMode(servopin, OUTPUT);
Serial.begin(9600);
start();
}

void loop() {
for(int i=0;i<=180;i+=5){
temp1=(2000000/180)*0.001;
ham1=(i*temp1)+500;
Serial.println("aci:");
Serial.println(i);
Serial.println("motor high:");
Serial.println(ham1);
degispos();
delay(250);

}
}
