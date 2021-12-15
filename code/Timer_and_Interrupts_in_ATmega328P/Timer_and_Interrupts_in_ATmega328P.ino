// teammates name sujal chintan darshnik
//project description:- learning timer interrupt
// first try of port regisor led on 
void setup() {
  DDRD = B00000100; // D2 OUTPUT
}

void loop() {
  PORTD = B00000100; // D2 HIGH 

}
