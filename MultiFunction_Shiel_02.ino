int LED_D1 = 13;
int LED_D2 = 12;
int LED_D3 = 11;
int LED_D4 = 10;
int Buzz = 3;

void setup() 
{
  Serial.begin(9600);

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
  
}

void loop()
{
  Serial.println("App init OK");

  while(1)
  {

   while(digitalRead(A1) == LOW && digitalRead(A2) == LOW && digitalRead(A3) == LOW)
   {
    digitalWrite(LED_D4, LOW);
   }
    
    //relação botão A1 com o LED D1
    if(digitalRead(A1) == HIGH )
    {
      Serial.println("HIGH");
      digitalWrite(Buzz, HIGH);
    }
    else if(digitalRead(A1) == LOW)
    {
      Serial.println("LOW");
      digitalWrite(LED_D1, LOW);
    }

    //relação botão A2 com o LED D2
    if(digitalRead(A2) == HIGH )
    {
      Serial.println("HIGH");
      digitalWrite(LED_D2, HIGH);
    }
    else if(digitalRead(A2) == LOW)
    {
      Serial.println("LOW");
      digitalWrite(LED_D2, LOW);
    }

    //relação botão A3 com o LED D3
    if(digitalRead(A3) == HIGH )
    {
      Serial.println("HIGH");
      digitalWrite(LED_D3, HIGH);
    }
    else if(digitalRead(A3) == LOW)
    {
      Serial.println("LOW");
      digitalWrite(LED_D3, LOW);
    }
    
  
   
  }
  
}

