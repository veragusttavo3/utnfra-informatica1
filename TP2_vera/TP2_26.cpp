/*26)	Modificar el ejercicio 1 para que el menú de opciones se imprima mediante la llamada de una función de nombre imprimir_menu*/
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
//funciones
void imprimir_menu(){
    printf("Menu:\n"
        "A- Leer Fichas\n"  
        "B- El mas alto?\n"
        "C- Salir\n");
}
//inicio del programa
int main(){

   do{
        imprimir_menu();      //reemplazo
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
                getchar(); // Limpia el búfer
   }while(opc!='c');
return 0;
}