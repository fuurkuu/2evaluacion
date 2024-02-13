#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 10
#define COLUMNAS 10
#define PALABRA "mircea"

void imprimirMatriz(char matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));

    char matriz[FILAS][COLUMNAS] = {0};

    int filaAleatoria = rand() % FILAS;
    int columnaAleatoria = rand() % (COLUMNAS - sizeof(PALABRA) + 1);

    for (int i = 0; i < sizeof(PALABRA) - 1; i++) {
        matriz[filaAleatoria][columnaAleatoria + i] = PALABRA[i];
    }

    imprimirMatriz(matriz);

    return 0;
}
