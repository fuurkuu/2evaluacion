#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *palabra;
    int longitud;
} Palabra;

int comparar_longitud(const void *a, const void *b) {
    cons 
    return palabra_a->longitud - palabra_b->longitud;
}

int main() {

    Palabra palabras[10];


    printf("Ingrese 10 palabras:\n");
    for (int i = 0; i < 10; i++) {
        char buffer[100];
        scanf("%s", buffer);
        palabras[i].longitud = strlen(buffer);
        palabras[i].palabra = (char *)malloc((palabras[i].longitud + 1) * sizeof(char));
        strcpy(palabras[i].palabra, buffer);
    }

    qsort(palabras, 10, sizeof(Palabra), comparar_longitud);

    printf("\nPalabras ordenadas por longitud de menor a mayor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", palabras[i].palabra);
    }

    for (int i = 0; i < 10; i++) {
        free(palabras[i].palabra);
    }

    return 0;
}
