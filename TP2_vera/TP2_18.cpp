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
float aux;
int menor[X];
int mayor[X];
int alumLeg[X];
char opcion='q';
float alumAlt[X];
float promAltura;
float datoMayor=0;
float diferenciaAlt;
float datoMenor=100;
int contIndicesMayor=0;
int contIndicesMenor=0;
//funciones
void vector(){
        for(int i=0;i<sizeof(alumAlt)/4;i++){
             printf(" %.2f ",alumAlt[i]);
             }
             }
void ordenamientoBurbuja(){
        for(int i=0;i<sizeof(alumAlt)/4;i++){
        for(int j=0;j<(sizeof(alumAlt)/4)-1;j++){ 
            //vector();
            //printf("\n\nEl numero %.2f > numero %.2f?\n\n",alumAlt[j],alumAlt[j+1]);
           if(alumAlt[j]>alumAlt[j+1]){
                printf("cambio\n");

                aux=alumAlt[j];
                alumAlt[j]=alumAlt[j+1];
                alumAlt[j+1]=aux;
                aux=alumLeg[j];
                alumLeg[j]=alumLeg[j+1];
                alumLeg[j+1]=aux;
               }else if(alumAlt[j]==alumAlt[j+1]){
                        if(alumLeg[j]>alumLeg[j+1]){
                              aux=alumLeg[j];
                              alumLeg[j]=alumLeg[j+1];
                              alumLeg[j+1]=aux;  
                        }
               }
               }
               }
               }
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
        //ordenar
       ordenamientoBurbuja();
     for(int i=0;i<X;i++){
        printf("legajo: %i y altura: %.2f\n",alumLeg[i],alumAlt[i]);
        }
}
void altMenor(){
    for(int i=0;i<X;i++){
        if(datoMenor>alumAlt[i]){
            datoMenor=alumAlt[i];
            menor[0]=i;
            contIndicesMenor=0;
        }else if(datoMenor==alumAlt[i]){
                menor[contIndicesMenor++]=i;
        }
        }
        for(int i=0;i<=contIndicesMenor;i++){
        printf("El menor con: %.2fm y legajo: %i\n\n",datoMenor,alumLeg[menor[i]]);
        }
}
void altMayor(){
    for(int i=0;i<X;i++){
        if(datoMayor<alumAlt[i]){
            datoMayor=alumAlt[i];
            mayor[0]=i;
            contIndicesMayor=0;
        }else if(datoMayor==alumAlt[i]){
                mayor[contIndicesMayor++]=i;
        }
        }
        for(int i=0;i<=contIndicesMayor;i++){
        printf("El mayor con: %.2fm y legajo: %i\n\n",datoMayor,alumLeg[mayor[i]]);
        }
}
void cargarAlumnos(){
        for(int i=0;i<X;i++){
        do{
        printf("Ingrese Legajo del alumno %i del curso de Informatica I(4 digitos): ",(i+1));
        scanf("%i",&alumLeg[i]);
        }while (alumLeg[i] < 1000 || alumLeg[i] > 9999);

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
