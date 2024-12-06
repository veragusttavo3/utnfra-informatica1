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
#define F 5 //filas; deposito
#define C 50 //columnas: tipos
//variables globales
char opcion='q';
int mayorDeposito;
int mayorTipo;
int deposito;
int lumen;
int tipo;
int terminar=0;
float promDeposito[F]={0};
float promTipo[C]={0};
int matrizLumen[F][C]={0};
int matrizCantidad[F][C]={0};
float promedio;
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
    }
    }
    printf("Donde hubo mayor medicion fue en el deposito: %i y tipo: %i con %i veces\n",mayorDeposito+1,mayorDeposito+1,cantidad);
    }
void promedioLumen(){
    //Por deposito
    int j,i;
    for(i=0;i<F;i++){
        for(j=0;j<C;j++){
            promDeposito[i]+=matrizLumen[i][j];
    }
            printf("total deposito %i: %.2f / %i = ",i,promDeposito[i],F);
            promDeposito[i]/=F;
            printf("%.2f\n\n",promDeposito[i]);
    }
    //Por tipo
      for(j=0;j<C;j++){
       for(i=0;i<F;i++){
            promTipo[j]+=matrizLumen[i][j];
    }

            printf("\ntotal tipo %i: %.2f / %i: ",j,promTipo[j],C);
            promTipo[j]/=C;
            printf("%.2f\n",promTipo[j]);
    }
  
}
void cargarLed(){
   while(terminar!=1){
        tipo=-1;
        deposito=-1;
        lumen=-1;
    while(tipo<0 || tipo>C){
    printf("Introducir tipo de led?: ");
    scanf("%i",&tipo);
    tipo--;
    };
    while(deposito<0 || deposito>F){
    printf("Introducir deposito?: ");
    scanf("%i",&deposito);
    deposito--;
    };
    while(lumen<1){
    printf("Introducir lumen?: ");
    scanf("%i",&lumen);
    };

    matrizLumen[deposito][tipo]+=lumen;
    matrizCantidad[deposito][tipo]++;
    
    printf("Desea terminar de cargar (1-si|2-no): ");
    scanf("%i",&terminar);
    
   };



    }
void imprimirMatriz(){
        for(int i=0;i<F;i++){
                for(int j=0;j<C;j++){
                        printf(" %i ",matrizLumen[i][j]);
                }
                printf("\n");
        }
        printf("\n\nMatriz cantidad\n\n");
                for(int i=0;i<F;i++){
                for(int j=0;j<C;j++){
                        printf(" %i ",matrizCantidad[i][j]);
                }
                printf("\n");
        }
}
void menu(){
        switch(opcion){
                case 'a':   cargarLed();
                           imprimirMatriz();
                           terminar=0;
                break;
                case 'b':   promedioLumen();
                break;
                case 'c':   mayorMedicion();
                break;
                case 'd':   printf("Salir del Programa");
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