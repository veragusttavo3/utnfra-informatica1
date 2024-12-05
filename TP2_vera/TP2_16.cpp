//enunciad0
/*Mediante un menú opciones realizar las siguientes acciones 
(respetar el tipo de opción y las acciones que se deben
 realizar en cada una de ellas):
a)Leer fichas que contienen cada una dos datos, el número de legajo y 
la altura de los 40 alumnos de un curso de Informática
 (se deben armar dos vectores). 
b)Hallar la mayor altura y a que alumno corresponde,
 mostrar el resultado hallado. 
c)Salir del programa.*/
//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//variables constantes
#define X 4
//variables globales
char opc='p';
float numLegajo;
float altura;
float alumAltura[X];
float alumLegajo[X];
int mayor=0;
//inicio del programa
int main(){

   do{
        printf("Menu:\n"
        "A- Leer Fichas\n"
        "B- El mas alto?\n"
        "C- Salir\n");
        fflush(stdin);
        scanf("%c",&opc);
        tolower(opc);
        switch(opc){
                case 'a':   for(int i=0;i<X;i++){
                                printf("Ingrese Numero de legajo: ");
                                scanf("%f",&numLegajo);
                                printf("ingrese la altura (ej: 1.35 )m: ");
                                scanf("%f",&altura);
                                alumLegajo[i]=numLegajo;
                                alumAltura[i]=altura;
                                }
                break;
                case 'b':       
                                for(int i=0;i<X;i++){
                                        if(mayor<alumAltura[i]){
                                                mayor=i;
                                        }
                                }
                                printf("El alumno mas alto es del legajo"
                                 " %.1f y altura de %.1fm\n",alumLegajo[mayor],alumAltura[mayor]);
                                 system("pause");
                break;
                case 'c': printf("Salir del Programa");
                break;
                }
        system("cls");
   }while(opc!='c');
return 0;
}