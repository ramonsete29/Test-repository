#ifndef JUGADORES_H
#define JUGADORES_H

#define NUM_JUGADORES 2

typedef struct {
    char n_jugador[20];
    int id_jugador;
    char Disparo;
    int num_disparos;
    int ronda;
} jugador;

extern jugador v_jugadores[NUM_JUGADORES];
void inicializarJugador(int id);

#endif