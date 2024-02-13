# Lab 6: Copa do Mundo

Este programa realiza simulações da Copa do Mundo FIFA, calculando e exibindo a probabilidade de vitória de cada equipe participante com base em suas classificações da FIFA.

### Uso

Para executar o programa, você precisará de Python e de dois arquivos: um arquivo CSV contendo os dados das equipes participantes e suas classificações, e um arquivo .py para o código do programa. O programa é executado a partir da linha de comando com o seguinte formato:

    python tournament.py [arquivo_csv]

Substitua [arquivo_csv] pelo caminho do arquivo CSV que contém as classificações das equipes. 
Por exemplo:

    python tournament.py 2018m.csv

#### Detalhes da Implementação

O programa começa lendo os dados das equipes a partir do arquivo CSV fornecido. Cada equipe é representada por um dicionário contendo o nome da equipe e sua classificação. Utilizando esses dados, o programa simula 1000 torneios da Copa do Mundo, determinando o vencedor de cada torneio com base nas probabilidades calculadas a partir das classificações das equipes.

Após a conclusão das simulações, o programa calcula e exibe a probabilidade de cada equipe vencer a Copa do Mundo, baseada no número de vezes que cada equipe foi vencedora nas simulações.

#### Exemplos de Saída

A saída do programa é uma lista de equipes participantes acompanhada da probabilidade estimada de cada uma vencer a Copa do Mundo, ordenadas pela probabilidade de vitória. Por exemplo:

Belgium: 20.9% chance of winning
Brazil: 20.3% chance of winning
Portugal: 14.5% chance of winning
Spain: 13.6% chance of winning
...

#### Arquivos CSV

O programa espera um arquivo CSV no seguinte formato:

team,rating
Uruguay,976
Portugal,1306
France,1166
Argentina,1054
...

A primeira linha é um cabeçalho que indica o nome da equipe (team) e sua classificação da FIFA (rating). Cada linha subsequente representa uma equipe que participa do torneio.

#### Tecnologias Utilizadas

- Python: Linguagem de programação utilizada para implementar a lógica de simulação do torneio.
- CSV: Formato de arquivo utilizado para armazenar os dados das equipes participantes e suas classificações da FIFA.

Este projeto oferece uma introdução interessante à simulação de eventos e ao uso de dados reais para modelar resultados em esportes.