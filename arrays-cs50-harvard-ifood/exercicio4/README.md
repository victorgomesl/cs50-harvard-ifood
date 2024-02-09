# Exercício 4: Scrabble

Este programa determina qual das duas palavras fornecidas pelos jogadores no jogo de Scrabble vale mais pontos. No Scrabble, os jogadores formam palavras para marcar pontos baseados no valor de cada letra. Este programa calcula a pontuação de cada palavra fornecida, usando os valores de pontos típicos do Scrabble para cada letra do alfabeto inglês.

## Como Executar

- Compile o programa com `make scrabble` ou `clang -o scrabble scrabble.c -lcs50`.
- Execute o programa com `./scrabble`.
- Quando solicitado, digite as palavras para o Jogador 1 e o Jogador 2.
- O programa irá calcular e imprimir o vencedor baseado na pontuação das palavras inseridas.

## Regras

- A pontuação de uma palavra é a soma dos pontos de cada letra na palavra.
- Letras maiúsculas e minúsculas têm o mesmo valor de ponto.
- Caracteres que não são letras (como pontuações ou espaços) não contam para a pontuação.
- O programa compara as pontuações das palavras dos Jogadores 1 e 2 e declara o vencedor.

## Exemplo

$ ./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins!

Este exemplo demonstra o uso do programa com as palavras "COMPUTER" e "science", resultando na vitória do Jogador 1.