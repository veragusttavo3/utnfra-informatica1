/*26)	Modificar el ejercicio 1 para que el menú de opciones se imprima mediante la llamada de una función de nombre imprimir_menu*/
//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//variables globales
char opc='p';
float numLegajo;
float altura;
float alumAltura[40];
float alumLegajo[40];
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
       /* printf("Menu:\n"
        "A- Leer Fichas\n"     (modificado)
        "B- El mas alto?\n"
        "C- Salir\n");*/ 
        imprimir_menu();      //reemplazo
        fflush(stdin);
        scanf("%c",&opc);
        tolower(opc);
        getchar(); // Limpia el búfer
        switch(opc){
                case 'a':   for(int i=0;i<40;i++){
                                printf("Ingrese Numero de legajo: ");
                                scanf("%f",&numLegajo);
                                printf("ingrese la altura (ej: 1.35 )m: ");
                                scanf("%f",&altura);
                                alumLegajo[i]=numLegajo;
                                alumAltura[i]=altura;
                                }
                break;
                case 'b':       
                                for(int i=0;i<40;i++){
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