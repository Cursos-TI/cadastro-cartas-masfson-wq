# 🃏 Super Trunfo - Cadastro de Cartas (Nível Novato)

Este projeto foi desenvolvido como o primeiro passo no aprendizado da linguagem C. Ele simula o sistema de cadastro de cartas de um jogo de Super Trunfo, focando na manipulação de dados de cidades e estados.

## 📋 Sobre o Projeto
O objetivo principal foi criar um programa que permita ao usuário inserir informações de duas cartas diferentes e, em seguida, exibir esses dados de forma organizada, incluindo cálculos básicos de indicadores.

## 🚀 Funcionalidades Desenvolvidas
* **Entrada de Dados:** Uso de `scanf` e `fgets` para capturar nomes de cidades, populações e valores financeiros.
* **Tipos de Dados:** Implementação de `unsigned long int` para suportar grandes populações e `float` para precisão em áreas e PIB.
* **Cálculos Automáticos:**
  * **Densidade Populacional:** Cálculo de habitantes por quilômetro quadrado.
  * **PIB per Capita:** Divisão do PIB total pela população da cidade.
* **Tratamento de Strings:** Uso da função `strcspn` para remover quebras de linha indesejadas na leitura dos nomes.

## 🛠️ Tecnologias Utilizadas
* **Linguagem C** (Compilador GCC)
* **Visual Studio Code**
* **Git e GitHub** para controle de versão

## 🧠 O que eu aprendi neste nível
1. Como declarar e inicializar variáveis de diferentes tipos.
2. A importância de limpar o buffer do teclado ao ler diferentes tipos de dados.
3. Como formatar a saída de números decimais para facilitar a leitura (ex: `%.2f`).
4. O fluxo básico de versionamento de código (Add, Commit e Push).

#           Nível aventureiro
# 🃏 Super Trunfo - Cadastro de Países

Este projeto foi desenvolvido como parte do desafio de lógica de programação em C. O objetivo é cadastrar cartas de cidades/estados e calcular indicadores importantes para o jogo.

## 🚀 O que o programa faz?
* **Cadastro de Cartas:** Registra Estado, Código, Nome da Cidade, População, Área e PIB.
* **Cálculos Automáticos:** * **Densidade Populacional:** (População / Área)
  * **PIB per Capita:** (PIB total convertido / População)
* **Exibição de Dados:** Mostra os resultados formatados com duas casas decimais.

## 🛠️ Tecnologias e Conceitos
* **Linguagem C:** Uso de `unsigned long int` para grandes números de população.
* **Manipulação de Strings:** Uso de `fgets` e `strcspn` para leitura limpa de nomes.
* **Git/GitHub:** Controle de versão e organização de portfólio.

# 🃏 Super Trunfo - Cadastro de Países

Este projeto foi desenvolvido como parte do desafio de lógica de programação em C. O objetivo é cadastrar cartas de cidades/estados e calcular indicadores importantes para o jogo.

## 🚀 O que o programa faz?
* **Cadastro de Cartas:** Registra Estado, Código, Nome da Cidade, População, Área e PIB.
* **Cálculos Automáticos:** * **Densidade Populacional:** (População / Área)
  * **PIB per Capita:** (PIB total convertido / População)
* **Exibição de Dados:** Mostra os resultados formatados com duas casas decimais.

## 🛠️ Tecnologias e Conceitos
* **Linguagem C:** Uso de `unsigned long int` para grandes números de população.
* **Manipulação de Strings:** Uso de `fgets` e `strcspn` para leitura limpa de nomes.
* **Git/GitHub:** Controle de versão e organização de portfólio.

# 🃏 Super Trunfo Países - Nível Mestre

Bem-vindo ao repositório do **Super Trunfo**, um projeto desenvolvido em **Linguagem C** para exercitar lógica de programação, manipulação de tipos de dados e operadores relacionais. Este projeto faz parte da minha jornada de transição para o desenvolvimento de software com foco em **Inteligência Artificial**.

## 🚀 Sobre o Desafio
O objetivo deste nível avançado foi criar um sistema de duelo entre duas cartas de cidades, onde o programa decide o vencedor baseado em diversos atributos técnicos.

### 🧠 O que eu aprendi e apliquei:
- **Gerenciamento de Memória e Tipos:** Uso de `unsigned long int` para tratar populações de grandes metrópoles, garantindo que não ocorra *overflow*.
- **Precisão em Cálculos:** Implementação de densidade populacional e PIB per capita com `float`.
- **Casting Explícito:** Conversão manual de tipos para garantir a precisão em operações matemáticas complexas.
- **Lógica de Comparação:** Uso de operadores relacionais para determinar vencedores, incluindo a lógica invertida para o atributo de **Densidade Populacional**.
- **O Inverso Matemático:** Criação do atributo **Super Poder**, que utiliza a soma de todos os dados e o inverso da densidade para equilibrar o jogo.

## 🛠️ Tecnologias e Ferramentas
* **Linguagem C** (Core do projeto)
* **Git & GitHub** (Controle de versionamento)
* **VS Code** (Ambiente de desenvolvimento)

## ✍️ Diferencial de Estudo
Como parte da minha metodologia de aprendizado "Deep Work", este código foi **escrito linha por linha à mão** em caderno antes da implementação digital. Isso me permitiu entender cada ponto e vírgula e fortalecer meu raciocínio lógico sem o auxílio de corretores automáticos.

## 📈 Próximos Passos
- [ ] Implementar estruturas de decisão `if/else` para tratar empates.
- [ ] Migrar a lógica base para **Python**, visando integração futura com bibliotecas de IA.
- [ ] Criar uma interface via terminal mais interativa.

# 🃏 Super Trunfo - Cartas de Cidades

Este projeto é uma implementação simples em **C** de um jogo estilo **Super Trunfo**, onde cada carta representa uma cidade brasileira com atributos como população, área, PIB e pontos turísticos. O programa permite cadastrar duas cartas, calcular automaticamente indicadores derivados e compará-las em atributos específicos.

---

## ✨ Funcionalidades
- Cadastro de duas cartas com os seguintes atributos:
  - Estado
  - Código da carta
  - Nome da cidade
  - População
  - Área (km²)
  - PIB (em bilhões)
  - Número de pontos turísticos
- Cálculo automático de:
  - **Densidade populacional** (hab/km²)
  - **PIB per capita** (R$ por habitante)
- Comparação entre cartas nos atributos:
  - População
  - PIB per capita

---

## 📂 Estrutura do Código
- `struct Carta`: Estrutura que armazena os dados de cada cidade.
- Funções principais:
  - Entrada de dados via `scanf`.
  - Cálculo de densidade populacional e PIB per capita.
  - Impressão formatada dos resultados.
  - Comparação entre cartas usando condicionais (`if`, `else if`, `else`).

---

## 🚀 Como Executar
1. Compile o programa:
   ```bash
   gcc super_trunfo.c -o super_trunfo
---
**Conecte-se comigo:**
https://www.linkedin.com/in/marcos-antonio-662b20146