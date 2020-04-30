void setup() 
{
 
      s1.attach(2);
      s1.write(0);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  pinMode(12,OUTPUT);
  digitalWrite(12,LOW);

  Serial.begin(9600);
}
 
void loop() {

  String content = "";
  char character;
 char data [1];
 int number_of_bytes_received;
  if(Serial.available() )
    {
number_of_bytes_received = Serial.readBytesUntil (1,data,1);
data[number_of_bytes_received] = 0; 
  lcd.setCursor(0,1);            
  lcd.print(data);          

   if(data == "T")
     {
  
       lcd.setCursor(13,1);

       digitalWrite(13,HIGH);
            s1.write(90);
          delay (3000);
           
            s1.write(0);
       digitalWrite(13,LOW);
     }
     else
     {

         digitalWrite(12,HIGH);
      
       lcd.setCursor(13,1);
  
         delay (3000);
          digitalWrite(12,LOW);
      
     }
     
    }
  

 
}
