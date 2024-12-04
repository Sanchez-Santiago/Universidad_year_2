/*
Crear un programa que permita cargar un vector de 10 números enteros aleatorios entre el 15 y 30.
Luego, mostrar los valores en orden inverso al ingresado.
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctime>

#define LES 10


int main(int argc, char const *argv[])
{
    int vector[LES]={0}, i=0, curz=0, cara=0;

    srand(time(NULL));
    for(int i=0; i<LES; i++)
    {
		vector[i]=rand()%16 + 15;

        printf("%d  ", vector[i]);
	}

    for ( i = 9; i >= 0; i--)
    {
        printf("%d  ", vector[i]);
    }



    return 0;
}
