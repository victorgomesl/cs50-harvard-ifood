# Exercício 2: Filtro de Imagens (Versão Desafiadora)

Este programa estende o Exercício 1 ao introduzir um filtro adicional: o filtro sépia, além dos filtros de escala de cinza, reflexão, desfoque, e detecção de bordas já existentes. Assim, ele oferece uma gama ainda mais ampla de transformações possíveis para as imagens BMP, permitindo não apenas alterar as imagens de maneira básica, mas também aplicar um efeito que dá às imagens uma aparência clássica e atemporal.

## Como Executar

### Compilação

Para compilar o programa, utilize o comando:

    make filter

Ou, se preferir, compile manualmente com:

    clang -o filter filter.c helpers.c -lm

### Uso

Para executar o programa e aplicar um filtro à imagem, utilize o comando:

    ./filter -[opção] images/infile.bmp outfile.bmp

Substitua `[opção]` pelo filtro desejado, onde:

- `g` para aplicar o filtro de escala de cinza.
- `r` para refletir a imagem horizontalmente.
- `b` para aplicar o filtro de desfoque.
- `e` para aplicar o filtro de detecção de bordas.
- `s` para aplicar o filtro sépia.

`infile.bmp` deve ser substituído pelo nome do arquivo de imagem original dentro da pasta `images`. As opções disponíveis são `courtyard.bmp`, `stadium.bmp`, `tower.bmp`, e `yard.bmp`. `outfile.bmp` é o nome do arquivo que será gerado com o filtro aplicado.

#### Exemplos:

Para converter a imagem `courtyard.bmp` para escala de cinza:

    ./filter -g images/courtyard.bmp gray_courtyard.bmp

Para refletir a imagem `stadium.bmp`:

    ./filter -r images/stadium.bmp reflected_stadium.bmp

Para desfocar a imagem `tower.bmp`:

    ./filter -b images/tower.bmp blurred_tower.bmp

Para detectar as bordas da imagem `yard.bmp`:

    ./filter -e images/yard.bmp edges_yard.bmp

Para aplicar o filtro sépia à imagem `courtyard.bmp`:

    ./filter -s images/courtyard.bmp sepia_courtyard.bmp
