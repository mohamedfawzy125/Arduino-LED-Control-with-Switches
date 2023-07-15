// C++ code
int counter=0;
void setup()
{
  for(int i=8 ; i<=13 ; i++ ){
    pinMode(i ,OUTPUT) ;
}
  pinMode(6 , INPUT);
  pinMode(7 , INPUT);
}
void loop()
{ 
  if(digitalRead(7)){
    
  analogWrite(13,128);
     digitalWrite(12,1); 
  
  } 
  else{
   
     analogWrite(13,0);
     digitalWrite(12,0);
  
  }
   if(digitalRead(6)){
  digitalWrite(10,1);
     analogWrite(8,128);
  } 
  else{
      digitalWrite(10,0);
     analogWrite(8,0);
   
  }
    
                
            
 
}