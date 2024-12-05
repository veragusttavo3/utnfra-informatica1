/*22)	Un profesor de matemática de un establecimiento educativo registra de un total de 30 alumnos, su Nº de legajo, nombre y promedio de notas. Según el promedio, mediante un menú de opciones, desea conocer el Nº de legajo y nombre de los alumnos que:
a)	Lograron la aprobación directa (promedio mayor o igual a 6).
b)	Deben dar el examen final (promedio menor a 6 y mayor o igual a 4)
c)	Deben recursar la materia (promedio menor a 4). 
d)	Indicar cuántos alumnos obtuvieron la aprobación directa, dan final o recursan.
e)	Salir del programa.
*/
//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//constantes globales
#define alumnos 30
#define caracteres 50
//variables globales
char opcion='q';
int aproDirecta=0;
int darFinal=0;
int recursan=0;
int promAlum[alumnos]={2,3,4,2,4,5,6,5,5,4,6,7,5,4,3,4,6,7,8,7,6,8,6,5,4,3,6,7,8,9};
int legajoAlum[alumnos]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
char nombreAlum[alumnos][caracteres]={"Lucas","Maria"};
//funciones  m5
void imprimirDetalles(){
    for(int i=0;i<strlen(aproDirecta);i++){
        printf("Aprobacion directa: %i alumnos\n",aproDirecta);
        printf("Dar final: %i alumnos\n",darFinal);
        printf("Resursan: %i alumnos\n",recursan);
    }
}
void recursantes(){
    int j=0;
    for(int i=0;i<alumnos;i++){
    if(promAlum[i]<4){
        //recursan
        printf("N° de Legajo: %i nombre: %s promedio: %i\n",legajoAlum[i],nombreAlum[i],promAlum[i]);
        recursan++;
    }}
}
void promedioEntre6y3(){
    
    for(int i=0;i<alumnos;i++){
    if(promAlum[i]<6 && promAlum[i]>=4){
        //examen
        printf("N° de Legajo: %i nombre: %s promedio: %i\n",legajoAlum[i],nombreAlum[i],promAlum[i]);
        darFinal++;
    }}
}
void promedioMayorA6(){

    for(int i=0;i<alumnos;i++){
    if(promAlum[i]>6){
        //aprobaron
        printf("N° de Legajo: %i nombre: %s promedio: %i\n",legajoAlum[i],nombreAlum[i],promAlum[i]);
        aproDirecta++;
    }}
}
void menu(){
        switch(opcion){
                case 'a':   promedioMayorA6();
                break;
                case 'b':   promedioEntre6y3();
                break;
                case 'c':   recursantes();
                break;
                case 'd':   imprimirDetalles();
                break;
                case 'e':   printf("Salir del Programa");
                break;
                default:    printf("Elije de nuevo");
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
        "A- Lograron la aprobación directa (promedio mayor o igual a 6)\n"
        "B- Deben dar el examen final (promedio menor a 6 y mayor o igual a 4)\n"
        "C- Indicar cuántos alumnos obtuvieron la aprobación directa, dan final o recursan.\n"
        "D- Salir del programa\n");}
//inicio del programa
int main(){
    //cargar datos del alumno para probar
        do{
        mensajeMenu();
        introducirOpcion();
        menu();
        }while(opcion!='d');
return 0;
}