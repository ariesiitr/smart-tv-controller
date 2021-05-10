// C++ code
int noise;
String msg("enter noise value");
void setup()
{
 // pinMode(txPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(msg);
  while(Serial.available()==0){
  }
    noise=Serial.parseInt();
  Serial.print("noise is");
  Serial.println(noise);
  if(noise>=100){
  Serial.println("increase the volume");
    
  }
  if(noise<100){
    Serial.println("decrease the volume");
  }
}