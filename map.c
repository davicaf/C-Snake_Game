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
            if (i == 0 || i == lines - 1 || j == 0 || j == columns - 1) {
                table[i][j] = '#';
            } else {
                table[i][j] = ' ';
            }
        }
    }

    return table;
}

void free_table(char** table, int lines) {
    for (int i = 0; i < lines; i++) {
        free(table[i]);
    }
    free(table);
}

void print_table(char** table, int lines, int columns) {
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%c", table[i][j]);
        }
        printf("\n");
    }
}


