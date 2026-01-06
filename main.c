
#include <stdio.h>
#include <stdlib.h>

#define LINES 20
#define COLUMNS 20



typedef struct snake_node { // Each ball of snake will be this type of struct
    int x_position, y_position; // variables to save the position
    struct snake_node *next; // pointer to the next node (will be null if the current snake node its the head or the last node of body snake)
} snake_node;

snake_node* create_snake_node(int x, int y) {
    snake_node *new_node = (snake_node*)malloc(sizeof(snake_node));
    if (new_node == NULL) { // Security Check
        return NULL;
    }
    new_node->x_position = x; // new_node receive the x variable position
    new_node->y_position = y; // new_node receive the y variable position
    new_node->next = NULL; // new_node will point to NULL because it's the current last node of snake

    return new_node;
}

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




int main(void) {


    return 0;
}








