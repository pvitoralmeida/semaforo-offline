# Projeto: Semáforo com LEDs na Protoboard

## 📋 Resumo

Este projeto consiste na montagem física e programação de um **semáforo** utilizando LEDs, resistores e uma protoboard. O sistema alterna entre as fases vermelho, verde e amarelo, respeitando os tempos especificados.

## 🔨 Tutorial

![Foto do Circuito](circuit.png)

Monte o circuito conectando três LEDs (vermelho, amarelo e verde) a portas digitais do Arduino, cada um com um resistor em série ligados ao GND da placa microcontroladora. Use jumpers para ligar os LEDs e resistores aos pinos e ao GND. Em caso de utilizar um suporte para os LEDs, utilize jumpers macho-fêmea para ligá-los à protoboard e ao Arduino, em caso contrário, insira os LEDs diretamente na protoboard e utilize jumpers macho-macho para fazer as ligações.

---

## 🛠️ Materiais Utilizados

| Componente         | Especificação    | Quantidade | Observações            |
|--------------------|------------------|:----------:|------------------------|
| LED vermelho       | 5mm              |     1      |                        |
| LED amarelo        | 5mm              |     1      |                        |
| LED verde          | 5mm              |     1      |                        |
| Resistor           | 220Ω             |     3      | Um para cada LED       |
| Protoboard         | -                |     1      |                        |
| Jumpers/Fios       | Macho-Fêmea      |   6 | Para conexões          |
| Arduino UNO | -          |     1      |   |
| Cabo USB           | -                |     1      | Para alimentação       |

---

## 🎥 Vídeo Demonstrativo

- **Link do vídeo**: [semaforo_offline.mp4](https://drive.google.com/file/d/1occbEIjHHaIA-36PFMIpEkpprGBc5c51/view?usp=sharing)

---

## 📝 Resultados das Avaliações de Pares

#### Avaliador: Luiz Hinuy

|Critério|	Contempla (Pontos)|	Contempla Parcialmente (Pontos)	|Não Contempla (Pontos)	|Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores	|Até 3	|Até 1,5	|0 | Nota dada: 3; Sugestão de melhoria: encontrar mais fios da mesma cor para padronizar toda a montagem. |	
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo	|Até 3	|Até 1,5	|0 | Nota dada: 3; Temporização está adequada|	
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |	Até 3|	Até 1,5 |	0 | Nota dada: 3|	
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |	Até 1 |	Até 0,5 |	0 | Nota dada: 0,5 |	
| | | | |Pontuação Total: 9,5|

#### Avaliador: Nicolli Venino

|Critério|	Contempla (Pontos)|	Contempla Parcialmente (Pontos)	|Não Contempla (Pontos)	|Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores	|Até 3	|Até 1,5	|0 | Nota dada: 2,5; Falta de coerência em algumas cores de fio|	
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo	|Até 3	|Até 1,5	|0 | Nota dada: 3; O tempo está de acordo com o que é pedido na aitvidade|	
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |	Até 3|	Até 1,5 |	0 | Nota dada: 3 |	
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |	Até 1 |	Até 0,5 |	0 | Nota dada: 0,5 |	
| | | | |Pontuação Total: 9|

---
