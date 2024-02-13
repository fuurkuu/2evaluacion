#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int fil, col;
    int numeros[3][3];

    srand(time(NULL));

    for (fil = 0; fil < 3; fil++) {
        for (col = 0; col < 3; col++) {
            numeros[fil][col] = rand() % 9 + 1;
        }
    }

    printf("\nMATRIZ GENERADA AL AZAR:\n");
    for (fil = 0; fil < 3; fil++) {
        for (col = 0; col < 3; col++) {
            printf(" %d", numeros[fil][col]);
        }
        printf("\n");
    }

    return 0;
}
