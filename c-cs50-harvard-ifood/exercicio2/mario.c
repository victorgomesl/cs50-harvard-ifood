#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    // Solicitar altura da pirâmide ao usuário
    do
    {
        height = get_int("Altura: ");
    }
    while (height < 1 || height > 8);
    
    // Gerar as duas pirâmides
    for (int row = 1; row <= height; row++)
    {
        // Espaços antes da pirâmide esquerda
        for (int space = 0; space < height - row; space++)
        {
            printf(" ");
        }
        
        // Hashes da pirâmide esquerda
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }
        
        // Espaço entre as pirâmides
        printf("  ");
        
        // Hashes da pirâmide direita
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }
        
        // Nova linha
        printf("\n");
    }
}