/*27)	La siguiente función devuelve un valor entero aleatorio entre 0 y (tope-1), siendo tope un número entero mayor que 1:
int random(int tope) {
	return rand() % tope;
}
Utilizando dicha función escribir un programa que imprima por pantalla una carta al azar del mazo español.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar un número aleatorio entre 0 y (tope-1)
int random(int tope) {
    return rand() % tope;
}

int main() {
    // Inicializar el generador de números aleatorios
    srand(time(NULL));

    // Definir las palos y los valores de las cartas
    char palos[4][8]= {"Bastos", "Copas", "Espadas", "Oros"};
    char valores[10][8] = {"As", "2", "3", "4", "5", "6", "7", "Sota", "Caballo", "Rey"};

    // Generar un palo aleatorio
    int palo = random(4);

    // Generar un valor aleatorio
    int valor = random(10);

    // Imprimir la carta aleatoria
    printf("La carta aleatoria es: %s de %s\n", valores[valor], palos[palo]);

    return 0;
}