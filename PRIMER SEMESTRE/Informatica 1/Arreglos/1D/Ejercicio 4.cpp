/*
Crear un arreglo de 10 números enteros y aleatorios. Luego mostrar los valores pares.
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctime>

#define LES 10

void muestra(int arreglo[LES]);

int main(int argc, char const *argv[])
{
    int arreglo[LES]={0};
    
    srand(time(NULL));
    for(int i=0; i<LES; i++) 
    {
		arreglo[i]=rand()%100+1;
	}

    muestra(arreglo);

    return 0;
}

void muestra(int arreglo[LES])
{
    printf("\nLos numero son: \n");
    for (int ii = 0; ii < LES; ii++)
    {
        if (arreglo[ii]%2==0)
        {
            printf("%d ", arreglo[ii]);
        }else
        {printf(" - ");}
        
    }
    
}

