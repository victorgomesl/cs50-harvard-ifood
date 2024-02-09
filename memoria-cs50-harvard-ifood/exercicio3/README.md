# Exercício 3: Recover

## Background e Descrição do Problema

Este programa implementa a recuperação de imagens JPEG de uma imagem forense, conforme detalhado a seguir.

O programa lida com a recuperação de fotos JPEG de uma imagem forense, que pode ser uma simulação de um cartão de memória. Ele reconhece arquivos JPEG por meio de suas assinaturas, que consistem nos primeiros bytes de cada arquivo JPEG. A estratégia é procurar por essa assinatura na imagem forense, que pode conter vários arquivos JPEG seguidos, e escrever cada um desses arquivos JPEG em um arquivo separado.

## Como Executar

Para compilar o programa, utilize o seguinte comando:

    make recover

Ou, para compilar manualmente, execute:

    clang -o recover recover.c

Para executar o programa e recuperar os JPEGs da imagem forense, utilize o seguinte comando:

    ./recover card.raw

Onde `card.raw` é o nome da imagem forense fornecida.

### Exemplo:

./recover card.raw

## Dicas e Testes

- Certifique-se de que o programa seja executado com exatamente um argumento de linha de comando, o nome da imagem forense.
- Verifique se o programa pode abrir a imagem forense para leitura.
- Os arquivos gerados devem ser nomeados como `###.jpg`, onde `###` é um número decimal de três dígitos, começando com 000 para a primeira imagem recuperada.