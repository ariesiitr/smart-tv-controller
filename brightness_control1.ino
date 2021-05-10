// C++ code
int light;
void setup()
{
 // pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{light=analogRead(A0);
 if(light<500){
 Serial.println("decrease brightness");
 }else{
    
  
   Serial.println("increase the brightness");}
   delay(100);
}