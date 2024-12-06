/*28)	Se requiere desarrollar un programa que almacene un listado (máximo 100) de películas y su puntaje 
según las opiniones del público. El programa debe contar con las siguientes características.
 Mediante un menú de opciones se deben realizar las siguientes acciones:
a)	Ingreso de datos en una matriz con el nombre de la película y su puntaje (0 a 10)
b)	Ordenar los datos mediante dos posibles opciones: por puntaje o alfabéticamente por nombre.
c)	Imprimir por pantalla los primeros 10 registros del listado.
d)	Salir del programa
Cada uno de los ítems, a excepción de la opción d) Salir del programa, debe ser implementado como una función independiente, la matriz de películas debe ser declarada globalmente.

*/
//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//constantes globales
#define MAX_PELICULAS 100
#define MAX_NOMBRE 50
//variables globales
int opcion1=0;
char opcion='q';
// Estructura para almacenar información de la película
typedef struct {
    char nombre[MAX_NOMBRE];
    int puntaje;
} Pelicula;
Pelicula peliculas[MAX_PELICULAS];

// Función para intercambiar dos películas
void intercambiar(Pelicula *a, Pelicula *b) {
    Pelicula temp = *a;
    *a = *b;
    *b = temp;
}

// Función para ordenar las películas por puntaje
void ordenarPorPuntaje(Pelicula peliculas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (peliculas[i].puntaje < peliculas[j].puntaje) {
                intercambiar(&peliculas[i], &peliculas[j]);
            }
        }
    }
}

// Función para ordenar las películas alfabéticamente por nombre
void ordenarPorNombre(Pelicula peliculas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(peliculas[i].nombre, peliculas[j].nombre) > 0) {
                intercambiar(&peliculas[i], &peliculas[j]);
            }
        }
    }
}

void cargarPeliculas(){
        for(int i=0;i<MAX_PELICULAS;i++){
                    printf("Ingrese el nombre de la pelicula: ");
                    scanf(" %[^\n]", peliculas[i].nombre);
                    printf("Ingrese el puntaje (0-10): ");
                    scanf("%d", &peliculas[i].puntaje);
                    printf("\nPelicula agregada exitosamente.\n");
        }
}
void menu(){
        switch(opcion){
                case 'a':   cargarPeliculas();
                break;
                case 'b': printf("opcion puntaje 1 o alfabeticamente 2: ");
                          scanf("%d",&opcion1);
                          if(opcion1==1){  
                         ordenarPorPuntaje(peliculas, MAX_PELICULAS);
                        printf("Peliculas ordenadas por puntaje.\n");
                    } else if (opcion1 == 2) {
                        ordenarPorNombre(peliculas, MAX_PELICULAS);
                        printf("Peliculas ordenadas por nombre.\n");
                    } else {
                        printf("Opcion invalida.\n");}
                break;
                case 'c':    if (MAX_PELICULAS > 0) {
                    printf("\nPrimeras 10 peliculas:\n");
                    for (int i = 0; i < MAX_PELICULAS; i++) {
                        printf("%s - Puntaje: %d\n", peliculas[i].nombre, peliculas[i].puntaje);
                    }
                } 
                break;
                case 'd':   printf("Salir del Programa");
                break;
        }
        getchar(); // Limpia el búfer
        }
void introducirOpcion(){
        
        scanf("%c",&opcion);
        tolower(opcion);
        
        }

void mensajeMenu(){
        printf("Menu:\n"
        "A- Ingreso de datos en una matriz con el nombre de la pelicula y su puntaje (0 a 10)\n"
        "B- Ordenar los datos mediante dos posibles opciones: por puntaje o alfabeticamente por nombre.\n"
        "C- Imprimir por pantalla los primeros 10 registros del listado.\n"
        "D- Salir\n");}
//inicio del programa
int main(){
        do{
        mensajeMenu();
        introducirOpcion();
        menu();
        }while(opcion!='d');
return 0;
}