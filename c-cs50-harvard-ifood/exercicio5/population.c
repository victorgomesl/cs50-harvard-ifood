#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Solicite o valor inicial ao usuário
    int start_size;
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);

    // Solicite o valor final ao usuário
    int end_size;
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);

    // Calcule o número de anos até o limite
    int years = 0;
    int current_size = start_size;
    while (current_size < end_size)
    {
        current_size = current_size + (current_size / 3) - (current_size / 4);
        years++;
    }

    // Imprima o número de anos
    printf("Years: %i\n", years);
}