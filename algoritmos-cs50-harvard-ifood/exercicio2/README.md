# Exercício 2: Runoff

Este programa implementa uma eleição de segundo turno (runoff), permitindo que os eleitores classifiquem os candidatos por preferência. Caso nenhum candidato tenha mais de 50% dos votos, o candidato com menos votos é eliminado, e os votos são recalculados até que um vencedor seja determinado.

## Como Executar

Compile o programa com `make runoff` ou `clang -o runoff runoff.c -lcs50`.

Execute o programa com `./runoff [candidato ...]` inserindo os nomes dos candidatos quando solicitado.
