/*28)	Se requiere desarrollar un programa que almacene un listado (máximo 100) de películas y su puntaje según las opiniones del público. El programa debe contar con las siguientes características. Mediante un menú de opciones se deben realizar las siguientes acciones:
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
#define X 4
//variables globales
int menor;
int mayor;
int alumLeg[X];
char opcion='q';
float alumAlt[X];
float promAltura;
float datoMayor=0;
float diferenciaAlt;
float datoMenor=100;
//funciones

void menu(){
        switch(opcion){
                case 'a':   cargarAlumnos();
                break;
                case 'b':   altMayor();
                            altMenor();
                break;
                case 'c':   imprMenorMayor();
                break;
                case 'd':   promedioAlt();
                            diferenciaAltMaMe();
                break;
                case 'e':   printf("Salir del Programa");
                break;
        }}
void introducirOpcion(){
        fflush(stdin);
        scanf("%c",&opcion);
        tolower(opcion);
        getchar(); // Limpia el búfer
        }

void mensajeMenu(){
        printf("Menu:\n"
        "A- Ingreso de datos en una matriz con el nombre de la película y su puntaje (0 a 10)\n"
        "B- Ordenar los datos mediante dos posibles opciones: por puntaje o alfabéticamente por nombre.\n"
        "C- Imprimir por pantalla los primeros 10 registros del listado.\n"
        "D- Salir\n");}
//inicio del programa
int main(){
        do{
        mensajeMenu();
        introducirOpcion();
        menu();
        }while(opcion!='e');
return 0;
}