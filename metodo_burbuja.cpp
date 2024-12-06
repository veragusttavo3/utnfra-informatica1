/*metodo burbuja: Es un sencillo algoritmo de ordenamiento.
Funciona revisando cada elemento de la lista que va a ser ordenada
con el siguiente, intercambiandolos de posicion si estan en el orden
equivocado. Es necesario revisar varias veces toda la lista hasta 
que no se necesiten mas intercambios, lo cual significa que la lista
esta ordenada*/
//biblioteca
#include<stdio.h>
int numeros[]={4,2,1,6}; //cada elemento vale 4bytes
int i,j,aux=0;
void vector(){
        for(int t=0;t<sizeof(numeros)/4;t++){
             printf(" %d ",numeros[t]);}}
void ordenamientoBurbuja(){
        for(i=0;i<sizeof(numeros)/4;i++){
        for(j=0;j<(sizeof(numeros)/4)-1;j++){ 
            vector();
            printf("\n\nEl numero %d > numero %d?\n\n",numeros[j],numeros[j+1]);
           if(numeros[j]>numeros[j+1]){
                printf("cambio\n");
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux;
               }}}}
main(){
    printf("tamanio del array es: %d\n\n",sizeof(numeros)/4); 
    ordenamientoBurbuja();
    return 0;
}