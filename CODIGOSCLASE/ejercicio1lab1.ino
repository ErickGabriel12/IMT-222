#include <EEPROM.h> 

#define UP 2
#define DOWN 3
#define PASO 1
#define BAUDRATE 9600

volatile unsigned long lasttime = 0;
volatile unsigned long debounceDelay = 50;
unsigned int cont;
int MAXVAL = 20;
int MINVAL = 0;

void setup() {
  Serial.begin(BAUDRATE);
  
  
  cont = EEPROM.read(0);
  
 
  if (cont > MAXVAL || cont < MINVAL) {
    cont = MINVAL;
  }
  
  pinMode(UP, INPUT);
  pinMode(DOWN, INPUT);
  
  attachInterrupt(digitalPinToInterrupt(UP), SUMAR, FALLING);
  attachInterrupt(digitalPinToInterrupt(DOWN), RESTAR, FALLING);
}

void loop() {
  delay(5000);
}

void SUMAR() {
  if (millis() - lasttime > debounceDelay) {
    if (cont < MAXVAL) {
      cont += PASO;
      lasttime = millis();
      
      EEPROM.write(0, cont);
      
      Serial.println(cont);
    }
  }
}

void RESTAR() {
  if (millis() - lasttime > debounceDelay) {
    if (cont > MINVAL) {
      cont -= PASO;
      lasttime = millis();
      
      EEPROM.write(0, cont);
      
      Serial.println(cont);
    }
  }
}