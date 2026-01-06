//
// Created by davi_ on 06/01/2026.
//

#include "snake.h"
#include <stdlib.h>


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

