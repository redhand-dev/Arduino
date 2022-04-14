#include <Arduino.h>
void setup()
{
  //Definir o pino 5 como saída
  pinMode(5, OUTPUT);
}
 
void loop()
{
  //Ligar o Led
  digitalWrite(5, HIGH);
   
  //Aguardar intervalo de 5 segundos - led ligado
  delay(5000);
   
  //Apagar o led
  digitalWrite(5, LOW);
   
   //Aguardar intervalo de 5 segundos - led desligado
  delay(5000);
}