#include "maze.h"
#include <stdio.h>


int laberinto[FILAS][COLUMNAS] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

void imprimirLaberinto() {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (laberinto[i][j] == 1) {
                printf(" 1");  
            } else if (laberinto[i][j] == 2) {
                printf("X ");  
            } else {
                printf(" 0");  
            }
        }
        printf("\n");
    }
}

int movimientoValido(int fila, int col) {
    if (fila < 0 || fila >= FILAS || col < 0 || col >= COLUMNAS) {
        return 0;
    }

    if (laberinto[fila][col] == 1) {
        return 0;
    }

    return 1;
}

int haGanado() {
    return (laberinto[FILAS - 1][COLUMNAS - 1] == 2);
}

void imprimirMensaje() {
    printf("¡Ganaste!\n");
     if (numMovimientos <= 8) {
        printf("¡Eres un Pro!\n");
    } else if (numMovimientos <= 15) {
        printf("Eres un novato.\n");
    } else {
        printf("¡Eres un noob!\n");
    }
   
        
    
}



