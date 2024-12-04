/*
Realice un programa que permita cargar 5 números enteros en un vector. 
Luego calcule el promedio de ellos. Finalmente mostrar todos los valores y su promedio.
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LES  5

void Ingresar(int *v);
void mostrar(int *v, int y);
int promedio(int *v);


int main(int argc, char const *argv[])
{
    int vector[LES]={0}, x=0;
    Ingresar(vector);
    x=promedio(vector);
    mostrar(vector, x);


    

    return 0;
}

void Ingresar(int *v)
{
    for (int i = 0; i<LES; i++)
    {
        printf("Ingresa los 5 valores del vector: ");
        scanf(" %s", &v[i]);
        
    }
}

int promedio(int *v)
{
    int suma=0;

    for (int ii = 0; ii < LES; ii++)
    {   
        suma=v[ii]+suma;
    }
    return suma/5;
}

void mostrar(int *v, int y)
{
    for (int j = 0; j < LES; j++)
    {
        printf("\n%s\n", &v[j]);
    }
    printf("\nEl promedi de los numeros anteriores es de %s\n\n", &y);
}
