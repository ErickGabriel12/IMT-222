const int pot = 0; 
int valor=0;

void setup() 
{
Serial.begin(9600);
  }
void loop()
{
valor= analogRead (pot); 
  Serial.println("Valor de potenciometro: ");
  Serial.println(valor);
  delay(1000);
}