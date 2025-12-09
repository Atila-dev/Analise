# Projeto Final: Robótica Móvel e Manipulação Autônoma

## Descrição da Prática

Esta aula final integra e testa os conhecimentos adquiridos no curso, focando em dois pilares da robótica: **Navegação Autônoma** (Carrinho Desvia Obstáculos) e **Manipulação** (Braço Robótico Programável).

---

## Práticas Desenvolvidas

### Projeto 1: Carrinho que Desvia de Obstáculos (Carro_desvia_obstaculos.ino)

**Propósito:** Implementar um robô móvel autônomo capaz de navegar, detectar obstáculos e tomar decisões inteligentes para desviar e continuar o movimento.

#### Funcionalidades:

* **Navegação Autônoma:** Movimento contínuo para frente.
* **Detecção de Obstáculos:** Sensor ultrassônico **HC-SR04** identifica barreiras.
* **Controle de Motores:** Utilização do **Módulo Ponte H** (Driver L298N ou similar) para controlar a direção e velocidade de dois motores DC (Tração Diferencial).
* **Algoritmo de Desvio Inteligente:**
    1.  Para ao detectar obstáculo (Distância $\le$ Limite de Segurança).
    2.  Recua brevemente para criar espaço.
    3.  Mede a distância da **Direita** (`option1`).
    4.  Mede a distância da **Esquerda** (`option2`).
    5.  Escolhe o caminho com a maior distância (maior liberdade) e executa a manobra de virada correspondente.
    6.  Retorna ao movimento para frente.

#### Componentes Principais:

| Componente | Função |
| :--- | :--- |
| **2 Motores DC** | Sistema de tração do robô. |
| **Módulo Ponte H (Ex: L298N)** | Permite controlar a direção (inverter polaridade) dos motores DC. 
| **Sensor Ultrassônico HC-SR04** | Fornece dados de distância para a navegação. |
| **Arduino Uno** | Microcontrolador central para lógica de controle. |
| **Baterias** | Alimentação do módulo e dos motores. |
| **Estrutura do Carrinho** | Chassi mecânico, rodas e suportes para montar os componentes. |

---

### Projeto 2: Braço Robótico Programável (Braco_robotico_programa.ino)

**Propósito:** Desenvolver o controle de múltiplos servo motores para criar um braço robótico com movimentos programados de captura e reposicionamento.

#### Funcionalidades:

* **Controle de Múltiplos Servos:** Uso da biblioteca **`Servo.h`** para controlar todos os eixos (juntas) do braço robótico (base, ombro, cotovelo, garra).
* **Programação de Movimentos:** Implementação de **pelo menos dois movimentos independentes** (Ex: `movimento_captura()`, `movimento_reposiciona()`).
* **Interface de Controle:** O acionamento dos movimentos deve ser atrelado a uma condição, como o **pressionamento de botões** ou a **leitura de um sensor** (conforme aprimoramento sugerido).
* **Sequência Coordenada:** Dentro de cada função de movimento, os servos devem ser acionados em uma sequência coordenada para executar tarefas complexas (Ex: Abrir garra $\rightarrow$ Mover para posição $\rightarrow$ Fechar garra $\rightarrow$ Levantar).

#### Componentes Principais:

| Componente | Função |
| :--- | :--- |
| **Servo Motores** | Atuadores em cada junta do braço. |
| **Botões e Resistores** | Interface para acionar os movimentos programados. |
| **Estrutura do Braço** | Chassi mecânico. |
| **Arduino Uno** | Gerenciamento da biblioteca `Servo.h` e lógica. |

---

## 🔗 Link do Tinkercad

**Acesse a simulação desta aula:** [Inserir link do Tinkercad aqui]

---

## Conceitos Integrados e Aprendidos

### Robótica Móvel e Manipulação:

* **Ponte H vs. Servo Motor:** Diferenciação e aplicação do controle de **Motores DC** (Ponte H) para tração e **Servo Motores** (Biblioteca `Servo.h`) para posicionamento angular.
* **Navegação Inteligente:** Implementação de lógica de **tomada de decisão** baseada em dados de sensores (comparação de `option1` e `option2`).
* **Funções de Movimento:** Modularização do código através de funções específicas para cada ação do robô (`frente()`, `virar_direita()`, `movimento_captura()`).
* **Programação Estruturada:** Integração de conceitos de lógica (`if/else`), funções (`calculaDistancia()`), e bibliotecas (`Servo.h`) em um projeto funcional.
* **Integração de Hardware:** Conexão e sincronização de múltiplos componentes (motores, ponte H, sensor, botões) para formar um sistema complexo.
