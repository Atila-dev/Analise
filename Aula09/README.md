# Aula 09 - Robótica Móvel e Navegação Autônoma

## Descrição da Prática

Esta aula representa o ápice do curso, integrando todos os conhecimentos adquiridos para criar um sistema robótico móvel capaz de navegação autônoma com desvio inteligente de obstáculos.

### Práticas Desenvolvidas

#### Carro Desvia Obstáculos (Carro_desvia_obstaculos.ino)

**Propósito:** Implementar um robô móvel autônomo que navega evitando obstáculos usando sensor ultrassônico e controle de motores.

**Funcionalidades:**

- **Navegação autônoma:** Movimento automático para frente
- **Detecção de obstáculos:** Sensor ultrassônico identifica barreiras
- **Algoritmo de desvio inteligente:**
  - Para ao detectar obstáculo (< 20cm)
  - Move para trás por segurança
  - Testa virada à direita
  - Se ainda há obstáculo, testa virada à esquerda
  - Escolhe o caminho livre e continua
- **Controle de motores:** Sistema de tração diferencial com 2 motores
- **Movimentos implementados:**
  - Frente, ré, parar
  - Virar direita, virar esquerda
  - Controle independente de cada motor

**Componentes utilizados:**

- 2 motores DC com driver de motor (ponte H)
- 1 sensor ultrassônico HC-SR04
- Sistema de alimentação para motores
- Chassi robótico com rodas

**Algoritmo de navegação:**

1. **Estado normal:** Move para frente continuamente
2. **Detecção:** Se distância < 20cm, para imediatamente
3. **Manobra evasiva:**
   - Recua por 1 segundo para criar espaço
   - Vira à direita por 0.5 segundos
   - Verifica se caminho está livre
   - Se ainda há obstáculo, vira à esquerda por 1 segundo
4. **Retomada:** Volta ao movimento para frente
5. **Ciclo contínuo:** Repete processo indefinidamente

---

## 🔗 Link do Tinkercad

**Acesse a simulação desta aula:** [Inserir link do Tinkercad aqui]

---

## Conceitos Aprendidos

### Robótica Móvel:

- Controle de motores DC através de ponte H
- Sistema de tração diferencial
- Cinemática de robôs com rodas
- Planejamento de trajetória básico

### Navegação Autônoma:

- Algoritmos de desvio de obstáculos
- Sensoriamento para navegação
- Tomada de decisão automatizada
- Comportamentos emergentes em robótica

### Integração de Sistemas:

- Combinação de sensores e atuadores
- Coordenação entre múltiplos subsistemas
- Controle em tempo real
- Arquitetura de controle robótico

### Controle de Motores:

- Ponte H para inversão de rotação
- Controle digital de velocidade e direção
- Sincronização de motores para movimento coordenado
- Implementação de movimentos básicos de robôs móveis

### Aplicações Avançadas:

- Base para robôs aspiradores autônomos
- Sistemas de navegação indoor
- Robôs de exploração e mapeamento
- Plataforma para inteligência artificial em robótica

---

## Evolução do Aprendizado

Esta aula integra conceitos de todas as aulas anteriores:

- **Aula 03:** Controle de LEDs → Controle de motores
- **Aula 04:** Interfaces com botões → Sensores autônomos
- **Aula 05:** Sensores ultrassônicos → Navegação baseada em sensores
- **Aula 06:** Displays → Feedback do sistema
- **Aula 07:** Programação avançada → Algoritmos de controle
- **Aula 08:** Servo motores → Sistemas de movimento
