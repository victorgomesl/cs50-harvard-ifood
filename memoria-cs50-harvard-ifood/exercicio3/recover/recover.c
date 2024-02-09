#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Define um tipo de dado para armazenar um byte
typedef uint8_t BYTE;

// Número de bytes em um bloco do cartão de memória
#define BLOCK_SIZE 512

int main(int argc, char *argv[])
{
    // Verifica a utilização correta
    if (argc != 2)
    {
        fprintf(stderr, "Uso: ./recover image\n");
        return 1;
    }

    // Abre o arquivo de imagem forense
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Não foi possível abrir o arquivo %s.\n", argv[1]);
        return 2;
    }

    BYTE buffer[BLOCK_SIZE];
    FILE *img = NULL;
    char filename[8];
    int imgCount = 0;

    // Lê o arquivo .raw bloco por bloco
    while (fread(buffer, BLOCK_SIZE, 1, file))
    {
        // Verifica se o bloco tem uma assinatura de início de um JPEG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // Fecha o arquivo de imagem atual, se estiver aberto
            if (img != NULL)
            {
                fclose(img);
            }

            // Cria um novo arquivo para o novo JPEG encontrado
            sprintf(filename, "%03i.jpg", imgCount++);
            img = fopen(filename, "w");
            if (img == NULL)
            {
                fclose(file);
                fprintf(stderr, "Não foi possível criar a imagem %s.\n", filename);
                return 3;
            }
        }

        // Se um JPEG estiver sendo recuperado, escreve o bloco no arquivo de imagem
        if (img != NULL)
        {
            fwrite(buffer, BLOCK_SIZE, 1, img);
        }
    }

    // Fecha quaisquer arquivos abertos
    if (file != NULL)
    {
        fclose(file);
    }

    if (img != NULL)
    {
        fclose(img);
    }

    return 0;
}
