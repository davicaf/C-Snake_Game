//
// Created by davi_ on 06/01/2026.
//

#ifndef SNAKE_GAME_MAP_H
#define SNAKE_GAME_MAP_H

#define LINES 20
#define COLUMNS 20

char** create_table(int lines, int columns);
void free_table(char** table, int lines);
void print_table(char** table, int lines, int columns);



#endif //SNAKE_GAME_MAP_H
