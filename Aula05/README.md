# Aula 05 - Sensores Ultrassônicos e Sistemas de Alarme

## Descrição da Prática

Esta aula introduz o uso de sensores ultrassônicos HC-SR04 para medição de distância e implementa um sistema de alarme inteligente com diferentes níveis de alerta baseados na proximidade de objetos.

### Práticas Desenvolvidas

#### Sistema de Alarme com Sensor (Alarme_sensor.ino)

**Propósito:** Criar um sistema de monitoramento de proximidade com alertas visuais e sonoros baseados na distância detectada.

**Funcionalidades:**

- Medição contínua de distância usando sensor ultrassônico HC-SR04
- Sistema de alertas em três níveis:
  - **Vermelho (< 30cm):** Perigo iminente - LED vermelho + buzzer ativo
  - **Amarelo (30-60cm):** Atenção - LED amarelo aceso
  - **Verde (> 60cm):** Área segura - LED verde aceso
- Cálculo preciso de distância em centímetros
- Interface serial para monitoramento dos valores

**Componentes utilizados:**

- 1 sensor ultrassônico HC-SR04 (trigger e echo)
- 3 LEDs (vermelho, amarelo, verde)
- 1 buzzer para alarme sonoro
- Comunicação serial para debug

**Algoritmo de funcionamento:**

1. Envio de pulso ultrassônico pelo trigger
2. Medição do tempo de retorno no echo
3. Cálculo da distância: `distância = (tempo × 0.0343) / 2`
4. Ativação do alerta correspondente à faixa de distância

---

## 🔗 Link do Tinkercad

**Acesse a simulação desta aula:** [Inserir link do Tinkercad aqui]

---

## Conceitos Aprendidos

- Funcionamento de sensores ultrassônicos HC-SR04
- Cálculo de distância através de tempo de propagação sonora
- Uso de `pulseIn()` para medição de tempo
- Implementação de sistemas de alarme multinível
- Controle de buzzer com `tone()` e `noTone()`
- Comunicação serial para debugging (`Serial.begin()`, `Serial.print()`)
- Lógica condicional com múltiplas faixas de valores
- Temporização com `delayMicroseconds()` para sensores ultrassônicos
