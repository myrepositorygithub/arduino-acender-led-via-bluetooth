Arduino: Acender LED via bluetooth
=================================

Exemplo de código que recebe um caracter via bluetooth e acende um led.

Nesse exemplo serão utilizados os seguintes componentes: 

- Diodo Emissor de Luz (LED) : Perna maior – “Positivo” (+), Perna menor “Negativo” (-)
- Resistor  de 330R (Ohms):  Usado para diminuir a tensão, para não queimar o LED
- BreadBoard / Protoboard : Placa usada para estender conexões
- Placa Bluetooth (JY-MCU): Placa com 4 conectores (VCC, GND, RXD e TXD)
- Fios diversos, para juntar os componentes
- E o principal: Arduino UNO

Ligando os componentes:

- Pegar o Breadboard/Protoboard, escolher uma trilha (na vertical).
- Pegar o resistor, e conectar suas pontas em 2 trilhas diferentes.
- Ligar os LEDs pela perna maior – Positivo (+) na trilha da ponta esquerda do resistor
- A ponta direita do Resistor, ligue-a com um fio na Porta 13 do Arduino.
- Nos LEDS a perna menor – Negativa (-) ficaram numa terceira trilha, ligue um fio na porta GND (Ground /Terra) do Arduino.
- Conecte a Placa Bluetooth no Protoboard de modo que fique usando 4 trilhas.
- Com o uso de fios, conecte um em cada trilhe e ligue conforme a associação abaixo:
  - VCC do Bluetooth-> na porta 3,3v do Arduino
  - TXD do Bluetooth -> na porta RX – 0 do Arduino
  - RXD do Bluetooth -> na porta TX – 1 do Arduino
  - GND do Bluetooth ->  na mesma trilha do LED que foi conectada no GND do Arduino
- Criar um programa pela IDE do Arduino que leia o Bluetooth, e envie para a porta 13 do Arduino: HIGH para ligar os LEDS ou LOW para apagá-los.
