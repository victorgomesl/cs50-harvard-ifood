# Exercício 5: Legibilidade

Este programa calcula o índice de legibilidade de um texto fornecido, determinando o nível escolar aproximado necessário para compreender o texto. Utilizando a fórmula de Coleman-Liau, o programa avalia a complexidade do texto e fornece uma classificação baseada em níveis escolares.

### Uso

Não é necessário compilar este programa, pois ele é escrito em Python. Para executá-lo, siga os passos abaixo:

1. Abra o terminal.
2. Navegue até o diretório contendo o arquivo readability.py.
3. Execute o programa com o comando:

    python readability.py

Quando solicitado, digite o texto que deseja analisar e pressione Enter.

#### Exemplos de Entrada e Saída:

Para um texto simples:

Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3

Para um texto mais complexo:

Text: In my younger and more vulnerable years my father gave me some advice that I've been turning over in my mind ever since.
Grade 7

Para um texto muito complexo:

Text: A large class of computational problems involve the determination of properties of graphs, digraphs, integers, arrays of integers, finite families of finite sets, boolean formulas and elements of other countable domains.
Grade 16+

O programa contará o número de letras, palavras e sentenças no texto fornecido para calcular a média de letras por 100 palavras e a média de sentenças por 100 palavras. Esses valores são então usados na fórmula de Coleman-Liau para determinar o nível de legibilidade do texto.

Este exercício fornece uma excelente oportunidade para praticar habilidades de programação em Python, incluindo manipulação de strings, loops e condicionais, enquanto se explora um algoritmo interessante para avaliar textos.