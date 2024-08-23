#define led 13
#define boton 7
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);
 
}

void loop()
{
 if(digitalRead(boton)== 1){
  	digitalWrite(led, HIGH);
  }
  else 
  {digitalWrite(led, LOW);}
}