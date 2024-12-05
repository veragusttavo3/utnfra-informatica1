//enunciado
/*
17)	Mediante un menú de opciones realizar las siguientes acciones (respetar el tipo de opción y las acciones que se deben realizar en cada una de ellas):
a)	Ingresar las edades de los 30 alumnos de un curso.
b)	Armar un vector con aquellas que sean mayores de edad, debiéndose guardar además la posición del subíndice que fueron guardados. Notar que no se sabe cuántas posiciones tendrá el vector, a lo sumo 30 si todos fueran mayores a 18 (se debe utilizar un contador adicional). 
c)	Finalmente se realiza un listado con todos los resultados obtenidos. 
d)	Salir del programa.
*/
//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//constantes globales
#define X 30
//variables globales
char opcion='q';
int j=0;
int alumEdades[X];
int alumMayores[X];
//funciones
void imprimirAlumMayores(){
        system("cls");
        printf("Hubieron %i alumnos mayores\n",j);
        for(int i=0;i<j;i++){
                printf("El alumno %i es mayor con %ianios\n",(alumMayores[i]+1),alumEdades[alumMayores[i]]);
        }
        system("pause");
}
void separarAdultos(){
        for(int i=0;i<X;i++){
        if(alumEdades[i]>18){
                alumMayores[j]=i;
                j++;

        }}}
void cargarEdades(){
                        for(int i=0;i<X;i++){
                         printf("Ingrese edad del alumno %i del curso: ",(i+1));
                         scanf("%i",&alumEdades[i]);}}
void menu(){
        switch(opcion){
                case 'a':   cargarEdades();
                break;
                case 'b':   separarAdultos();
                break;
                case 'c':   imprimirAlumMayores();
                break;
                case 'd':   printf("Salir del Programa");
                break;
        }}
void introducirOpcion(){
        fflush(stdin);
        scanf("%c",&opcion);
        tolower(opcion);
        getchar(); // Limpia el búfer
        system("cls");}
void mensajeMenu(){
        printf("Menu:\n"
        "A- Ingresar edades\n"
        "B- mayores\n"
        "C- imprimir resultados\n"
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
