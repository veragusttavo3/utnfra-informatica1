/*18)	Se debe hacer un programa que mediante un menú de opciones nos permita realizar las siguientes acciones:
a)	Ingresar el número de legajo (debe tener 4 dígitos) y la altura de los 40 alumnos de un curso de Informática I. 
b)	Averiguar cuál es la mayor y menor altura que tienen los estudiantes (puede haber más de uno para ambos casos), indicar cuales son.
c)	Hacer un listado ordenado de menor a mayor por la altura de los estudiantes, mostrar el legajo y la altura correspondiente.
d)	Mostrar el promedio de la altura de los estudiantes y la diferencia entre la altura mayor con la menor.
e)	Salir del programa.
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
void diferenciaAltMaMe(){
    diferenciaAlt=datoMayor-datoMenor;
    printf("\nLa diferncia entre el mayor y menor es de: %.2fm\n",diferenciaAlt);
}
void promedioAlt(){
    int i=0;
    for(i;i<X;i++){
      promAltura+=alumAlt[i];
    }
    promAltura/=i;
    printf("El promedio de altura es: %.2fm",promAltura);
}
void imprMenorMayor(){
     for(int i=0;i<X;i++){
        printf("legajo: %i y altura: %.2f\n",alumLeg[i],alumAlt[i]);
        }
        system("pause");
}
void altMenor(){
    for(int i=0;i<X;i++){
        if(datoMenor>alumAlt[i]){
            datoMenor=alumAlt[i];
            menor=i;
        }
        }
        printf("El menor con: %.2fm y legajo: %i\n\n",datoMenor,alumLeg[menor]);
}
void altMayor(){
    for(int i=0;i<X;i++){
        if(datoMayor<alumAlt[i]){
            datoMayor=alumAlt[i];
            mayor=i;
        }
        }
        printf("El mayor con: %.2fm y legajo: %i\n\n",datoMayor,alumLeg[mayor]);
}
void cargarAlumnos(){
        for(int i=0;i<X;i++){
        printf("Ingrese Legajo del alumno %i del curso de Informatica I(4 digitos): ",(i+1));
        scanf("%i",&alumLeg[i]);
        printf("Ingrese Altura del alumno %i del curso de Informatica I(metros): ",(i+1));
        scanf("%f",&alumAlt[i]);}
        }

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
        }

void mensajeMenu(){
        printf("Menu:\n"
        "A- Ingresar legajo (4 digitos) y la altura del curso de Informatica I. \n"
        "B- indicar altura mayor y menor y quienes son\n"
        "C- mostrar el legajo y la altura correspondiente de menor A Mayor por altura.\n"
        "D- Mostrar el promedio y diferencia de altura entre mayor y menor\n"
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
