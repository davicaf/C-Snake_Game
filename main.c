// This project was made from me (Davi Ferreira) when i was without internet connection, was a quick project that i made but eu me esforcei bastante e tentei aplicar o que eu tinha aprendido na graduação até o momento que estou escrevendo isso (indo para o 5° período da faculdade)
// Sempre quis fazer um jogo e acho que essa foi uma boa ideia de mesclar meu desejo de ser um desenvolvedor de jogos (mesmo que simples haha) e conectar com meu conhecimento em software!

#include <stdio.h>
#include <stdlib.h>

#define LINES 20
#define COLUMNS 20

char **create_table(LINES, COLUMNS);
    *linhas = malloc(LINES*sizeof(LINES));
    for (int i = 0; i < COLUMNS; i++){

    }





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
int main(void) {


    return 0;
}








