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
  digitalWrite(13,1);
     digitalWrite(12,1);
  } 
  else{
     digitalWrite(13,0);
     digitalWrite(12,0);
  }
   if(digitalRead(6)){
  digitalWrite(10,1);
     digitalWrite(8,1);
  } 
  else{
      digitalWrite(10,0);
     digitalWrite(8,0);
   
  }
    
                
            
 
}