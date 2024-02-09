#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Solicitar número do cartão ao usuário
    long number = get_long("Número: ");
    
    // Inicializar variáveis
    int soma = 0;
    int comprimento = 0;
    int digito1 = 0;
    int digito2 = 0;
    long numero_reduzido = number;
    
    // Iterar pelos dígitos do número do cartão
    while (numero_reduzido > 0)
    {
        digito2 = digito1;
        digito1 = numero_reduzido % 10;
        
        if (comprimento % 2 == 0)
        {
            soma += digito1;
        }
        else
        {
            int multiplo = 2 * digito1;
            soma += (multiplo / 10) + (multiplo % 10);
        }
        
        numero_reduzido /= 10;
        comprimento++;
    }
    
    // Verificar se o número do cartão é válido
    if (soma % 10 != 0)
    {
        printf("INVALID\n");
    }
    else
    {
        // Verificar a bandeira do cartão
        if ((digito1 == 3 && (digito2 == 4 || digito2 == 7)) && comprimento == 15)
        {
            printf("AMEX\n");
        }
        else if ((digito1 == 5 && digito2 >= 1 && digito2 <= 5) && comprimento == 16)
        {
            printf("MASTERCARD\n");
        }
        else if (digito1 == 4 && (comprimento == 13 || comprimento == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
}