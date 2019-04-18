const int pin1=3;
const int pin2=4;
volatile int counter = 50;
volatile int curpos;

void setup() {
pinMode(pin1,INPUT);
pinMode(pin2,INPUT);



}

void loop() {
  Serial.println(counter);
  volatile int lastpos=digitalRead(pin1);

}

void rtry(){
    if (digitalRead(pin1) != digitalRead(pin2)){
    counter=counter + 5;}
    else {counter=counter-5;}}
