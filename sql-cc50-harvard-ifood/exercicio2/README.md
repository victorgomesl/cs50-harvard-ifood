# Exercicio 2: Investigação do Roubo

Este programa simula uma investigação de roubo com base em entrevistas, transações de caixa eletrônico, registros de segurança do tribunal e registros de chamadas telefônicas. O objetivo é descobrir quem comprou uma passagem de avião para o ladrão viajar no dia seguinte ao roubo.

### Uso

Para executar o programa, você precisará de um banco de dados SQLite contendo as tabelas interviews, atm_transactions, phone_calls, bank_accounts, people, flights, airports e suas respectivas estruturas. O programa é executado a partir de um console do SQLite com os comandos SQL necessários.

Passos da Investigação
1. Entrevistas: As entrevistas com testemunhas fornecem informações sobre o roubo e o possível envolvimento de suspeitos.

2. Transações de Caixa Eletrônico: As transações de caixa eletrônico registram saques e depósitos feitos em uma determinada data e localização.

3. Registros de Chamadas Telefônicas: Os registros de chamadas telefônicas fornecem informações sobre as chamadas feitas e recebidas por indivíduos suspeitos.

4. Associação de Contas Bancárias com Pessoas: As contas bancárias estão associadas a indivíduos, o que nos permite rastrear as transações financeiras.

5. Associação de Números de Telefone com Pessoas: Os números de telefone estão associados a indivíduos, o que nos permite rastrear as comunicações telefônicas.

6. Consulta ao Banco de Dados: Consultas SQL são usadas para correlacionar as informações disponíveis e identificar o possível comprador da passagem para o ladrão.

#### Estrutura do Banco de Dados

O banco de dados possui várias tabelas que armazenam informações relevantes para a investigação:

- interviews: Registros das entrevistas com testemunhas.
- atm_transactions: Registros das transações de caixa eletrônico.
- phone_calls: Registros das chamadas telefônicas.
- bank_accounts: Informações sobre contas bancárias, incluindo associação com pessoas.
- people: Detalhes das pessoas envolvidas na investigação.
- flights: Informações sobre voos, incluindo origem, destino e data.
- airports: Detalhes sobre aeroportos.

#### Tecnologias Utilizadas

- SQLite: Banco de dados utilizado para armazenar e consultar as informações da investigação.
- SQL: Linguagem de consulta estruturada utilizada para manipular e recuperar dados do banco de dados.

Este projeto oferece uma introdução prática ao uso de bancos de dados e consultas SQL para análise de dados em uma situação investigativa fictícia.