#include "jugadores.h"
#include <stdio.h>

jugador v_jugadores[NUM_JUGADORES];

void inicializarJugador(int id) {

    if (id < 0 || id >= NUM_JUGADORES) {
        printf("ID de jugador no válido.\n");
        return;
    }

    printf("Ingrese el nombre del jugador %d: ", id);
    scanf("%s", v_jugadores[id].n_jugador);
    
    v_jugadores[id].id_jugador = id;
    
    
    while (v_jugadores[id].Disparo != 'A' && v_jugadores[id].Disparo != 'M') {
        printf("Ingrese el tipo de disparo del jugador %d (A para automatico, M para manual): ", id);
        scanf(" %c", &v_jugadores[id].Disparo);
    }
    
}

