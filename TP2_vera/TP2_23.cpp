/*23)	Hacer un programa que por medio de un menú de opciones nos permita realizar las siguientes acciones:
a)	Ingresar los siguientes datos de un stock de materiales de una cantidad indeterminada de artículos: Código (Según el índice),
 Descripción (30 caracteres), Cantidad y Precio de Compra (que no pueden ser negativos).
b)	Calcular el Precio de Venta de cada artículo que se obtiene calculando un 30% de incremento del Precio de Compra.
c)	Borrar los datos de un artículo determinado, buscarlo por su nombre (Descripción) y mostrar el resultado.
d)	Hacer los listados de los artículos existentes y de los que fueron eliminados, por separado, mostrar todos los datos.
e)	Salir del programa.
*/
//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//constantes globales
#define F 4
#define C 12
//variables globales
//funciones
void stockBorrados(){
    //articulos eliminados
}
void stockDisponibles(){
    //mostrar articulos disponibles
}
void eliminarProducto(){
    //buscar  por nombre
    getchar(); // Limpia el búfer
    //eliminar producto
    //mostrarlo
}
void precioDeVenta(){
    //precio de venta valor + el 30%
}
void cargarStock(){
    do{
        //codigo
        //descripcion
        //cantidad
        //precio <=0
        getchar(); // Limpia el búfer
    }while(continuar!='n');
}
void menu(){
        switch(opcion){
                case 'a':   cargarStock();
                break;
                case 'b':   precioDeVenta();
                break;
                case 'c':   eliminarProducto();
                break;
                case 'd':   stockDisponibles();
                            stockBorrados();
                break;
                case 'e':   printf("Salir del Programa");
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
        "A- Ingresar los siguientes datos de un stock de materiales de una cantidad indeterminada de artículos: Código (Según el índice),"
 "Descripción (30 caracteres), Cantidad y Precio de Compra (que no pueden ser negativos). \n"
        "B- Calcular el Precio de Venta de cada artículo que se obtiene calculando un 30% de incremento del Precio de Compra.\n"
        "C- Borrar los datos de un artículo determinado, buscarlo por su nombre (Descripción) y mostrar el resultado.\n"
        "D- Hacer los listados de los artículos existentes y de los que fueron eliminados, por separado, mostrar todos los datos.\n"
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