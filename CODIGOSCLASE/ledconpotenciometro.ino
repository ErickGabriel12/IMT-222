#define pot A0 
#define Led 13 

void setup() 
{
pinMode(Led, OUTPUT); 
  }
void loop()
{
int brillo = analogRead (pot)/ 4; 
analogWrite (Led, brillo); 
}