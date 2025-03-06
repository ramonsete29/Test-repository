#include <stdio.h>
#include "jugadores.h"

int main() {
    int id;
    printf("Introduce la id del jugador que quieres inicializar: ");
    scanf("%d", &id);
    inicializarJugador(id);
    return 0;
}