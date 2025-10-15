# Aula 03 - Controle de LEDs e Interfaces Básicas

## Descrição da Prática

Esta aula aborda os fundamentos do controle de LEDs utilizando Arduino, explorando conceitos de entrada e saída digital, além de implementar sistemas de sinalização básicos.

### Práticas Desenvolvidas

#### Semáforo (Semaforo.ino)

**Propósito:** Simular o funcionamento de um semáforo de trânsito com controle manual.

**Funcionalidades:**

- Ciclo automático de semáforo (vermelho → amarelo → verde)
- LED RGB indicativo de estado
- Botão para acionamento de sinal de pedestres
- Cada estado permanece por 1 segundo
- Quando pressionado o botão, aciona sinal verde para pedestres por 2 segundos

**Componentes utilizados:**

- 3 LEDs (vermelho, amarelo, verde) para semáforo
- 1 LED RGB para indicação de estado
- 1 botão para controle de pedestres

### Exercícios Desenvolvidos

#### Setas de Direção de Veículo (Setas_de_direção_de_um_veículo.ino)

**Propósito:** Simular o sistema de setas de direção de um veículo.

**Funcionalidades:**

- Botões para ativar seta esquerda e direita
- LEDs que piscam quando as setas são ativadas
- Buzzer para sinal sonoro
- Efeito de pisca-pisca nos LEDs de direção

#### Setas de Direção - Versão Desafio (Setas_de_direção_de_um_veículo_desafio.ino)

**Propósito:** Versão aprimorada do sistema de setas com funcionalidades adicionais.

---

## 🔗 Link do Tinkercad

**Acesse a simulação desta aula:** [Inserir link do Tinkercad aqui]

---

## Conceitos Aprendidos

- Controle de saídas digitais (digitalWrite)
- Leitura de entradas digitais (digitalRead)
- Uso de delays para temporização
- Implementação de máquinas de estado simples
- Controle de LEDs RGB
- Interface com botões e tratamento de sinais digitais
