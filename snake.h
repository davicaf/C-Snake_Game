//
// Created by davi_ on 06/01/2026.
//

#ifndef SNAKE_GAME_SNAKE_H
#define SNAKE_GAME_SNAKE_H

typedef struct snake_node { // Each ball of snake will be this type of struct
    int x_position, y_position; // variables to save the position
    struct snake_node *next; // pointer to the next node (will be null if the current snake node its the head or the last node of body snake)
} snake_node;

snake_node* create_snake_node(int x, int y);

#endif //SNAKE_GAME_SNAKE_H
