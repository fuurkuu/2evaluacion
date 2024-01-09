#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanzarDado() {
    return rand() % 6 + 1;  
}
int main() {
    srand(time(NULL));
    printf("Bienvenido al juego de DadosToni\n");

    int puntuacionJugador1 = 0;
    int puntuacionJugador2 = 0;

    for (int i = 0; i < 3; ++i) {
        printf("Turno %d:\n", i + 1);

        // Jugador 1
        printf("Jugador 1 : ");
        puntuacionJugador1 += lanzarDado();
        printf("%d\n", lanzarDado());

        // Jugador 2
        printf("Jugador 2 : ");
        puntuacionJugador2 += lanzarDado();
        printf("%d\n", lanzarDado());
    }

    printf("\nResultado Final:\n");
    printf("Puntuación Jugador 1: %d\n", puntuacionJugador1);
    printf("Puntuación Jugador 2: %d\n", puntuacionJugador2);

    if (puntuacionJugador1 > puntuacionJugador2) {
        printf("¡Jugador 1 gana!\n");
    } else if (puntuacionJugador2 > puntuacionJugador1) {
        printf("¡Jugador 2 gana!\n");
    } else {
        printf("¡Es un empate!\n");
    }

    return 0;
}
