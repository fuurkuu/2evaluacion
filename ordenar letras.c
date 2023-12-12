#include <stdio.h>
#define TAMANO 5

int devuelve_menor(int letra1, int letra2, int letra3) {
  char respuesta;
  if(letra1<letra2)
    if letra1<letra3) respuesta=letra1;
    else respuesta=letra3;
  else
    if(letra2<letra3) respuesta=letra2;
    else respuesta=letra3;
  return respuesta;
}

int main(void) {
    int letra[TAMANO];
    int aux;
    int n_veces;
    int menor;
    int cont;

    for (cont = 0; cont < TAMANO; cont++) {
        printf("\nDime la letra %d: ", cont+1);
        scanf(" %c", &letra[cont]); 
    }

    printf("\nHas introducido las letras: ");
    for (cont = 0; cont < TAMANO; cont++) {
        printf("%c ", letra[cont]);
    }

    for (n_veces = 1; n_veces <= TAMANO - 1; n_veces++) {
        for (cont = 0; cont < TAMANO - 1; cont++) {
            if (letra[cont] > letra[cont + 1]) {
                aux = letra[cont];
                letra[cont] = letra[cont + 1];
                letra[cont + 1] = aux;
            }
        }
    }

    printf("\nLetras ordenadas: ");
    for (cont = 0; cont < TAMANO; cont++) {
        printf("%c ", letra[cont]);
    }

    return 0;
}
