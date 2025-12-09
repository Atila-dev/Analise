# Aula 08 - Servo Motores e Sistemas de Radar

##  Descrição da Prática

Esta aula tem como foco o controle de motores, especificamente o **Servo Motor**, e sua integração com um **Sensor Ultrassônico (HC-SR04)** para criar um sistema de varredura e detecção. O projeto simula um **radar** básico, fornecendo alertas visuais e sonoros ao identificar obstáculos.

---

## Práticas Desenvolvidas

### Desafio Único: Radar com Servo e HC-SR04 (Radar_servo_hcsr4.ino)

**Propósito:** Implementar um sistema de radar que varre uma área de 180° e localiza obstáculos, acionando um alarme sonoro e visual quando a ameaça é detectada.

**Funcionalidades:**

* **Varredura Automatizada:** O servo motor realiza um movimento de varredura (ex: 5° a 175°) de forma contínua e bidirecional.
* **Detecção de Obstáculos:** O sensor ultrassônico mede a distância em cada ângulo. A detecção é acionada se a distância for **menor que um limite definido** (ex: 30 cm).
* **Alerta Sonoro:** O **Buzzer** emite um tom (`tone()`) de alarme audível (ex: 440Hz) ao detectar um objeto.
* **Alertas Visuais:**
    * **LED Verde:** Indica **Área Livre** ou estado normal de varredura.
    * **LED Vermelho:** Indica **Obstáculo Detectado** e pode ser programado para piscar.
* **Resposta em Tempo Real:** O sistema deve **parar a varredura** e fixar a posição no ângulo do obstáculo enquanto ele estiver presente, emitindo os alertas.

#### Componentes Utilizados:

| Componente | Quantidade | Função |
| :--- | :--- | :--- |
| **Servo Motor (180°)** | 1 | Realiza a varredura angular. |
| **Sensor Ultrassônico HC-SR04** | 1 | Mede a distância do obstáculo. |
| **LEDs Comuns (Verde e Vermelho)** | 2 | Alerta visual de status (Livre/Ameaça). |
| **Buzzer** | 1 | Alerta sonoro de ameaça. |
| **Resistores** | 2 | Proteção para os LEDs. |
| **Arduino Uno** | 1 | Microcontrolador central. |

#### Algoritmo de Funcionamento:

1.  O servo motor inicia a varredura do ângulo inicial ao final (ex: $5^\circ$ a $175^\circ$).
2.  Em cada ângulo, o sensor ultrassônico realiza a medição de distância.
3.  **SE** a distância for **menor que 30 cm** (ou limite definido):
    * A varredura é interrompida (o servo se mantém na posição).
    * O LED Vermelho é ativado (piscante).
    * O Buzzer é ativado.
    * O sistema continua verificando até que o obstáculo se afaste.
4.  **SE** a área estiver livre:
    * A varredura continua.
    * O LED Verde é ativado, e o LED Vermelho e o Buzzer são desativados.
5.  Ao atingir o ângulo máximo, a varredura inverte o movimento (ex: $175^\circ$ a $5^\circ$).

---

## Conceitos Aprendidos

### Controle de Servo Motores:

* **Biblioteca `Servo.h`:** Biblioteca padrão do Arduino para controle facilitado do servo motor.
* **Métodos Essenciais:**
    * `attach(pin)`: Associa o objeto servo a um pino digital específico.
    * `write(angle)`: Posiciona o servo em um ângulo entre $0^\circ$ e $180^\circ$.
* **Controle de Velocidade:** Ajuste da velocidade de varredura através de loops e pequenos `delay()` entre as chamadas de `write()`.
* **Fiação:** Entender os pinos de Sinal (amarelo/laranja), Potência (vermelho) e GND (marrom/preto).

### Integração Servo + Sensor Ultrassônico:

* **Varredura Sistemática:** Sincronização da leitura do sensor a cada passo angular do servo para cobrir uma área definida.
* **Medição de Distância:** Uso do HC-SR04 para calcular a distância em centímetros através do tempo de voo do pulso sonoro.
* **Resposta Adaptativa:** Criação de uma lógica de controle (`if/else`) que altera o comportamento do sistema (varrer vs. parar/alertar) com base nos dados do sensor.

### Sistemas de Alerta (HMI - Interface Humano-Máquina):

* **Sinalização Visual (LEDs):** Uso de LEDs para indicar o estado do sistema (normal/alerta) de forma intuitiva.
* **Sinalização Sonora (Buzzer):** Uso da função `tone()` para gerar frequências sonoras específicas (alarmes) e `noTone()` para silenciar.
* **Máquina de Estados:** Implementação de uma lógica simples de estados (VARRENDO $\leftrightarrow$ ALERTA) para gerenciar o comportamento dos atuadores (LEDs, Buzzer, Servo).
