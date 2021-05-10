// C++ code
//
#include <IRremote.h>
int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop()
{
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    switch(results.decode_type){
      case NEC:
      Serial.println("NEC");
      break;
    case RC5:
      Serial.println("RC5");
      break;
      case SONY:
      Serial.println("SONY");
      break;
      case DISH:
      Serial.println("DISH");
      break;
    }
    irrecv.resume();
  }
  delay(100);
}