#include "maze.h"
#include "player.h"
#include <stdio.h>

int main() {
    int opcion;
    do {
        printf("\n Menú Principal \n");
        printf("1. Juego\n");
        printf("2. Créditos\n");
        printf("3. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                jugar();
                break;
            case 2:
                printf("\n Créditos \n");
                printf("Este juego de laberinto fue desarrollado por [Eric Mullo].\n");
                break;
            case 3:
                printf("\n¡Gracias por jugar! Hasta luego.\n");
                break;
            default:
                printf("Opción inválida. Inténtalo nuevamente.\n");
        }
    } while (opcion != 3);

    return 0;
}
