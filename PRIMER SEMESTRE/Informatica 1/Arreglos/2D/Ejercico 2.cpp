/*
Desarrollar un algoritmo que arme un arreglo de 10x10 de números aleatorios. 
Una vez cargado el arreglo, el programa deberá mostrar un menú de opciones: 
a. calcular el promedio.
b. solicitar un número y buscar cuantas veces esta ese numero en el arreglo.
c. mostrar sólo los valores pares
d. mostrar todos los valores. 
*/
#include <iostream>
#include <ctime>
#include <string.h>

#define LES 10

void mostrar(int vec[LES][LES], int lim);
void promedio(int vec[LES][LES], int lim);
void buscar(int vec[LES][LES], int lim);
void pares(int vec[LES][LES], int lim);

int main(int argc, char const *argv[])
{
    int v[LES][LES], i=0, j=0, num=0;
    char menu=' ';

    srand(time(NULL));
    for ( i = 0; i < LES; i++)
    {
        for ( j = 0; j< LES; j++)
        {
           v[i][j]=rand()%100;
        }
    }

    do
    {
        printf("\n####### Menu De opciones #######\n");
        printf("Elija las opciones: \na.Promedio\nb.Buscar un num\nc.Mostrar los pares\nd.Mostrar todo\nN.para salir.\n");
        scanf(" %c", &menu);

        switch (menu)
        {
        case 'a':
        case 'A':
            promedio(v, LES);
            break;
        case 'b':
        case 'B':
            buscar(v, LES);
            break;
        case 'c':
        case 'C':
            pares(v, LES);
            break;
        case 'd':
        case 'D':
            mostrar(v, LES);
            break;

        default:
            break;
        }
        
    } while (menu!='N' || menu!='n');
    
    
  

    return 0;
}


void mostrar(int vec[LES][LES], int lim)
{
    int i=0, j=0;
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        for ( j = 0; j<10; j++)
        {
            printf("%d\t", vec[i][j]);
        }
    }
    printf("\n");
}

void promedio(int vec[LES][LES], int lim)
{
    int ii=0, jj=0, suma=0, can=0;
    for ( ii = 0; ii < LES; ii++)
    {
        for ( jj =0 ; jj < LES; jj++)
        {
            suma=suma+vec[ii][jj];
            can++;
        }
    }
    printf("\nEl pormedio de los numeros es: %d\n", (suma/can));
}

void buscar(int vec[LES][LES], int lim)
{
    int ii=0, jj=0, bus=0, incre=0;
    char op=' ';

    do
    {
        printf("\nIngresa el numero que deseas buscar: ");
        scanf("%d", &bus);
        for ( ii = 0; ii < LES; ii++)
        {
            for ( jj = 0; jj < LES; jj++)
            {
                if (bus==vec[ii][jj])
                {
                    incre++;
                }
            }
        }
        if (incre==0)
        {
            printf("\nEste numero no se encuentra en la lista, pruebe con otro.\n");
        }
        else
        {
            printf("\nLa cantidad de vesec que sale el numero son: %d\n", incre);
        }
        incre=0;
        printf("\nDesea ver otro numer? n=no, s=si\n");
        scanf(" %c", &op);
    
    } while (op=='s' || op=='S');    
}

void pares(int vec[LES][LES], int lim)
{
    int ii=0, jj=0, num=0;
    printf("\n");
    for ( ii = 0; ii < LES; ii++)
    {
        for ( jj = 0; jj < LES; jj++)
        {
            num=vec[ii][jj];
           if (num%2==0)
           {
            printf("\t%d", num);
           }
        }
    }
    printf("\n");
}