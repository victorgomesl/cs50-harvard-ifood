# Exercício 6: DNA

Este programa identifica uma pessoa com base em sua sequência de DNA, comparando-a com um banco de dados de perfis de DNA. Utilizando Short Tandem Repeats (STRs), o programa calcula a sequência de STRs mais longa em uma amostra de DNA e a compara com as sequências no banco de dados para encontrar uma correspondência.

### Uso

Não é necessário compilar este programa, pois ele é escrito em Python. Para executá-lo, siga os passos abaixo:

1. Abra o terminal.
2. Navegue até o diretório contendo o arquivo dna.py.
3. Execute o programa com o comando:

    python dna.py databases/large.csv sequences/5.txt

Substitua databases/large.csv pelo caminho do arquivo CSV contendo os perfis de DNA e sequences/5.txt pelo caminho do arquivo de texto contendo a sequência de DNA a ser identificada.

#### Exemplos de Entrada e Saída:

Para identificar a sequência de DNA em sequences/5.txt com o banco de dados em databases/large.csv:

$ python dna.py databases/large.csv sequences/5.txt
Lavender

Para uma sequência de DNA que não corresponde a nenhum perfil no banco de dados:

$ python dna.py databases/large.csv sequences/13.txt
No match

O programa primeiro lê o banco de dados de DNA e a sequência de DNA fornecida, calcula a quantidade de repetições para cada STR especificado no banco de dados e, em seguida, compara esses valores com cada perfil no banco de dados para encontrar uma correspondência.

Este exercício desafia as habilidades de programação em Python, especialmente no uso de estruturas de dados, leitura de arquivos, e lógica de comparação, enquanto aborda uma aplicação prática e interessante da bioinformática.