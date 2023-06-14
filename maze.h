#ifndef MAZE_H//se utiliza para verificar si un identificador no está definido//
#define MAZE_H

#define FILAS 5
#define COLUMNAS 5
  extern int laberinto[FILAS][COLUMNAS];
  extern int numMovimientos; //extern:Se utliza para declarar una variable cuya definicion se encuentra en otro archivo//

void imprimirLaberinto();
int movimientoValido(int fila, int col);
int haGanado();
void imprimirMensaje();

#endif//se utiliza para cerrar y marcar el final de un bloque condicional iniciado por #ifndef//

