/*25)	Escribir una función llamada absoluto que reciba un número entero y devuelva su valor absoluto.*/
//bibliotecas
#include<stdio.h>
#include<stdlib.h> //necesario
#include<string.h>
#include<ctype.h>
#include<math.h>
//constantes globales
//variables globales

//funciones
int  absoluto(int n){

     n= abs(n);
     return n;
   
}
//inicio del programa
int main(){
    int x,valor;
    //introducir un numero
    printf("introducir valor: ");
    scanf("%i",&x);
    //buscar su absoluto
    valor= absoluto(x);
    //imprimir su absoluto
    printf("valor absoluto de %i es: %i",x,valor);
    //otro numero? 
return 0;
}
