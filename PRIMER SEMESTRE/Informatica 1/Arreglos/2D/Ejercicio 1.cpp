/*
Crear un programa que arme un arreglo de 5x5 de números aleatorios pares. Luego muestre el arreglo resultante.
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctime>

#define LES 5



int main(int argc, char const *argv[])
{
    int vec[LES][LES]={0}, i=0, j=0, num=0;

    srand(time(NULL));
    for (i = 0; i < LES; i++)
    {
        for ( j = 0; j < LES; j++)
        {
            do
            {
                num=rand()%99;
            } while (num%2!=0);
            vec[i][j]=num;
        }
    }

    printf("Matriz de 5x5 de numeros pares\n\n");
	for(i=0;i<5;i++)
    {
		for(j=0;j<5;j++)
        {
			printf("%d\t",vec[i][j]);
		}
		printf("\n");
	}

    return 0;
}

