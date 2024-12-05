/*20)	Se tienen 3 matrices de leds de 4x4, se desea escribir el mensaje a continuación en pantalla (UTN):
*     *	* * * *	*     *
*     *	  * *  	* *   *
*     *	  * *  	*   * *
* * * *	  * *  	*     *
 1| 2| 2| 1| 1| 1| 1| 1| 1| 2| 2| 1|
 1| 2| 2| 1| 2| 1| 1| 2| 1| 1| 2| 1|
 1| 2| 2| 1| 2| 1| 1| 2| 1| 2| 1| 1|
 2| 1| 1| 2| 2| 1| 1| 2| 1| 2| 2| 1|
 
Nota: usar cualquier carácter para escribir el mensaje  tanto de la tabla ASCII como de la tabla ASCII extendida.
*/
//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//constantes globales
#define F 4
#define C 12
//variables globales
int matriz[F][C];
int matriz1[F][C]={1,2,2,1,1,1,1,1,1,2,2,1,
                   1,2,2,1,2,1,1,2,1,1,2,1,
                   1,2,2,1,2,1,1,2,1,2,1,1,
                   2,1,1,2,2,1,1,2,1,2,2,1};
//funciones
void imprimir(){
    printf("Matriz:\n");
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
            if(matriz1[i][j]==1){
                printf(" * ");
            }else{
                printf("   ");
            }
    }
    printf("\n");
    } 
}
void leerMatriz(){
    printf("Introducir datos en mi matriz de 4x12\n");
    for(int j=0;j<C;j++){
        for(int i=0;i<F;i++){
        printf("fila: %i columna: %i dato: ",(i+1),(j+1));
        scanf("%i",&matriz[i][j]);
    }}}


void mensajeMenu(){
        printf("Menu:\n"
        "A- Leer una matriz de 4 filas por 12 columnas \n");}
//inicio del programa
int main(){
        mensajeMenu();
       // leerMatriz();
        imprimir();
        
return 0;
}