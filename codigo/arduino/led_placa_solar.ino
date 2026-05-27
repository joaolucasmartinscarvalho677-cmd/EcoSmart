const int painelSolar = A0;
const int led1 = 13;
const int led2 = 8;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int leitura = analogRead(painelSolar);

  Serial.print("Solar: ");
  Serial.println(leitura);

  if (leitura > 200)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  }
  else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }

  delay(100);
}