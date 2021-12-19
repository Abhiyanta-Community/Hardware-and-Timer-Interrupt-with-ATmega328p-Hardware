// teammates name sujal chintan darshnik
// project description:- learning timer interrupt
// blink 9 (pin 2-10) led in sequence with push button (pin 11) no added any pull up registor externally
void setup() {
  DDRD = B11111100; // set direction of registor
  DDRB = B00000111; // set direction of registor
}

void loop() 
{ 
  int READ; // veriable
  PORTB = B00001000; //pull-up register
  READ = (PINB >> 3 & B00001000 >> 3); // read B3 = pin 10
  
  if(READ == 0)
  { 
    for(int i=1;i<=6;i++)
    {
     PORTD = B0000010 << i;   // its shigting 1 right to left
     delay(100);
     PORTD &= !B11111111;     // its clearing the bit for led off 
    }  
    for(int j=0;j<=2;j++)
    { 
     PORTB = B00001000 | B00000001 << j; //its shigting 1 right to left this should not effected on 4th bit becouse its for button
     delay(100);
     PORTB &= !B00000111;    // its clearing the bit for led off but should "not effect on any other bits" 
    }  
  }  
 }
