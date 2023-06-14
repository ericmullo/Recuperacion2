#include "player.h"
#include "maze.h"
#include <stdio.h>

 int filaJugador;
 int colJugador;
 int numMovimientos;

void moverJugador(int fila, int col) {
    if (movimientoValido(fila, col)) {
        laberinto[filaJugador][colJugador] = 0;
        filaJugador = fila;
        colJugador = col;
        laberinto[filaJugador][colJugador] = 2;
        numMovimientos++;
    } else {
        printf("Movimiento inválido. Inténtalo nuevamente.\n");
    }
}

void jugar() {
    numMovimientos = 0;
    filaJugador = 0;
    colJugador = 0;
    laberinto[filaJugador][colJugador] = 2;

    printf("\n¡Bienvenido al laberinto!\n");
    printf("Instrucciones: Usa las teclas WASD para moverte.\n");

    while (!haGanado()) {
        printf("\nLaberinto:\n");
        imprimirLaberinto();
        printf("Movimientos: %d\n", numMovimientos);

        char movimiento;
        printf("Ingresa tu movimiento (WASD): ");
        scanf(" %c", &movimiento);

        switch (movimiento) {
            case 'W':
            case 'w':
                moverJugador(filaJugador - 1, colJugador);
                break;
            case 'S':
            case 's':
                moverJugador(filaJugador + 1, colJugador);
                break;
            case 'A':
            case 'a':
                moverJugador(filaJugador, colJugador - 1);
                break;
            case 'D':
            case 'd':
                moverJugador(filaJugador, colJugador + 1);
                break;
            default:
                printf("Movimiento inválido. Inténtalo nuevamente.\n");
        }
    }

    printf("\nLaberinto:\n");
    imprimirLaberinto();
    imprimirMensaje();
}
