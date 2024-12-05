/*21)	Se tienen 50 tipos de LEDs con tamaños, colores y potencias distintas (ej: 5mm rojo, 3mm blanco, 5mm azul alta luminosidad, potencia 1W, rgb, etc) en 5 depósitos de componentes electrónicos.
En cada depósito, se mide la luminosidad de cada LED y se registra dicho valor en un sistema. Se desconoce la cantidad de LEDs a ingresar.
Hacer un programa con un menú de opciones que permita:
a)	Almacenar la cantidad de lumens (lm) para cada tipo de LED por cada depósito.
 Validar, en el ingreso, que el tipo de LED esté en el rango de 1 a 50.
b)	Hallar el promedio de luminosidad para cada tipo y depósito de LED.
c)	Hallar el tipo de LED y depósito donde se encuentra la mayor cantidad de mediciones/LEDs.
d)	Salir del programa.
lumen
0|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|16|17|18|19|20|21|22|23|24|25|26|27|28|29|30|31|32|33|34|35|36|37...........|50|
1
2
3
4
5
cantidad de ingreso
0|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|16|17|18|19|20|21|22|23|24|25|26|27|28|29|30|31|32|33|34|35|36|37...........|50|
1
2
3
4
5

*/
//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//constantes globales
#define F 5
#define C 50
//variables globales
char opcion='q';
int mayorDeposito;
int mayorTipo;
int deposito;
int lumen;
int tipo;
int promDeposito[F]={0};
int promTipo[C]={0};
int matrizLumen[F][C]={0};
int matrizCantidad[F][C]={0};
int promedio;
//funciones
void mayorMedicion(){
    int cantidad=0;
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
        if(cantidad<matrizCantidad[i][j]){
           cantidad=matrizCantidad[i][j];
           mayorTipo=j;
           mayorDeposito=i;
        }
    }}}
void promedioLumen(){
    //Por deposito
    int j,i;
    for(i=0;i<F;i++){
        for(j=0;j<C;j++){
            promDeposito[i]+=matrizLumen[i][j];
    }
            promDeposito[i]/=j;
    }
    //Por tipo
      for(j=0;j<C;j++){
       for(i=0;i<F;i++){
            promTipo[j]+=matrizLumen[i][j];
    }
            printf("por tipo %i /= %i: ",promTipo[j]);
            promTipo[j]/=i;
            printf("%i",promTipo[j]);
    }
  
}
void cargarLed(){
    char terminar='p';
   do{
     do{
    printf("Introducir tipo de led?: ");
    scanf("%i",&tipo);
    tipo--;
    }while(tipo<0 || tipo>50);
    do{
    printf("Introducir deposito?: ");
    scanf("%i",&deposito);
    deposito--;
    }while(deposito<0 || deposito>5);
    do{
    printf("Introducir lumen?: ");
    scanf("%i",&lumen);
    }while(lumen<1);

    matrizLumen[deposito][tipo]+=lumen;
    
    printf("Desea terminar de cargar(s/n): ");
    scanf("%c",&terminar);
   }while(terminar!='s');



    }
void menu(){
        switch(opcion){
                case 'a':   cargarLed();
                break;
                case 'b':   promedioLumen();
                break;
                case 'c':   mayorMedicion();
                break;
                case 'd':   printf("Salir del Programa");
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
        "A- Almacenar (lm) por tipo de LED en cada depósito.\n"
        "B- Hallar el promedio de luminosidad para cada tipo y depósito de LED\n"
        "C- Hallar el tipo de LED y depósito donde se encuentra la mayor cantidad de mediciones/LEDs..\n"
        "D- Salir del programa\n");}
//inicio del programa
int main(){
        do{
        mensajeMenu();
        introducirOpcion();
        menu();
        }while(opcion!='d');
return 0;
}