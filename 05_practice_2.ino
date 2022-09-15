#define PIN_LED 7
int toggle = 0;
int count = 0;
void setup(){
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  Serial.println("Hello World");
  digitalWrite(PIN_LED, 0);
  delay(1000);
}


void loop(){
  while(1){
    if(count == 11){
      digitalWrite(PIN_LED, 1);
      break;
    }
    if(toggle == 0){
    digitalWrite(PIN_LED, 0);
    toggle = 1;
    count += 1;
    }else{
    digitalWrite(PIN_LED, 1);
    toggle = 0;
    count += 1; 
    }
    delay(100);
  }
}
