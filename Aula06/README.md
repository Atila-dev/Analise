# Aula 06 - Displays e Interfaces Visuais

## Descrição da Prática

Esta aula aborda o controle de diferentes tipos de displays, explorando desde displays de 7 segmentos até displays LCD, integrando sensores para criar interfaces visuais informativas e interativas.

### Práticas Desenvolvidas

#### Display de 7 Segmentos (Display_7_segmentos.ino)

**Propósito:** Implementar um contador regressivo de 9 a 0 usando display de 7 segmentos.

**Funcionalidades:**

- Exibição de dígitos de 0 a 9 em display de 7 segmentos
- Contador regressivo automático (9→8→7→6→5→4→3→2→1→0)
- Controle individual de cada segmento (a, b, c, d, e, f, g)
- Controle do ponto decimal com indicação especial nos números 8 e 1
- Temporização de 1 segundo entre cada dígito
- Funções específicas para cada número (escrever0 a escrever9)

**Componentes utilizados:**

- 1 display de 7 segmentos (ânodo ou cátodo comum)
- 8 pinos de controle (7 segmentos + ponto decimal)

#### Display LCD com Sensor (Display_LCD.ino)

**Propósito:** Criar uma interface visual usando display LCD 16x2 integrado com sensor ultrassônico para exibir informações de distância.

**Funcionalidades:**

- Inicialização e teste do display LCD
- Exibição de mensagens personalizadas ("Aula de Arduino")
- Medição e exibição de distância em tempo real
- Interface de preparação com mensagens informativas
- Integração com sensor ultrassônico HC-SR04
- Comunicação serial para monitoramento paralelo

**Componentes utilizados:**

- 1 display LCD 16x2 (biblioteca LiquidCrystal)
- 1 sensor ultrassônico HC-SR04
- Pinos de controle LCD (RS, Enable, D4-D7)
- Comunicação serial para debugging

---

## 🔗 Link do Tinkercad

**Acesse a simulação desta aula:** [Inserir link do Tinkercad aqui]

---

## Conceitos Aprendidos

### Display de 7 Segmentos:

- Mapeamento de segmentos para formar dígitos
- Controle individual de cada segmento
- Criação de funções específicas para cada caractere
- Uso estratégico do ponto decimal para indicações especiais

### Display LCD:

- Biblioteca LiquidCrystal para controle de LCD
- Inicialização e configuração de display 16x2
- Métodos `setCursor()`, `print()`, `clear()` e `begin()`
- Integração de displays com sensores
- Criação de interfaces informativas
- Formatação de dados para exibição

### Geral:

- Interfaces visuais para projetos Arduino
- Temporização e sincronização de displays
- Organização de código com funções específicas
- Debugging através de comunicação serial paralela
