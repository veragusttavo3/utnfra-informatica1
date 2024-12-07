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
#include <stdio.h>
#include <string.h>

#define MAX_ARTICULOS 2

struct Articulo {
    int codigo;
    char descripcion[30];
    int cantidad;
    float precioCompra;
    float precioVenta;
    int eliminado;
};
struct Articulo stock[MAX_ARTICULOS];
    int numArticulos = 0;
    char opcion;
//constantes globales
//variables globales
//funciones
void stockBorrados(){
    //articulos eliminados
    printf("\n--- Listado de artículos eliminados ---\n");
                for (int i = 0; i < numArticulos; i++) {
                    if (stock[i].eliminado) {
                        printf("Código: %d\n", stock[i].codigo);
                        printf("Descripción: %s\n", stock[i].descripcion);
                        printf("Cantidad: %d\n", stock[i].cantidad);
                        printf("Precio de Compra: %.2f\n", stock[i].precioCompra);
                        printf("Precio de Venta: %.2f\n", stock[i].precioVenta);
                        printf("--------------------\n");
                    }
                }
}
void stockDisponibles(){
    //mostrar articulos disponibles
     printf("\n--- Listado de artículos existentes ---\n");
                for (int i = 0; i < numArticulos; i++) {
                    if (!stock[i].eliminado) {
                        printf("Código: %d\n", stock[i].codigo);
                        printf("Descripción: %s\n", stock[i].descripcion);
                        printf("Cantidad: %d\n", stock[i].cantidad);
                        printf("Precio de Compra: %.2f\n", stock[i].precioCompra);
                        printf("Precio de Venta: %.2f\n", stock[i].precioVenta);
                        printf("--------------------\n");
                    }
                }
}
void eliminarProducto(){
    //buscar  por nombre
    char nombreArticulo[30];
                int encontrado = 0;

                printf("Ingrese la descripción del artículo a borrar: ");
                fgets(nombreArticulo, 30, stdin);
                nombreArticulo[strcspn(nombreArticulo, "\n")] = '\0';

                for (int i = 0; i < numArticulos; i++) {
                    if (!stock[i].eliminado && strcmp(stock[i].descripcion, nombreArticulo) == 0) {
                        stock[i].eliminado = 1;
                        encontrado = 1;
                        printf("Artículo borrado correctamente.\n");
                        break;
                    }
                }
    getchar(); // Limpia el búfer
    //eliminar producto
    //mostrarlo
}
void precioDeVenta(){
    //precio de venta valor + el 30%
    for (int i = 0; i < numArticulos; i++) {
                    if (!stock[i].eliminado) {
                        stock[i].precioVenta = stock[i].precioCompra * 1.30;
                        printf("El precio de venta del artículo %d es: %.2f\n", stock[i].codigo, stock[i].precioVenta);
                    }
                }
}
void cargarStock(){
    do{
        if (numArticulos < MAX_ARTICULOS) {
                    stock[numArticulos].codigo = numArticulos + 1;
                    printf("Ingrese la descripcion del articulo (maximo 30 caracteres): ");
                    fgets(stock[numArticulos].descripcion, 30, stdin);
                    stock[numArticulos].descripcion[strcspn(stock[numArticulos].descripcion, "\n")] = '\0';
                    
                    do {
                        printf("Ingrese la cantidad: ");
                        scanf("%d", &stock[numArticulos].cantidad);
                        if (stock[numArticulos].cantidad < 0) {
                            printf("La cantidad no puede ser negativa. Intente de nuevo.\n");
                        }
                    } while (stock[numArticulos].cantidad < 0);
                    
                    do {
                        printf("Ingrese el precio de compra: ");
                        scanf("%f", &stock[numArticulos].precioCompra);
                        if (stock[numArticulos].precioCompra < 0) {
                            printf("El precio de compra no puede ser negativo. Intente de nuevo.\n");
                        }
                    } while (stock[numArticulos].precioCompra < 0);

                    stock[numArticulos].eliminado = 0;
                    numArticulos++;
                    printf("Articulo ingresado correctamente.\n");
        //codigo
        //descripcion
        //cantidad
        //precio <=0
        getchar(); // Limpia el búfer
        }
    }while(numArticulos < MAX_ARTICULOS);
    
    };
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
        "A- Ingresar los siguientes datos de un stock de materiales de una cantidad indeterminada de artículos: Codigo (Segun el indice),"
 "Descripción (30 caracteres), Cantidad y Precio de Compra (que no pueden ser negativos). \n"
        "B- Calcular el Precio de Venta de cada artículo que se obtiene calculando un 30porciento de incremento del Precio de Compra.\n"
        "C- Borrar los datos de un articulo determinado, buscarlo por su nombre (Descripción) y mostrar el resultado.\n"
        "D- Hacer los listados de los articulos existentes y de los que fueron eliminados, por separado, mostrar todos los datos.\n"
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