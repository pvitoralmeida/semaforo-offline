// Delcarar os pinos utilizados para cada LED
int ledVerde = A0;
int ledAmarelo = A1;
int ledVermelho = A2;

// Incializar as variáveis de controle
unsigned long tempoAnterior = 0;
int estadoSemaforo = 0;

void setup() {
  // Definir os LEDs como outputs
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  // Atualizar o tempoAtual para o tempo contado pela função millis
  unsigned long tempoAtual = millis();

  // Acender o LED amarelo
  if(estadoSemaforo == 0 && tempoAtual - tempoAnterior >= 4000) { 
    // Ligar o amarelo e desligar o verde
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    // Atualizar o estado do semáforo para abilitar a próxima condicional
    estadoSemaforo = 1;
    // Atualiza o tempo de comparação com o tempo atual
    tempoAnterior = tempoAtual;
  }

  // Acender o LED vermelho
  else if(estadoSemaforo == 1 && tempoAtual - tempoAnterior >= 2000) { 
    // Ligar o vernelhor e desligar o amarelo
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    // Atualizar o estado do semáforo para abilitar a próxima condicional
    estadoSemaforo = 2;
    // Atualiza o tempo de comparação com o tempo atual
    tempoAnterior = tempoAtual;
  }

  // Acender o LED verde
  else if(estadoSemaforo == 2 && tempoAtual - tempoAnterior >= 6000) {
    // Ligar o verde e desligar o vermelho
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
   // Atualizar o estado do semáforo para abilitar a próxima condicional
    estadoSemaforo = 0;
    // Atualiza o tempo de comparação com o tempo atual
    tempoAnterior = tempoAtual;
  }
}
