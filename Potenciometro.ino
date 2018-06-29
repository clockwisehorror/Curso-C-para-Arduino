#define Pot1 0

 
void setup()
{
//estabele a comunicacao na taxa de 9600 baud (rate or modulation rate in symbols per second or pulses per second)
 Serial.begin(9600);
}
 
//Programa principal
void loop()
{
//Informa no Monitor Serial qual a leitura do potenciometro 
Serial.print("PR ");
Serial.println(analogRead(Pot1));
/* Wait 0.5 seconds before reading again */
delay(500);
}
