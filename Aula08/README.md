# Aula 08 - Servo Motores e Sistemas de Radar

## Descrição da Prática

Esta aula introduz o controle de servo motores e sua integração com sensores ultrassônicos para criar sistemas de varredura e detecção, simulando um radar básico com alertas visuais e sonoros.

### Práticas Desenvolvidas

#### Radar com Servo e HC-SR04 (Radar_servo_hcsr4.ino)

**Propósito:** Implementar um sistema de radar que varre 180° usando servo motor e detecta obstáculos com sensor ultrassônico.

**Funcionalidades:**

- **Varredura automatizada:** Servo motor gira de 5° a 175° e retorna
- **Detecção de obstáculos:** Sensor ultrassônico identifica objetos a menos de 30cm
- **Alertas visuais:**
  - LED verde: Área livre
  - LED vermelho piscante: Obstáculo detectado
- **Alerta sonoro:** Buzzer emite tom de 440Hz quando detecta obstáculo
- **Movimento contínuo:** Varredura bidirecional ininterrupta
- **Resposta em tempo real:** Parada e alerta imediato ao detectar obstáculo

**Componentes utilizados:**

- 1 servo motor (180°)
- 1 sensor ultrassônico HC-SR04
- 2 LEDs (verde e vermelho)
- 1 buzzer para alarme
- Comunicação serial para monitoramento

**Algoritmo de funcionamento:**

1. Servo inicia varredura de 5° a 175°
2. A cada posição, sensor ultrassônico mede distância
3. Se distância < 30cm:
   - Para a varredura na posição atual
   - Ativa LED vermelho piscante
   - Emite som de alerta
   - Continua verificando até obstáculo sair
4. Se área livre: LED verde aceso, sem som
5. Retorna varredura de 175° a 5° (movimento reverso)

---

## 🔗 Link do Tinkercad

**Acesse a simulação desta aula:** [Inserir link do Tinkercad aqui]

---

## Conceitos Aprendidos

### Controle de Servo Motores:

- Biblioteca `Servo.h` para controle de servo motores
- Método `attach()` para definir pino de controle
- Método `write()` para posicionamento angular
- Controle de velocidade através de delays entre posições
- Movimento bidirecional com loops `for`

### Integração Servo + Sensor:

- Sincronização entre movimento do servo e leituras do sensor
- Varredura sistemática de área
- Detecção de obstáculos em movimento
- Resposta adaptativa baseada em detecções

### Sistemas de Alerta:

- Alertas visuais com LEDs indicativos
- Alertas sonoros com `tone()` e frequências específicas
- Estados de sistema (normal vs. alerta)
- Feedback imediato ao usuário

### Aplicações Práticas:

- Sistemas de segurança básicos
- Monitoramento de área
- Detecção automática de presença
- Bases para robótica móvel e sistemas autônomos
