<<<<<<< HEAD
#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT)
  Serial.begin(9600); // Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count=toggle=0;
  digitalwrite(PIN_LED, toggle); // turn off LED.
}

void loop(){
  Serial.println(++count);
  toggle=toggle_state(toggle); toggle LED value.
  digitalWrite(PIN_LED, toggle); // update LED status.
  delay(1000); // wait for 1,000 milliseconds
}

int toggle_state(int toggle){
  if(toggle==0) toggle=1;
  else toggle=0;

  
  return toggle;
=======

#define PIN_LED 7
unsigned int cnt;
unsigned int toggle;

void setup() {
pinMode(PIN_LED, OUTPUT);
Serial.begin(115200);
while(!Serial) {
;
}
digitalWrite(PIN_LED, 0);
delay(1000);
cnt = 0 ;
toggle = 1;
}

void loop() {
while(cnt < 5) {
cnt++;
digitalWrite(PIN_LED, toggle);
toggle = !toggle;
delay(100);
digitalWrite(PIN_LED, toggle);
toggle = !toggle;
delay(100);
if(cnt == 5) {
break;
}
}
digitalWrite(PIN_LED, 1);
>>>>>>> sf2/main
}
