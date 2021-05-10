// C++ code
//
#include<IRremote.h>
const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;
//unsigned long key_value = 0;

void setup()
{
    Serial.begin(9600);
  irrecv.enableIRIn();
  //irrecv.blink13(true);
}

void loop()
{
  if (irrecv.decode(&results)){
 
     
        switch(results.value){
          case 0xFD50AF:
          Serial.println("CH+");
          break;
          case 0xFD00FF:
          Serial.println("POWER");
          break;
          case 0xFD10EF:
          Serial.println("CH-");
          break;
          case 0xFD20DF:
          Serial.println("|<<");
          break;
          case 0xFD609F:
          Serial.println(">>|");
          break ;  
          case 0xFDA05F:
          Serial.println(">||");
          break ;               
          case 0xFD906F:
          Serial.println("vol-");
          break ;  
          case 0xFD807F:
          Serial.println("vol+");
          break ;  
          case 0xFDB04F:
          Serial.println("EQ");
          break ;  
          case 0xFD30CF:
          Serial.println("0");
          break ;  
          case 0xFD708F:
          Serial.println("ST/REPT");
          break ;
          case 0xFD40BF:
          Serial.println("FUNC/STOP");
          break ;
          case 0xFD08F7:
          Serial.println("1");
          break ;
          case 0xFD8877:
          Serial.println("2");
          break ;
          case 0xFD48B7:
          Serial.println("3");
          break ;
          case 0xFD28D7:
          Serial.println("4");
          break ;
          case 0xFDA857:
          Serial.println("5");
          break ;
          case 0xFD6897:
          Serial.println("6");
          break ;
          case 0xFD18E7:
          Serial.println("7");
          break ;
          case 0xFD9867:
          Serial.println("8");
          break ;
          case 0xFD58A7:
          Serial.println("9");
          break ;      
        }
       
        irrecv.resume(); 
  }
}