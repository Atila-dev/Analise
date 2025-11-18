# Aula 07 - Programação Avançada e Otimização

## Descrição da Prática

Esta aula explora técnicas essenciais de programação Arduino para criar código mais eficiente e responsivo. Focamos no uso da função **`millis()`** para temporização **não-bloqueante**, na função **`map()`** para conversão de escalas, e na implementação de **interrupções** (`interrupt`) para garantir resposta imediata a eventos externos.

---

## Práticas Desenvolvidas

### 1. Semáforo com millis() (Semaforo_millis.ino)

**Desafio:** Reconstruir um semáforo utilizando `millis()` para controle de tempo, garantindo que o programa principal continue executando outras tarefas.

**Funcionalidades:**

* **Temporização Não-Bloqueante:** O ciclo do semáforo é controlado por `millis()`, eliminando o uso de `delay()`.
* **Ciclo do Semáforo:** Estados sequenciais: **Verde** $\rightarrow$ **Amarelo** $\rightarrow$ **Vermelho** (usando 3 LEDs comuns).
* **Controle de Pedestres:** Um botão aciona a mudança para o estado de pedestre (sinal **Vermelho**) por um tempo determinado.
* **Indicação Adicional:** Uso de um **LED RGB** para fornecer *feedback* visual adicional (embora o Desafio 01 use 3 LEDs comuns para o semáforo e um LED RGB para estado adicional).

| Material Principal | Quantidade |
| :--- | :--- |
| **LEDs Comuns** | 3 |
| **LED RGB** | 1 |
| **Botão** | 1 |
| **Resistores** | 5 |

---

### 2. Controle de LEDs com Interrupt (Controle_leds_interrupt.ino)

**Desafio:** Reutilizar a montagem anterior (semáforo) para controlar o estado dos LEDs utilizando uma interrupção externa.

**Funcionalidades:**

* **Resposta Imediata:** Uso de **interrupções externas** (`attachInterrupt()`) para uma reação instantânea ao pressionar o botão.
* **Função de Serviço de Interrupção (ISR):** Uma função dedicada é chamada automaticamente (`ISR`) quando o evento de interrupção ocorre.
* **Modos de Acionamento:** Demonstração de um dos modos de acionamento (`LOW`, `CHANGE`, `RISING`, ou `FALLING`) para otimizar a detecção do botão.
* **Controle Não-Bloqueante:** O *loop* principal não precisa ficar verificando o estado do botão.

| Material Principal | Quantidade |
| :--- | :--- |
| **LEDs Comuns** | 3 |
| **Botão** | 1 |
| **Resistores** | 4 |

---

### 3. Controle Luminoso com Map (Map_controle_luminoso.ino)

**Desafio:** Utilizar um potenciômetro para variar a intensidade luminosa de um LED, fazendo a conversão de escala com a função `map()`.

**Funcionalidades:**

* **Leitura Analógica:** Leitura de um potenciômetro (entrada de 0 a 1023).
* **Mapeamento de Valores:** A função **`map()`** converte a faixa de 0-1023 para a faixa de saída **PWM** 0-255.
* **Controle de Brilho:** Uso de `analogWrite()` para ajustar a intensidade dos LEDs de forma proporcional ao potenciômetro.
* **Restrição de Valores:** Uso opcional da função `constrain()` para garantir que o valor mapeado permaneça dentro da faixa PWM.

| Material Principal | Quantidade |
| :--- | :--- |
| **LEDs Comuns** | 3 |
| **Potenciômetro** | 1 |
| **Resistores** | 3 |

---

## 🔗 Link do Tinkercad

**Acesse a simulação desta aula:** [https://www.tinkercad.com/things/3ShtZMeKzJ6-pratica-aula-botao-interrupt/editel?returnTo=%2Fdashboard%2Fcollections%2F8z5wGCutp8W%2Fcircuits]

---

## Conceitos Aprendidos

### Temporização Avançada (`millis()`):

* **Função `millis()`:** Retorna o tempo decorrido em milissegundos desde o início do programa.
* **Temporização Não-Bloqueante:** Permite a execução de múltiplas tarefas simultaneamente, ao contrário do **`delay()`**.
* **Máquinas de Estado:** Implementação de lógica de controle que muda de estado baseada em tempo (`millis()`).

### Interrupções (`interrupt`):

* **Conceito de Interrupção:** Um mecanismo que permite ao microcontrolador pausar o código principal para responder a um evento externo de forma **imediata**.
* **`attachInterrupt()`:** Função para associar um pino digital e um modo de acionamento a uma **Rotina de Serviço de Interrupção (ISR)**.
* **ISR (Interrupt Service Routine):** A função que é executada quando a interrupção é acionada. **Regra:** Deve ser o mais rápida possível (sem `delay()`).
* **Modos de Acionamento:** `RISING`, `FALLING`, `CHANGE`, `LOW`.

### Mapeamento de Valores (`map`):

* **Função `map()`:** Converte um valor de um intervalo (`deMenor`, `deMaior`) para outro (`paraMenor`, `paraMaior`).
* **Aplicações:** Mapeamento de entradas analógicas (0-1023) para saídas digitais PWM (0-255) ou qualquer outra conversão de escala necessária.
* **Função `constrain()`:** Utilizada para limitar um valor dentro de uma faixa específica, garantindo que ele não exceda os limites desejados.

### Programação Otimizada:

* **Responsividade Aprimorada:** Código que reage rapidamente a eventos e temporização.
* **Gerenciamento de Recursos:** Uso eficiente do tempo de processamento do microcontrolador.
