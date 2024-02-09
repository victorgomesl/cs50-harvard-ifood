#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Verificar se exatamente um argumento foi fornecido
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Verificar se o argumento é um número inteiro positivo
    for (int i = 0, len = strlen(argv[1]); i < len; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Converter o argumento de linha de comando de string para int
    int key = atoi(argv[1]);

    // Solicitar o texto simples ao usuário
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");
    // Criptografar e imprimir o texto cifrado
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        if (isalpha(plaintext[i]))
        {
            char offset = isupper(plaintext[i]) ? 'A' : 'a';
            printf("%c", (plaintext[i] - offset + key) % 26 + offset);
        }
        else
        {
            // Imprimir o caractere não alfabético inalterado
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

    return 0;
}
