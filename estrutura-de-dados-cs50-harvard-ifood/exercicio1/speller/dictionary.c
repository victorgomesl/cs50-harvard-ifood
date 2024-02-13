#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

#include "dictionary.h"

#define N 65536

typedef struct node {
    char word[LENGTH + 1];
    struct node *next;
} node;

node *table[N];

unsigned int dictionarySize = 0;

bool check(const char *word) {
    char temp[LENGTH + 1];
    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        temp[i] = tolower(word[i]);
    }
    temp[len] = '\0';

    int index = hash(temp);
    node *cursor = table[index];
    while (cursor != NULL) {
        if (strcasecmp(cursor->word, temp) == 0) {
            return true;
        }
        cursor = cursor->next;
    }

    return false;
}

unsigned int hash(const char *word) {
    unsigned long hash = 5381;
    int c;

    while ((c = *word++)) {
        hash = ((hash << 5) + hash) + c;
    }

    return hash % N;
}

bool load(const char *dictionary) {
    FILE *file = fopen(dictionary, "r");
    if (file == NULL) {
        return false;
    }

    char word[LENGTH + 1];
    while (fscanf(file, "%s", word) != EOF) {
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL) {
            fclose(file);
            unload();
            return false;
        }

        strcpy(new_node->word, word);
        int index = hash(word);

        new_node->next = table[index];
        table[index] = new_node;

        dictionarySize++;
    }

    fclose(file);
    return true;
}

unsigned int size(void) {
    return dictionarySize;
}

bool unload(void) {
    for (int i = 0; i < N; i++) {
        while (table[i] != NULL) {
            node *temp = table[i];
            table[i] = table[i]->next;
            free(temp);
        }
    }

    return true;
}
