#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ganador(char *tablero) {
    for (int i = 0; i < 3; ++i) {
        if (*(tablero + i*3) == *(tablero + i*3 + 1) && *(tablero + i*3) == *(tablero + i*3 + 2)) {
            if (*(tablero + i*3) == 'O') return 1;
            if (*(tablero + i*3) == 'X') return -1;
        }
    }
    for (int i = 0; i < 3; ++i) {
        if (*(tablero + i) == *(tablero + 3 + i) && *(tablero + i) == *(tablero + 6 + i)) {
            if (*(tablero + i) == 'O') return 1;
            if (*(tablero + i) == 'X') return -1;
        }
    }
    if (*tablero == *(tablero + 4) && *(tablero + 4) == *(tablero + 8)) {
        if (*tablero == 'O') return 1;
        if (*tablero == 'X') return -1;
    }
    if (*(tablero + 2) == *(tablero + 4) && *(tablero + 4) == *(tablero + 6)) {
        if (*(tablero + 2) == 'O') return 1;
        if (*(tablero + 2) == 'X') return -1;
    }
    return 0;
}

int main() {
    char tablero[3][3];

    srand(time(NULL)); 
  
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int random = rand() % 2;
          
            if (random == 0)
                tablero[i][j] = 'O';
            else
                tablero[i][j] = 'X';
        }
    }
    printf("Matriz generada aleatoriamente:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }

    int resultado = ganador((char *)tablero);
    if (resultado == 1)
        printf("¡Las 'O' forman 3 en raya!\n");
    else if (resultado == -1)
        printf("¡Las 'X' forman 3 en raya!\n");
    else
        printf("No hay 3 en raya.\n");
        

    return 0;
}
