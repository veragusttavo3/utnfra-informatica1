/*19)Hacer un menú de opciones que permita:
a)	Leer una matriz de 3 filas por 5 columnas.
 1| 2| 3| 4| 5
 6| 7| 8| 9|10
11|12|13|14|15
 
  1| 6|11
  2| 7|12
  3| 8|13
  4| 9|14
  5|10|15
b)	Hallar la fila donde se encuentra el mayor elemento de la matriz.
c)	Hallar la columna donde se encuentra el menor elemento de la matriz.
d)	Imprimir la matriz ingresada y su transpuesta.
*/
//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//constantes globales
#define F 3
#define C 5
//variables globales
char opcion='q';
int matriz[F][C];
int datoEnFila;
int datoEnColum;
//funciones
void imprimir(){
    printf("Matriz ingresada:\n");
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
        printf(" %i ",matriz[i][j]);
    }
    printf("\n");
    }

     printf("Matriz Transpuesta:\n");
    for(int j=0;j<C;j++){
        for(int i=0;i<F;i++){
        printf(" %i ",matriz[i][j]);
    }
    printf("\n");
    }}
void  datoMeColum(){
    int dato=1000;
    int j=0;
    for(int i=0;i<F;i++){
        for(j;j<C;j++){
         if(dato>matriz[i][j]){
            dato=matriz[i][j];
            datoEnColum=j+1;
         }}}
         printf("La Columna con el menor elemento es: %i\n\n",datoEnColum);}
void  datoMaFila(){
    int dato=0;
    int i=0;
    for(i;i<F;i++){
        for(int j=0;j<C;j++){
         if(dato<matriz[i][j]){
            dato=matriz[i][j];
            datoEnFila=i+1;
         }}}
          printf("La Fila con mayor elemento es: %i\n\n",datoEnFila);}
void leerMatriz(){
    printf("Introducir datos en mi matriz de 3x5\n");
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
        printf("fila: %i columna: %i dato: ",i,j);
        scanf("%i",&matriz[i][j]);
    }}}
void menu(){
        switch(opcion){
                case 'a':   leerMatriz();
                break;
                case 'b':   datoMaFila(); //dato mayor en que fila esta?
                break;
                case 'c':   datoMeColum(); //dato menor en que columna esta?
                break;
                case 'd':   imprimir();
                break;
                case 'e':   printf("Salir del Programa");
                break;
        }
        //fflush(stdin);
        getchar();
        }
void introducirOpcion(){
        scanf("%c",&opcion);
        tolower(opcion);
        }

void mensajeMenu(){
        printf("Menu:\n"
        "A- Leer una matriz de 3 filas por 5 columnas \n"
        "B- Hallar la fila donde se encuentra el mayor elemento de la matriz\n"
        "C- Hallar la columna donde se encuentra el menor elemento de la matriz.\n"
        "D- Imprimir la matriz ingresada y su transpuesta.\n"
        "E- Salir\n");}
//inicio del programa
int main(){
        do{
        mensajeMenu();
        introducirOpcion();
        menu();
        }while(opcion!='e');
return 0;
}
