// teammates name sujal chintan darshnik
// project description:- learning timer interrupt
// blink 9 (pin 2-10) led in sequence with push button (pin 11) no added any pull up registor externally
void setup() {
  DDRD = B11111100; // set direction of registor
  DDRB = B00000111; // set direction of registor
  PORTB = B00001000; // pull-up registor
  Serial.begin(9600);
}

void loop() 
{ int READ;
  READ = (PINB >> 3 & B00001000 >> 3); // read B3 = pin 10
  Serial.println(READ);
  if(READ == 0)
  {   
    PORTD |=  B00000100;   // Add OR logical expression for add bit
    delay(100);
    PORTD &= !B00000100;   // Add AND logical expression for remove bit
    delay(100);
  
    PORTD = B00001000;     
    delay(100);
    cl();
    PORTD = B00010000;   
    delay(100);
    cl();
    PORTD = B00100000;   
    delay(100);
    cl();
    PORTD = B01000000;   
    delay(100);
    cl();
    PORTD = B10000000;
    delay(100);
    cl();
    PORTB = B00000001;   
    delay(100);
    cl();
    PORTB = B00000010;   
    delay(100);
    cl();
    PORTB = B00000100;   
    delay(100);
    cl();
    Serial.println(PINB);
  } 
  PORTB = B00001000; // pull-up registor
  Serial.println(PINB);
}
//////////////////////////////////
//function name: cl()
//description: for clear the bits
//////////////////////////////////
void cl()
{
PORTD &= !B11111111;
PORTB &= !B00000111;
}
