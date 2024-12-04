/*
Realizar un programa que permita cargar un vector de 20 números enteros de manera aleatoria, 
que representan la cantidad de veces que se tiró una moneda (0=cara y 1=cruz)  Luego, contar 
y mostrar la cantidad de veces que salió cara y la cantidad de veces que salió cruz. 
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctime>

#define LES 20


int main(int argc, char const *argv[])
{
    int vector[LES]={0}, i=0, curz=0, cara=0;

    srand(time(NULL));
    for(int i=0; i<LES; i++) 
    {
		vector[i]=rand()%2;
	}

    for ( i = 0; i < LES; i++)
    {
        if (vector[i]==1)
        {
            curz++;
        }
        if (vector[i]==0)
        {
            cara++;
        }
    }
    
    printf("\nLa cantida de Cara es %d y de Cruz es %d\n", cara,curz);


    return 0;
}
