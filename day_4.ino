#include<Servo.h>

Servo myservo;
int pos = 0;

void setup() {
  myservo.attach(16);
}

void loop(){
  for(pos = 0; pos < 180; +- 1){
    myservo.write(pos);
    delay(10);
  }
  for (pos = 180; pos>=1; pos -= 1){
    myservo.write(pos);
    delay(10);
  }
 

 



  




  
  
