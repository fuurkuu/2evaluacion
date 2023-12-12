#include <stdio.h>
#define TAMANO 5

int devuelve_menor(int num1, int num2, int num3) {
    int respuesta;
    if (num1 > num2)
        if (num1 > num3) respuesta = num1;
        else respuesta = num3;
    else
        if (num2 > num3) respuesta = num2;
        else respuesta = num3;
    return respuesta;
}

int main(void) {
    int num[TAMANO];
    int aux;
    int n_veces;
    int mayor; 
    int cont;

    for (cont = 0; cont < TAMANO; cont++) {
        printf("\nDime el número %d: ", cont);
        scanf("%d", &num[cont]);
    }
    printf("\nHas introducido los números: ");
    for (cont = 0; cont < TAMANO; cont++) {
        printf("%d ", num[cont]);
    }

    for (n_veces = 1; n_veces <= TAMANO - 1; n_veces++) {
        for (cont = 0; cont < TAMANO - 1; cont++) {
            if (num[cont] < num[cont + 1]) { 
                aux = num[cont];
                num[cont] = num[cont + 1];
                num[cont + 1] = aux;
            }
        }
    }

    printf("\nVector ordenado de mayor a menor: ");
    for (cont = 0; cont < TAMANO; cont++) {
        printf("%d ", num[cont]);
    }
    return 0;
}
