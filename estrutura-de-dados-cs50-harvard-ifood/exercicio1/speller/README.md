# Exercício 1: Speller

Este programa verifica a ortografia em um arquivo de texto, utilizando uma tabela de hash para armazenar e buscar palavras de um dicionário. Ele identifica palavras que estão escritas incorretamente no texto fornecido, comparando cada palavra do texto com as palavras presentes no dicionário.

## Como Executar

### Compilação

Para compilar o programa, utilize o comando:

    make speller

### Uso

Para executar o programa e aplicar um filtro à imagem, utilize o comando:

    ./speller [dicionário] texto

[dicionário] é opcional e pode ser omitido. Se omitido, o programa usará dictionaries/large como padrão.
O texto deve ser o caminho para o arquivo que você deseja verificar a ortografia.

#### Exemplos:

Para verificar a ortografia do arquivo texts/lalaland.txt utilizando o dicionário padrão:

    ./speller texts/lalaland.txt

Para utilizar um dicionário específico, como dictionaries/small, e verificar a ortografia do arquivo texts/lalaland.txt:

    ./speller dictionaries/small texts/lalaland.txt