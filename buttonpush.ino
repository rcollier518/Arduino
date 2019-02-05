  const int led=9;
  const int button=8;
  const int led2=4;
   int buttonState=0;
  int flag=0;
void setup() {
  Serial.begin(9600);
 // Serial.print("in if");
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(button,INPUT_PULLUP);
  
}

  
  // put your setup code here, to run once:
void loop() {
 
  buttonState=digitalRead(button);
Serial.print(buttonState);
  if(buttonState==1){
  //Serial.print("in first if");
    if(flag==0){
    //1 = on
      digitalWrite(led,1);

    flag=1;
      if(flag==1){
        delay(1000);
        //0==off);
        digitalWrite(led,0);
         digitalWrite(led2,1);
        delay(1000);
        digitalWrite(led2,0);
        
        
        
        
         flag=0;
      }
     

  
    }
 

  }
}


 
  

   
  // put your main code here, to run repeatedly:


