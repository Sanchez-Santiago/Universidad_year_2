/*
4) Se pide escribir un programa que gestione una base de datos para un depósito de productos. 
Cada producto tiene relacionado un código único (número entero mayor que 0), un nombre (cadena de texto) 
y una cantidad de unidades de dicho elemento (entero no signado).

En una primera instancia se cargan los códigos, nombres y cantidades del inventario inicial. 
La carga se finaliza con un producto de código 0.

En una segunda instancia se permite realizar las siguientes operaciones, las cuales se repiten hasta que 
el usuario decide salir del programa:

1) Ingresar: Permite incrementar la cantidad de productos existentes, indicando código del producto y cantidad

2) Retirar: Permite decrementar la cantidad de productos existentes, indicando código del producto y cantidad (No se debe 
permitir retirar más artículos de los que ya existen en el inventario)s

3) Imprimir listado: Imprime el listado completo de artículos ordenados por código de producto (creciente)

4) Imprimir faltantes: Imprime un listado de aquellos productos que no se encuentran en stock (cantidad=0).

En el caso de "Ingresar" y "Retirar" se debe verificar que el código ingresado por el usuario exista en la base de datos, 
caso contrario no se debe continuar con la operación.

Nota: No hay más de 100 tipos de productos diferentes y sus cantidades no superan las 1000 unidades
*/

#include <iostream>
#include <stdio.h>
#include <string.h>

//Declaramos los Define.
#define LES 20
#define CANT 100

//Declaramos los prototipos.
int carga(int *cod, char nom[CANT][LES], int *can, int lim);
void mostrar(int *cod, char nom[CANT][LES], int *can, int lim);
void increm(int *cod, char nom[CANT][LES], int *can, int lim);
void decre(int *cod, char nom[CANT][LES], int *can, int lim);
void sinStok(int *cod, char nom[CANT][LES], int *can, int lim);

int main(int argc, char const *argv[])
{
    int cantidad[CANT], codigo[CANT], ii=0;
    char nombre[CANT][LES], menu=' ';

    ii=carga(codigo, nombre, cantidad, CANT);
    mostrar(codigo, nombre, cantidad,ii);
    
    //Iniciamos el menu usando un do-while con un switch.
    do
    {
        printf("\nQue desea hacer? \na.Incrementar stok \nb.Decrementar stok\nc.Lista completa\nd.Lista sin stok\nn = Finalisar:  ");
        scanf(" %c", &menu);
        switch (menu)
        {
        case 'a':
            increm(codigo, nombre, cantidad,ii);
            break;
        case 'b':
            decre(codigo, nombre, cantidad,ii);
            break;
        case 'c':
            mostrar(codigo, nombre, cantidad,ii);
            break;
        case 'd':
            sinStok(codigo, nombre, cantidad,ii);
            break;
        
        default:
            break;
        }
    } while (menu);
    //finalisamos el menu.

    return 0;
}

//                      ####### Funciones ####### 

//Creamos la fincion para cargar los datos.
int carga(int *cod, char nom[CANT][LES], int *can, int lim)
{
    int i=0;

    printf("\n\nIngresa el Codigo del Produc: ");
    scanf("%d", &cod[i]);

    while (cod[i]!=0)
    {
        
        printf("\n\nIngresa el Nombre del Producto: ");
        scanf(" %s", &nom[i]);
        printf("\n\nIngresa la Cantida en stok: ");
        scanf("%d", &can[i]);
        i++;
        printf("\n\nIngresa el Codigo del Produc: ");
        scanf("%d", &cod[i]);
    }
    return i;
}
//Fin de la funcion de cargar datos.

//Creamos la fincion para mostrar los datos y ordenarlos.
void mostrar(int *cod, char nom[CANT][LES], int *can, int lim)
{
    //declaramos las variables
    int ij=0, i,j,posMin,aux;
    char Aux[LES];

    //ordenamos los dato de forma creciente.
    for(i=0;i<lim-1;i++)
    {
        posMin=i;
        for(j=i+1;j<lim;j++)
        {
            if(cod[j]<cod[posMin])
            {
                posMin=j;
            }
        }
        aux=cod[i];
        cod[i]=cod[posMin];
        cod[posMin]=aux;
        
        strcpy(Aux,nom[i]);
        strcpy(nom[i],nom[posMin]);
        strcpy(nom[posMin],Aux);

        aux=can[i];
        can[i]=can[posMin];
        can[posMin]=aux;
    }

    //mostramos los datos
    for ( ij = 0; ij < lim; ij++)
    {
        printf("\n%d", cod[ij]);
        printf("\n%s", nom[ij]);
        printf("\n%d\n\n", can[ij]);
    }
                
}
//Fin de la funcion mostrar. 

//Creamos la fincion para incrementar los datos.
void increm(int *cod, char nom[CANT][LES], int *can, int lim)
{
    int dd=0, comp=0, incr=0;

    printf("\nIngrese el codigo del producto, 0=salir: ");
    scanf("%d", &comp);
    //Vemos si se encuentra en los datos cargados el codigo.
   for ( dd = 0; dd < lim; dd++)
   {
        if (comp==cod[dd])
        {
            printf("\nIngresa el stok: ");
            scanf("%d", &incr);
            can[dd]=can[dd]+incr;
            printf("\nLe articulo se encontro y fue cambiado su stok\n");
            break;
        }
   }
   //Si no se encuentra en los datos cargados.
   if (dd==lim)
   {
        printf("\nNo se encontro el articulo =(\n");
   }
}
//Fin de la funcion incrementar.


void decre(int *cod, char nom[CANT][LES], int *can, int lim)
{
    int dd=0, comp=0, incr=0;

    printf("\nIngrese el codigo del producto,void decre(int *cod, char nom[CANT][LES], int *can, int lim) 0=salir\n: ");
    scanf("%d", &comp);
   for ( dd = 0; dd < lim; dd++)
   {
    if (comp==cod[dd])
    {
        printf("\nel stok menos: ");
        scanf("%d", &incr);
        if ((can[dd]-incr<0))
        {
            printf("\nNo se pude decrementar mas\n");
        }
        else
        {
            can[dd]=can[dd]-incr;
            printf("\nSe a actualizado el stok\n");    
        }
        break;
    }
   }
   if (dd==lim)
   {
    printf("\nNo se encontro el articulo =(\n");
   }
}

void sinStok(int *cod, char nom[CANT][LES], int *can, int lim)
{
    int jj;
    printf("\nLos articulos sin stok son: \n");
    for (jj = 0; jj < lim ; jj++)
    {
        if (can[jj]==0)
        {
            printf("\nProducto:%s codigo:%d\n", nom[jj], cod[jj]);
        }
    }
}