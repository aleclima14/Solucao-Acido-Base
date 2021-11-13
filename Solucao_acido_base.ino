//Define as variaveis das bombas
#define bomba1 2
#define bomba2 3
#define bomba3 4
#define bomba4 5

//Define as variaveis dos botões
#define bot1 8    //Referente a bomba 1
#define bot2 9    //Referente a bomba 2
#define bot3 10   //Referente a bomba 3
#define bot4 11   //Referente a bomba 4


//Define os delays de acionamento
unsigned long delay1 = 0;
unsigned long delay2 = 0;
unsigned long delay3 = 0;
unsigned long delay4 = 0;

//Define as flags
int flag1 = 0;
int flag2 = 0;
int flag3 = 0;
int flag4 = 0;

//Define o intervalo de tempo
int tempo = 10000;

//Define o contador de bombas acionadas simutaneamente
int cont = 0;


void setup()
{
  //Define os botões como entradas
  pinMode(bot1, INPUT);   //Botão de acionamento bomba 1
  pinMode(bot2, INPUT);   //Botão de acionamento bomba 2
  pinMode(bot3, INPUT);   //Botão de acionamento bomba 3
  pinMode(bot4, INPUT);   //Botão de acionamento bomba 4

  //Define as variaveis das bombas como saídas
  pinMode(bomba1, OUTPUT); //Bomba 1
  pinMode(bomba2, OUTPUT); //Bomba 2
  pinMode(bomba3, OUTPUT); //Bomba 3
  pinMode(bomba4, OUTPUT); //Bomba 4

  //Desativa todos os relés ao iniciar o programa
  digitalWrite(bomba1, HIGH);
  digitalWrite(bomba2, HIGH);
  digitalWrite(bomba3, HIGH);
  digitalWrite(bomba4, HIGH);

}


void loop()
{


  //Acionamento da descarga
  int reset = analogRead(A0);
  if ((reset > 1000) && (cont > 0))
  {
    digitalWrite(bomba4, LOW);

    //Desativa todas as bombas ao ligar a descarga
    digitalWrite(bomba1, HIGH);
    digitalWrite(bomba2, HIGH);
    digitalWrite(bomba3, HIGH);
    cont = 0; //Reseta a contagem de bombas acionadas
    delay(15000);
  }
  else
  {
    digitalWrite(bomba4, HIGH);
  }


  //---------------------------------------------------------

  //Acionamento da bomba 1
  flag1 = digitalRead(bot1);
  if (flag1 == HIGH)
  {
    if ((millis() - delay1) > tempo)
    {
      if (cont < 3)
      {
        digitalWrite(bomba1, LOW);
        delay1 = millis();
        cont++;
      }
    }
  }
  if ((millis() - delay1) == tempo)
  {
    digitalWrite(bomba1, HIGH);
  }

  //---------------------------------------------------------

  //Acionamento da bomba 2
  flag2 = digitalRead(bot2);
  if (flag2 == HIGH)
  {
    if ((millis() - delay2) > tempo)
    {
      if (cont < 3)
      {
        digitalWrite(bomba2, LOW);
        delay2 = millis();
        cont++;
      }
    }
  }
  if ((millis() - delay2) == tempo)
  {
    digitalWrite(bomba2, HIGH);
  }

  //---------------------------------------------------------

  //Acionamento da bomba 3
  flag3 = digitalRead(bot3);
  if (flag3 == HIGH)
  {
    if ((millis() - delay3) > tempo)
    {
      if (cont < 3)
      {
        digitalWrite(bomba3, LOW);
        delay3 = millis();
        cont++;
      }
    }
  }
  if ((millis() - delay3) == tempo)
  {
    digitalWrite(bomba3, HIGH);
  }

  //---------------------------------------------------------

  //Acionamento da bomba 4
  flag4 = digitalRead(bot4);
  if (flag4 == HIGH)
  {
    if ((millis() - delay4) > tempo)
    {
      if (cont < 3)
      {
        digitalWrite(bomba4, LOW);
        delay4 = millis();
        cont++;
      }
    }
  }
  if ((millis() - delay4) == tempo)
  {
    digitalWrite(bomba4, HIGH);
  }

  //---------------------------------------------------------


}
