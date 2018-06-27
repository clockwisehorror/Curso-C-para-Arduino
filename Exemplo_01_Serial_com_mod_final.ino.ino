#define Pot1 0

void setup()
{
  /**/
  Serial.begin(9600);
}

void loop()
{
  int contador_crescente;

  
  for (contador_crescente = 0; ; contador_crescente++)
  {
    bool sucesso = false;
    sucesso = Envia_Serial (contador_crescente);
  /*delay e' funcao interna do arduino e e' contado em milisegundos*/
  delay(1000);
  }

  /* Coloca a leitura do potenciomentro em uma situacao*/
  Serial.print("Potentiometro: ");
  Serial.println(analogRead(Pot1));
  delay(500);


  
}

bool Envia_Serial (int contador_crescente)
{
  Serial.println(contador_crescente);

  return true;
}

