#define PIN_LED 13

int toggle = 0;
int count = 0;
void setup(){
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  Serial.println("Hello World");
  digitalWrite(PIN_LED, toggle);
}


void loop(){
  Serial.println(++count);
  if(toggle == 0){
    digitalWrite(PIN_LED, 1);
    toggle = 1;
  }else{
    digitalWrite(PIN_LED, 0);
    toggle = 0; 
  }
  delay(1000);
}
