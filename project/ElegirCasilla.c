#include <stdio.h>

int ElegirFila(n){
    int fila;
    printf("Elige la fila:");
    scanf("%d", fila);
    while(fila < 0 && fila > n){
        if (fila < 0){
            printf("Error, la fila no puede ser negativa");
        }
        if (fila > n){
            printf("Error, la fila es mayor a la del rango del tablero");
        }
        scanf("%d", fila);
    }
    return fila;

}

int ElegirColumna(n){
    int columna;
    printf("Elige la columna:");
    scanf("%d", columna);
    while(columna < 0 && columna > n){
        if (columna < 0){
            printf("Error, la columna no puede ser negativa");
        }
        if (columna > n){
            printf("Error, la columna es mayor a la del rango del tablero");
        }
        scanf("%d", columna);
    }
    return columna;
}