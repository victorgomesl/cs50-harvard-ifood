#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Pontos atribuídos a cada letra do alfabeto
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Recebe as palavras dos dois jogadores
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Calcula a pontuação das palavras
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Imprime o vencedor
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    int score = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (isupper(word[i]))
        {
            // Subtrai 'A' para obter o índice correto em POINTS para letras maiúsculas
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            // Subtrai 'a' para obter o índice correto em POINTS para letras minúsculas
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}
