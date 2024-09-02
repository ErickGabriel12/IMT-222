#define		PULS		2
#define		PASO		1
#define		BAURENDT	9600
#define		PULSA	3
#define 	VALOR		0
unsigned int cont;
void setup()
{
  Serial.begin(BAURENDT);
  pinMode(PULS, INPUT_PULLUP);
  pinMode(PULSA, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(PULS), interrupir, FALLING);
  attachInterrupt(digitalPinToInterrupt(PULSA), reinicio, FALLING);
}

void loop()
{

}

void interrupir()
{
	cont+=PASO;
   Serial.println(cont);

}
void reinicio()
{
	cont=VALOR;
}

