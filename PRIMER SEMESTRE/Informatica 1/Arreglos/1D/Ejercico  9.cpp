/*
Realizar un programa que permita cargar un vector de 10 números enteros pares de manera aleatoria. 
Luego, mostrar la cantidad de valores impares que salieron pero que no se guardaron en el vector 
y mostrar el los 10 valores pares que salieron.
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctime>

#define LES 10


int main(int argc, char const *argv[])
{
    int num[LES]={0}, i=0, numAux=0, can=0;
    bool go=false;

    srand(time(NULL));
    for(int i=0; i<LES; i++) 
    {
        do
        {
            numAux=rand()%100;
            if (numAux%2==0)
            {
                num[i]=numAux;
                go=true;
            }
            else
            {
                can++;
            }
        } while (go==false);
        go=false; 
	}

    printf("\nLos pares son:\n");
    for ( i = 0; i < LES; i++)
    {
        printf("%d ", num[i]);
    }
    
    printf("\n\nLa cantidad de impares: %d\n", can);

    return 0;
}
