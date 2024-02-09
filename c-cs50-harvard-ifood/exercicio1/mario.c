#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    // Passo 1 e 2: Obter a altura da pirâmide do usuário
    do
    {
        height = get_int("Tamanho: ");
    }
    while (height < 1 || height > 8);
    
    // Passo 3: Iterar por cada linha da pirâmide
    for (int row = 1; row <= height; row++)
    {
        // Passo 3.1: Calcular e imprimir espaços
        for (int space = 0; space < height - row; space++)
        {
            printf(" ");
        }
        
        // Passo 3.2 e 3.3: Calcular e imprimir hashes (#)
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }
        
        // Passo 3.4: Mover para a próxima linha
        printf("\n");
    }
}