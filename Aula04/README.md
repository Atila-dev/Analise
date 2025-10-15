# Aula 04 - Controle Avançado com Joystick e Interfaces

## Descrição da Prática

Esta aula explora o uso de interfaces de controle mais complexas, utilizando botões para simular controles de joystick e implementando lógicas de controle de estado para sistemas de sinalização.

### Práticas Desenvolvidas

#### Controle de LED com Joystick (Joystick_controle_led.ino)

**Propósito:** Simular um sistema de controle de setas direcionais usando botões que representam um joystick.

**Funcionalidades:**

- Controle de LEDs esquerdo e direito através de botões
- Sistema de estados para ativação/desativação das setas
- Buzzer acionado por botão dedicado
- Função de pisca-pisca para os LEDs de direção
- Lógica de exclusão mútua (apenas uma seta ativa por vez)

**Componentes utilizados:**

- 2 LEDs (esquerdo e direito)
- 3 botões (esquerda, direita, buzzer)
- 1 buzzer para sinal sonoro

### Exercícios Desenvolvidos

A pasta de exercícios contém três atividades práticas:

#### Exercício 01 (Exercicio01.ino)

**Propósito:** Exercício prático para consolidar conceitos básicos de controle digital.

#### Exercício 02 (Exercicio02.ino)

**Propósito:** Exercício intermediário com implementação de lógicas mais complexas.

#### Exercício 03 (Exercicio03.ino)

**Propósito:** Exercício avançado integrando múltiplos componentes e conceitos.

---

## 🔗 Link do Tinkercad

**Acesse a simulação desta aula:** [Inserir link do Tinkercad aqui]

---

## Conceitos Aprendidos

- Controle de estado com variáveis booleanas
- Implementação de lógica de exclusão mútua
- Uso de funções personalizadas para organização do código
- Controle temporizado com delay()
- Interface com múltiplos botões
- Implementação de sistemas de sinalização avançados
- Debouncing básico de botões
