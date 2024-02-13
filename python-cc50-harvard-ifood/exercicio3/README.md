# Exercício 3: Dinheiro

Este programa calcula o número mínimo de moedas necessárias para dar o troco ao usuário. Utilizando valores de moedas de 25¢, 10¢, 5¢ e 1¢, o programa determina como fornecer o troco com o menor número de moedas possível.

### Uso

Para executar o programa, você precisa ter o Python e a biblioteca CS50 instalados em seu ambiente. Em seguida, abra o terminal, navegue até o diretório contendo cash.py e execute o programa com o seguinte comando:

    python cash.py

O programa solicitará que você insira o valor do troco devido. Este valor deve ser um número positivo representando dólares e centavos, mas sem o símbolo de dólar ($). Por exemplo, para um troco devido de $0.41, você deve digitar 0.41.

#### Exemplos:

Para um troco devido de $0.41:

Change owed: 0.41
4

Para um troco devido de $1.60:

Change owed: 1.60
7

O programa continuará solicitando uma entrada válida até que o usuário forneça um valor não negativo. Se o usuário inserir uma entrada inválida, como um valor negativo, uma string não numérica ou deixar em branco, o programa solicitará novamente por uma entrada válida.