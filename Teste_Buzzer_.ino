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

/* Funcao que aciona o Buzzer ao apertar o A1 */
  if (digitalRead(A1) == LOW)
{
    digitalWrite(Buzz, LOW);
}
  else {(digitalWrite(Buzz, HIGH));}
  
}

