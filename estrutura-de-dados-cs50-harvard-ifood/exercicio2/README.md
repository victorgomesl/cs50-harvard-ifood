# Exercício 1: Herança

Este programa simula a herança de tipos sanguíneos em uma família, determinando os tipos sanguíneos possíveis para cada membro da família com base nos alelos herdados de seus pais. Utiliza uma abordagem recursiva para criar uma árvore genealógica que representa três gerações de uma família, atribuindo alelos de tipo sanguíneo de maneira aleatória para a geração mais velha e de acordo com a herança genética para as gerações mais jovens.

## Como Executar

### Compilação

Para compilar o programa, utilize o comando:

    make inheritance

### Uso

Para executar o programa e aplicar um filtro à imagem, utilize o comando:

    ./inheritance

O programa irá automaticamente gerar uma árvore genealógica de três gerações e imprimir os tipos sanguíneos para cada membro da família, demonstrando como os alelos são passados de uma geração para a próxima.

#### Exemplos de Saída:

Generation 0, blood type OO
    Generation 1, blood type AO
        Generation 2, blood type OA
        Generation 2, blood type BO
    Generation 1, blood type OB
        Generation 2, blood type AO
        Generation 2, blood type BO

Este exemplo ilustra os tipos sanguíneos possíveis em uma família, começando com uma criança de tipo sanguíneo OO e mostrando os tipos sanguíneos dos pais e avós, conforme determinado pela simulação.