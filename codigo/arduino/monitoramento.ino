int sensorLuz = A0;
int ledVerde = 7;
int ledVermelho = 6;

float valorSensor = 0;
float porcentagemEnergia = 0;

void setup() {

  Serial.begin(9600);

  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

}

void loop() {

  valorSensor = analogRead(sensorLuz);

  porcentagemEnergia =
  map(valorSensor,0,1023,0,100);

  Serial.print("Energia Solar: ");
  Serial.print(porcentagemEnergia);
  Serial.println("%");

  if(porcentagemEnergia >= 50){

    digitalWrite(ledVerde,HIGH);
    digitalWrite(ledVermelho,LOW);

  }else{

    digitalWrite(ledVerde,LOW);
    digitalWrite(ledVermelho,HIGH);

  }

  delay(2000);
}
