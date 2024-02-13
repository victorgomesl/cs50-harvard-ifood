# Exercício 4: Crédito

Este programa verifica se um número de cartão de crédito fornecido pelo usuário é válido segundo o algoritmo de Luhn. Além de validar o número, o programa identifica a bandeira do cartão (American Express, MasterCard ou Visa) e imprime o nome da bandeira se o número for válido. Caso contrário, o programa indica que o número do cartão é inválido.

### Uso

Não é necessário compilar este programa, pois ele é escrito em Python. Para executá-lo, siga os passos abaixo:

1. Abra o terminal.
2. Navegue até o diretório contendo o arquivo credit.py.
3. Execute o programa com o comando:

    python credit.py

Quando solicitado, insira o número do cartão de crédito e pressione Enter.

#### Exemplos de Entrada e Saída:

Para um número de cartão American Express válido:

Number: 378282246310005
AMEX

Para um número de cartão MasterCard válido:

Number: 5555555555554444
MASTERCARD

Para um número de cartão Visa válido:

Number: 4012888888881881
VISA

Para um número de cartão inválido:

Number: 1234567890
INVALID

Este programa oferece uma aplicação prática do algoritmo de Luhn para validar números de cartão de crédito e demonstra como utilizar condicionais e loops em Python para processar strings e realizar cálculos matemáticos.