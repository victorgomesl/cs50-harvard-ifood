#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float reais;
    
    // Solicitar a quantia devida ao usuário
    do
    {
        reais = get_float("Troca devida: ");
    }
    while (reais < 0);
    
    // Converter reais para centavos e arredondar
    int centavos = round(reais * 100);
    
    // Calcular o número de moedas
    int moedas = 0;
    int valores[] = {25, 10, 5, 1};
    
    for (int i = 0; i < 4; i++)
    {
        moedas += centavos / valores[i];
        centavos %= valores[i];
    }
    
    // Imprimir o número de moedas
    printf("%i\n", moedas);
}