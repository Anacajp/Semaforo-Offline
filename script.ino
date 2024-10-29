// C++ code for a traffic light simulation with a buzzer
//
int redPin = 8;
int yellowPin = 10;
int greenPin = 12;
int buzzerPin = 7; // Buzzer conectado ao pino 7

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT); // Configura o pino do buzzer como saída
}

void loop() {
  // Luz vermelha e buzzer ligados
  digitalWrite(redPin, HIGH);
  digitalWrite(buzzerPin, HIGH); // Liga o buzzer junto com a luz vermelha
  delay(5000); // Vermelho e buzzer ligados por 5 segundos
  digitalWrite(redPin, LOW);
  digitalWrite(buzzerPin, LOW); // Desliga o buzzer

  // Luz verde acesa
  digitalWrite(greenPin, HIGH);
  delay(5000); // Verde por 5 segundos
  digitalWrite(greenPin, LOW);

  // Luz amarela acesa
  digitalWrite(yellowPin, HIGH);
  delay(2000); // Amarelo por 2 segundos
  digitalWrite(yellowPin, LOW);
}
