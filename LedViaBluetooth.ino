int led = 13;                   //variável com o numero da porta 13
char val = ' ';                 //variável usada para armazenar dados vindos do Bluetooth

void setup() {
  pinMode(led, OUTPUT);         //inicia a porta “led” como saída
  Serial.begin(9600);           //inicia a porta serial 9600 do Bluetooth
}

void loop() {
  if(Serial.available()) {      //verifica disponibilidade da porta 9600
    val = Serial.read();        //lê o valor da porta 9600 e armazena em 'val'
    Serial.println(val);        //mostra o valor de Val na tela de Log 
  } else {
    Serial.println('Não disponivel');   //mostra valor na tela de Log
  } 

  if(val == 'H') {              //Se val receber 'H'
    digitalWrite(led, HIGH);    //liga o LED da porta 13 (variável “led”)
    delay(1000);                //aguarda 1 segundo = 1000 mili-segundos
    digitalWrite(led, LOW);     //apaga o LED da porta 13 (variável “led”)
    delay(1000);                //aguarda 1 segundo = 1000 mili-segundos
  } else {
    digitalWrite(led, LOW);     //apaga o LED da porta 13 (variável “led”)
  }
}
