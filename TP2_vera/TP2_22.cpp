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
#define alumnos 3
#define caracteres 50
//variables globales
char opcion='q';
int aproDirecta=0;
int darFinal=0;
int recursan=0;
int promAlum[alumnos]={0};
int legajoAlum[alumnos]={0};
char nombreAlum[alumnos][caracteres];
//funciones  m5
void imprimirDetalles(){
    for(int i=0;i<sizeof(aproDirecta)/4;i++){
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
        printf("Num de Legajo: %i nombre: %s promedio: %i\n",legajoAlum[i],nombreAlum[i],promAlum[i]);
        recursan++;
    }}
}
void promedioEntre6y3(){
    for(int i=0;i<alumnos;i++){
    if(promAlum[i]<6 && promAlum[i]>=4){
        //examen
        printf("Num de Legajo: %i nombre: %s promedio: %i\n",legajoAlum[i],nombreAlum[i],promAlum[i]);
        darFinal++;
    }}
}
void promedioMayorA6(){

    for(int i=0;i<alumnos;i++){
    if(promAlum[i]>=6){
        //aprobaron
        printf("Num de Legajo: %i nombre: %s promedio: %i\n",legajoAlum[i],nombreAlum[i],promAlum[i]);
        aproDirecta++;
    }}
}
void cargarAlumnos(){
    printf("Cargar alumnos;\n");
    for(int i=0;i<alumnos;i++){
        //n° de legajo
    printf("Numero de legajo: ");
    scanf("%i",&legajoAlum[i]);
    //nombre
    printf("Nombre: ");
    scanf("%s",nombreAlum[i]);
    //promedio
    printf("Promedio: ");
    scanf("%i",&promAlum[i]);
    }
}
void menu(){
        switch(opcion){
                case 'a':   cargarAlumnos();
                            promedioMayorA6();
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
        }
        getchar(); // Limpia el búfer
        }
void introducirOpcion(){
        scanf("%c",&opcion);
        tolower(opcion);
        
        }
void mensajeMenu(){
        printf("Menu:\n"
        "A- Lograron la aprobacion directa (promedio mayor o igual a 6)\n"
        "B- Deben dar el examen final (promedio menor a 6 y mayor o igual a 4)\n"
        "c- Deben recursar la materia (promedio menor a 4).\n"
        "D- Indicar cuantos alumnos obtuvieron la aprobacion directa, dan final o recursan.\n"
        "E- Salir del programa\n");}
//inicio del programa
int main(){
    //cargar datos del alumno para probar
        do{
        mensajeMenu();
        introducirOpcion();
        menu();
        }while(opcion!='e');
return 0;
}