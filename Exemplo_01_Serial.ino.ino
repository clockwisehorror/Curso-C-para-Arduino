void setup()
{
  /**/
  Serial.begin(9600);
}

void loop()
{
  char strEnvio_do_Loop[] = "Ola Linguagem C !";
  bool sucesso = false;

  sucesso = Envia_Serial (strEnvio_do_Loop);
  /*delay e' funcao interna do arduino e e' contado em milisegundos*/
  delay(1000);
}

bool Envia_Serial (char strEnvio_da_Envia_Serial[])
{
  Serial.println(strEnvio_da_Envia_Serial);

  return true;
}

