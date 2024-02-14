# Exercicio 1: Movies

Este projeto envolve a análise de um banco de dados de filmes extraído do IMDb, utilizando consultas SQL para responder a perguntas específicas sobre filmes, diretores, atores e classificações. O objetivo é praticar e aprimorar habilidades de SQL através da exploração de dados reais sobre a indústria cinematográfica.

### Uso

Para executar as análises, você precisará de um banco de dados SQLite chamado movies.db, que inclui várias tabelas contendo dados sobre filmes, pessoas (atores e diretores), classificações, e mais. As análises são realizadas por meio de comandos SQL executados a partir do console do SQLite.

Passos da Análise

1. Filmes de 2008: Listar todos os filmes lançados em 2008.
2. Ano de Nascimento de Emma Stone: Determinar o ano de nascimento de Emma Stone.
3. Filmes a partir de 2018: Listar os títulos de todos os filmes lançados em ou após 2018, em ordem 4. alfabética.
4. Filmes com Classificação 10.0: Determinar o número de filmes com classificação IMDb de 10.0.
5. Filmes de Harry Potter: Listar os títulos e anos de lançamento dos filmes de Harry Potter, em ordem cronológica.
6. Avaliação Média dos Filmes de 2012: Calcular a avaliação média de todos os filmes lançados em 2012.
7. Filmes de 2010 por Classificação: Listar todos os filmes de 2010 e suas classificações, em ordem decrescente por classificação.
8. Elenco de Toy Story: Listar todos os atores que estrelaram "Toy Story".
9. Atores de Filmes de 2004: Listar os nomes de todos os atores que estrelaram um filme lançado em 2004, ordenados por ano de nascimento.
10. Diretores de Filmes com Classificação >= 9.0: Listar os nomes dos diretores de filmes que receberam uma classificação de pelo menos 9.0.
11. Top 5 Filmes de Chadwick Boseman: Listar os títulos dos cinco filmes com melhor classificação que Chadwick Boseman estrelou.
12. Filmes com Johnny Depp e Helena Bonham Carter: Listar os títulos de todos os filmes em que Johnny Depp e Helena Bonham Carter estrelaram juntos.
13. Co-estrelas de Kevin Bacon: Listar os nomes de todas as pessoas que estrelaram um filme com Kevin Bacon.

#### Estrutura do Banco de Dados

O banco de dados movies.db contém tabelas essenciais para a análise:

- movies: Dados sobre filmes, incluindo título e ano de lançamento.
- people: Informações sobre pessoas, incluindo nome e ano de nascimento.
- stars: Relacionamentos entre filmes e atores.
- directors: Relacionamentos entre filmes e diretores.
- ratings: Classificações dos filmes no IMDb.

#### Tecnologias Utilizadas

- SQLite: Para armazenamento e consulta dos dados.
- SQL: Para realizar as consultas ao banco de dados.

Este exercício oferece uma oportunidade valiosa de aplicar SQL em um contexto prático, analisando dados do mundo real relacionados ao cinema.