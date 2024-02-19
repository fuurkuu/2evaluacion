#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertirCadena(char *cadena) {
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud / 2; i++) {
        char temp = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temp;
    }
}
int esPalindromo(char *cadena) {
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud / 2; i++) {
        if (cadena[i] != cadena[longitud - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char *lista[2];
    lista[0] = (char *)malloc(100 * sizeof(char)); 
    lista[1] = (char *)malloc(100 * sizeof(char)); 

    printf("Ingrese la primera palabra: ");
    scanf("%s", lista[0]);

    strcpy(lista[1], lista[0]);

    invertirCadena(lista[1]);

    printf("La palabra invertida es: %s\n", lista[1]);

    if (esPalindromo(lista[0])) {
        printf("La palabra ingresada es un palindromo.\n");
    } else {
        printf("La palabra ingresada no es un palindromo.\n");
    }

    free(lista[0]);
    free(lista[1]);

    return 0;
}
