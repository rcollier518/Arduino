#include<Servo.h>
Servo servo;
void setup() {
  // what pin is it attched to //
  servo.attach(8);
  servo.write(0);
  delay(2000);
  
}
void loop(){
  //servo position//
  servo.write(0);
  //wait time//
  delay(2000);
  //servo position//
  servo.write(35);
 //wait time//
  delay(2000);
  //servo position//
  servo.write (90);
  //wait time//
  delay(2000);
}
  


  
  
  // put your setup code here, to run once:


