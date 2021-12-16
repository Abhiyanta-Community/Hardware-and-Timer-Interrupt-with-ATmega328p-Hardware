// teammates name sujal chintan darshnik
//project description:- learning timer interrupt
// blink 8 led pin 2-9 
void setup() {
  DDRD = B11111100; 
  DDRB = B00000011;
}

void loop() {
  PORTD = B11111100;   
  PORTB = B00000011;
  delay(500);
  PORTD = B00000000; 
  PORTB = B00000000;
  delay(500);
}
