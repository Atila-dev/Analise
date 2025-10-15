# Aula 07 - Programação Avançada e Otimização

## Descrição da Prática

Esta aula explora técnicas avançadas de programação Arduino, incluindo o uso de `millis()` para temporização não-bloqueante, funções `map()` para mapeamento de valores, e implementação de interrupções para controle responsivo.

### Práticas Desenvolvidas

#### Semáforo com millis() (Semaforo_millis.ino)

**Propósito:** Implementar um sistema de semáforo usando `millis()` em vez de `delay()` para permitir execução não-bloqueante.

**Funcionalidades:**

- Ciclo automático de semáforo com estados sequenciais
- Uso de `millis()` para temporização precisa e não-bloqueante
- Sistema de controle de pedestres com botão
- LEDs RGB para indicação de estado adicional
- Estados do semáforo: Verde → Vermelho → Amarelo (ciclo contínuo)
- Ativação de sinal de pedestres por 2 segundos quando solicitado

#### Controle Luminoso com Map (Map_controle_luminoso.ino)

**Propósito:** Demonstrar o uso da função `map()` para controlar intensidade luminosa baseada em entrada analógica.

**Funcionalidades:**

- Leitura de sensor analógico (potenciômetro ou sensor de luz)
- Mapeamento de valores usando `map()`
- Controle PWM para ajuste de brilho de LEDs
- Interface responsiva e proporcional

#### Controle de LEDs com Interrupção (Controle_leds_interrupt.ino)

**Propósito:** Implementar controle de LEDs usando interrupções para resposta imediata a eventos.

**Funcionalidades:**

- Uso de interrupções externas (`attachInterrupt()`)
- Resposta instantânea a eventos de botões
- Controle não-bloqueante de LEDs
- Tratamento de múltiplas interrupções

---

## 🔗 Link do Tinkercad

**Acesse a simulação desta aula:** [Inserir link do Tinkercad aqui]

---

## Conceitos Aprendidos

### Temporização Avançada:

- Função `millis()` para temporização não-bloqueante
- Diferença entre `delay()` e `millis()`
- Implementação de múltiplos timers simultâneos
- Evitar bloqueio do programa principal

### Mapeamento de Valores:

- Função `map()` para conversão de escalas
- Mapeamento de entradas analógicas (0-1023) para saídas PWM (0-255)
- Calibração automática de sensores
- Controle proporcional de dispositivos

### Interrupções:

- Conceito de interrupções externas
- Função `attachInterrupt()` e `detachInterrupt()`
- ISR (Interrupt Service Routine) - rotinas de interrupção
- Modos de ativação: `RISING`, `FALLING`, `CHANGE`, `LOW`
- Boas práticas em rotinas de interrupção (código rápido e sem delay)

### Programação Otimizada:

- Código não-bloqueante para múltiplas tarefas simultâneas
- Máquinas de estado eficientes
- Responsividade aprimorada em interfaces
- Gerenciamento eficiente de recursos do microcontrolador
