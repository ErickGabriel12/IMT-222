#define rojo 9
#define amarrillo 10
#define verde 11

void setup{
pinMode(rojo, OUTPUT);
pinMode(amarrillo, OUTPUT);
pinMode(verde, OUTPUT);

digitalWrite(rojo, LOW);
digitalWrite(amarrillo, LOW);
digitalWrite(verde, LOW);
}

void loop{
digitalWrite(verde, HIGH);//Encender LED verde
  digitalWrite(amarillo, LOW); //LED amarillo apagado
  digitalWrite(rojo, LOW); //LED rojo apagado
  delay(15000); 		 //Mantiene encendido por 15 seg
  
  digitalWrite(verde, LOW); //Apaga LED verde
  digitalWrite(amarillo, HIGH);//Enciende LED amarillo
  digitalWrite(rojo, LOW); //Apaga LED rojo
  delay(5000);           //Encendido por 5 seg
  
  digitalWrite(verde, LOW); //Apaga LED verde
  digitalWrite(amarrillo, LOW); //Apaga LED amarillo
  digitalWrite(verde, HIGH);//Enciende LED rojo
  delay(15000);			 //Encendido por 15 seg
  }

