/*Crear un programa en la cual contenga un menú de opciones con distintas
operaciones:
a. Reserva de memoria e introducción de datos enteros
b. Agregar reserva de memoria e introducción de nuevos datos enteros
c. Mostrar los datos en el orden y orden invertido al que fueron introducidos*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void reserva(int *, int);
int plus(int *, int *, int);
void mostrar(int *, int *, int, int);

int main(int argc, char const *argv[])
{
    int *dato=NULL, *dato_plus=NULL, can=0, m=0;
    char op=' ';
    printf("\n\nElije la opcion que deseas hacer: \n");
    printf("a. Reserva de memoria e introducción de datos enteros\nB. Agregar reserva de memoria e introducción de nuevos datos enteros\nC. Mostrar los datos en el orden y orden invertido al que fueron introducidos\nS.Salir\n");
    scanf(" %c", &op);
    do
    {
        switch (op)
        {
        case 'a':
        case 'A':
        printf("\nIngresa la cantidad de datos que deseas reservar: ");
        scanf("%d", &can);

        dato=(int*)malloc(can*sizeof(int));

        if (dato==NULL)
        {
            printf("\nError al guardar memoria\n");
            exit(1);
        }
            reserva(dato, can);
            break;
        case 'b':
        case 'B':
            m=plus(dato, dato_plus, can);
            break;
        case 'c':
        case 'C':
            mostrar(dato, dato_plus, can, m);
            break;
        
        default:
            break;
        }

        printf("\n\nElije la opcion que deseas hacer: \n");
        printf("a. Reserva de memoria e introducción de datos enteros\nB. Agregar reserva de memoria e introducción de nuevos datos enteros\nC. Mostrar los datos en el orden y orden invertido al que fueron introducidos\nN.Seguir\n");
        scanf(" %c", &op);
    } while (op =='n' || op!='N' );
    free(dato);
    
    

    return 0;
}

void reserva(int *dato, int can)
{
    int i=0;
    do
    {
        printf("\nIngresa el dato %d: ", i+1);
        scanf("%d", &dato[i]);
        printf("\n");
        i++;
    } while (i<can);
    return;
    
        
    
    
    
}
int plus(int *dato, int *plus, int can)
{
    int ii=0, mas=0;
    printf("\nCuanta memoria deseas agregar: ");
    scanf("%d", &mas);
    plus=(int*)realloc(dato,mas*sizeof(int));
    if (plus==NULL)
        {
            printf("\nError al guardar memoria\n");
            exit(1);
        }

    for ( ii = 0; ii < mas; ii++)
    {
        printf("\nIngrese el valor %d", ii+1+can);
        scanf("%d", &plus[ii+can]);
    }

    return mas;
}

void mostrar(int *dato, int *plus, int can, int mas)
{
    int j=0;
    printf("\nLa lista principal:");
    for ( j = 0; j < can; j++)
    {
        printf("%d", dato[j]);
    }
    printf("\nLa lista modificada:");
    for ( j = 0; j < can+mas; j++)
    {
        printf("%d", plus[j]);
    }
    
    printf("\nLa lista modificada al reves:");
    for ( j = can+mas; j > 0; j--)
    {
        printf("%d", plus[j]);
    }
}