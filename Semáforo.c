//Definição dos pinos para os LEDs do primeiro conjunto de semáforo (vertical)
const int vermelhoVertical = 2;
const int amareloVertical = 3; 
const int verdeVertical = 4;

//Definição dos pinos para os LEDs do segundo conjunto de semáforo (horizontal)
const int vermelhoHorizontal = 5;
const int amareloHorizontal = 6;
const int verdeHorizontal = 7;

//Definição dos tempos de cadafase do semáforo (em milessegundos)
const int tempoVermelho = 5000; // 5 segundos
const int tempoAmarelo = 2000; // 2 segundos
const int tempoVerde = 5000; // 5 segundos

void setup() {
  //Configuração dos pinos dos LEDs como saída
  pinMode(vermelhoVertical, OUTPUT);
  pinMode(amareloVertical, OUTPUT);
  pinMode(verdeVertical, OUTPUT);
  pinMode(vermelhoHorizontal, OUTPUT);
  pinMode(amareloHorizontal, OUTPUT);
  pinMode(verdeHorizontal, OUTPUT);
}

void loop() {
  //Sinal de trânsito vertical.
  digitalWrite(vermelhoVertical, HIGH);
  digitalWrite(amareloVertical, LOW);
  digitalWrite(verdeVertical, LOW);

  //Sinal de trânsito horizontal
  digitalWrite(vermelhoHorizontal, LOW);
  digitalWrite(amareloHorizontal, LOW);
  digitalWrite(verdeHorizontal, LOW);

  delay(tempoVermelho);

  //Sinal de trânsito vertical
  digitalWrite(vermelhoVertical, LOW);
  digitalWrite(amareloVertical, HIGH);
  digitalWrite(verdeVertical, LOW);

  //Sinal de trânsito horizontal
  digitalWrite(vermelhoHorizontal, LOW);
  digitalWrite(amareloHorizontal, HIGH);
  digitalWrite(verdeHorizontal, LOW);

  delay(tempoAmarelo);

  //Sinal de trânsito vertical
  digitalWrite(vermelhoVertical, LOW);
  digitalWrite(amareloVertical, LOW);
  digitalWrite(verdeHorizontal, HIGH);

  //Sinal de trânsito horizontal
  digitalWrite(vermelhoHorizontal, HIGH);
  digitalWrite(amareloHorizontal, LOW);
  digitalWrite(verdeHorizontal, LOW);

  delay(tempoVerde);
}