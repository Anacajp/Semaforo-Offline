// Definindo os pinos dos LEDs e do buzzer
const int ledVermelho = 11;
const int ledAmarelo = 10;
const int ledVerde = 9;
const int buzzer = 7;

// Função para inicializar as configurações
void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

// Função para cada fase do semáforo com a luz correspondente e duração
void faseSemaforo(int led, int duracao, bool buzzerAtivo = false) {
  // Apaga todos os LEDs antes de acender o necessário
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);

  // Acende o LED da fase atual
  digitalWrite(led, HIGH);

  // Ativa ou desativa o buzzer conforme necessário
  if (buzzerAtivo) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }

  delay(duracao);
}

// Função principal para o loop do semáforo
void loop() {
  // 1. Fase Vermelho: 6 segundos
  faseSemaforo(ledVermelho, 6000);

  // 2. Fase Amarelo (transição): 2 segundos
  faseSemaforo(ledAmarelo, 2000);

  // 3. Fase Verde inicial: 2 segundos
  faseSemaforo(ledVerde, 2000);

  // 4. Fase Verde adicional para pedestres: 4 segundos
  faseSemaforo(ledVerde, 4000, true);

  // 5. Fase Amarelo (transição de volta): 2 segundos
  faseSemaforo(ledAmarelo, 2000);
}
