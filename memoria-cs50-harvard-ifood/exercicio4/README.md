# Exercício 4: Volume

## Descrição do Problema

Este programa modifica o volume de um arquivo de áudio no formato WAV, escalando cada amostra de áudio por um fator específico.

Os arquivos WAV são representados como uma sequência de amostras, onde cada amostra é um número inteiro representando o valor do sinal de áudio em um determinado momento. O programa recebe um arquivo de áudio de entrada, um arquivo de áudio de saída e um fator pelo qual o volume do arquivo de áudio original deve ser escalado.

## Compilação e Uso

Para compilar o programa, utilize o seguinte comando:

    make volume

Ou, para compilar manualmente, execute:

    clang -o volume volume.c -std=c11 -lm

Para executar o programa e modificar o volume do arquivo de áudio, utilize o seguinte comando:

    ./volume input.wav output.wav factor

Substitua `input.wav` pelo nome do arquivo de áudio original, `output.wav` pelo nome do novo arquivo de áudio gerado e `factor` pela quantidade pela qual o volume do arquivo de áudio original deve ser escalado.

### Exemplo:

    ./volume input.wav output.wav 2.0

Este comando dobrará o volume do arquivo de áudio `input.wav` e salvará o arquivo de áudio resultante como `output.wav`.

## Dicas e Testes

- Certifique-se de que o programa seja executado com exatamente três argumentos de linha de comando: o nome do arquivo de áudio de entrada, o nome do arquivo de áudio de saída e o fator de escalonamento do volume.
- Verifique se o programa pode abrir os arquivos de áudio de entrada e de saída.
- O programa deve copiar o cabeçalho do arquivo de áudio de entrada para o arquivo de áudio de saída, antes de modificar as amostras de áudio.
- As amostras de áudio devem ser lidas do arquivo de áudio de entrada, escalonadas pelo fator especificado e escritas no arquivo de áudio de saída.
- Verifique se o programa não perde memória, caso utilize alocação dinâmica de memória.
