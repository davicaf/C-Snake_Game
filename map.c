//
// Created by davi_ on 06/01/2026.
//
#include <stdio.h>
#include "map.h"

#include <stdlib.h>

char** create_table(int lines, int columns) {
    char **table;

    table = (char**)malloc(lines * sizeof(char*));
    if (table == NULL) {
        return NULL;
    }

    for (int i = 0; i < lines; i++) {
        table[i] = (char*)malloc(columns * sizeof(char));
        if (table[i] == NULL) {
            return NULL;
        }
        for (int j = 0; j < columns; j++) {
            table[i][j] = '#';
        }
    }

    return table;
}

void free_table(char** table, int lines) {
    for (int i = 0; i < lines; i++) {
        free(table[i]);
    }
    free(table);
    return;
}

