#include <stdio.h>
#include "jugadores.h"

jugador v_jugadores[NUM_JUGADORES];

void EmpezarPartida(int id){

    v_jugadores[0].num_disparos = 0;
    v_jugadores[1].num_disparos = 0;
    int iteracion = 1;
    int bool = 0; // Si partida esta terminada o no
    int futuraposicion; // Variable de posicion mientras se crea el tablero
    int TodoHundido;
    while(bool == 0){
        iteracion++;
        id = iteracion % 2; // Si es par o impar

        printf("Te toca: %c", v_jugadores[id].n_jugador);
        if(v_jugadores[id].Disparo == "M"){
            ElegirFila(n); // n = orden de la matriz
            ElegirColumna(n);
            /* Ahora iría en tablero de ataque comprobar si se ha tocado
            hundido o agua, esto sería usando la variable de la matriz
            tal que if matriz[fila][columna]... */

            v_jugadores[id].num_disparos++; // Incrementa el número de disparos
        }

        // Lo que vaya
        /* if de si todo los barcos han sido hundidos (TodoHundido == Barcos)
        bool pasa a ser 1, acabando el juego
        */
    }
    printf("Ha ganado el jugador %c", v_jugadores[id].n_jugador);
    // Volveríamos al menú
}