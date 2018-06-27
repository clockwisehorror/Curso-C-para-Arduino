  #include <EEPROM.h> // biblioteca EEPROM


int LED_D1 = 13;
int LED_D2 = 12;
int LED_D3 = 11;
int LED_D4 = 10;
int Buzz = 3;


void setup()
{
  Serial.begin(115200);

  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);

  pinMode(LED_D1, OUTPUT);
  pinMode(LED_D2, OUTPUT);
  pinMode(LED_D3, OUTPUT);
  pinMode(LED_D4, OUTPUT);
  pinMode(Buzz, OUTPUT);
  
  digitalWrite(LED_D1,HIGH);
  digitalWrite(LED_D2,HIGH);
  digitalWrite(LED_D3,HIGH);
  digitalWrite(LED_D4,HIGH);
  digitalWrite(Buzz, HIGH);
  
}

void loop()
{
  //contadores dos cliques de A1 e A2
  //char que vai até 225
  unsigned char contA1 = 0;
  unsigned char contA2 = 0;

  while(1)
  {
    //LOW é a leitura de botao apertado
    //Se algum dos dois botoes for apertado, acenda a LED_D3
    if (digitalRead(A1) == LOW || digitalRead(A2) == LOW)
    {
      digitalWrite(LED_D3, LOW);
      //Se o botao apertado for o A1, aumente o contador dele
      if (digitalRead(A1) == LOW)
      {
        contA1++;
        
        Serial.print("A1 ");
        Serial.println(contA1);
        //exibe o valor gravado e grava o último valor de contA1 na EEPROM
        EEPROM.write(35, "A1");
        EEPROM.write(36, contA1);
        Serial.println(EEPROM.read(35));
        Serial.println(EEPROM.read(36));
        //Limite de acionamento do A1 = 8
        if (contA1 == 8)
        {
          Serial.println("AVISO AVISO || A1 = 8 || AVISO AVISO");
        }
      }
      
      if (digitalRead(A2) == LOW)
      {
        contA2++;
        Serial.print("A2 ");
        Serial.println(contA2);
        //Limite de acionamento do A2 = 3
        if (contA2 == 3)
        {
          Serial.println("AVISO AVISO || A2 = 2 || AVISO AVISO");
        }
        if (contA2 > 15)
        {
          digitalWrite(Buzz, LOW);
          delay(1000);
          digitalWrite(Buzz, HIGH);
          contA1 = 0;
          contA2 = 0;
        }
      }

        
    while (digitalRead(A1) == LOW || digitalRead(A2) == LOW)
    {
    };
    digitalWrite(LED_D3, HIGH);
    }
    
    //se apertar o A3
    if (digitalRead(A3) == LOW)
    {
        unsigned char i = 0;
        //led D1 uma vez e led D4 (contA1) vezes
        digitalWrite(LED_D1, LOW);
        while (i != contA1)
        {
          digitalWrite(LED_D4, LOW);
          delay(1000);
          digitalWrite(LED_D4, HIGH);
          i++;
          delay(1000);
        }
        digitalWrite(LED_D1, HIGH);

        unsigned char j = 0;
        //led D2 uma vez e led D4 (contA2) vezes
        digitalWrite(LED_D2, LOW);
        while (j != contA2)
        {
          digitalWrite(LED_D4, LOW);
          delay(1000);
          digitalWrite(LED_D4, HIGH);
          j++;
          delay(1000);
        }
        digitalWrite(LED_D2, HIGH);
     } 

      
  }
}



