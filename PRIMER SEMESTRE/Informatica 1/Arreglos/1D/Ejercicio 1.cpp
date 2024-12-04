/*
Se tiene un vector de 5 elementos con valores numéricos enteros. 
Luego mostrar los valores que están en posiciones impares.
*/

#include <iostream>
#include <stdio.h>
#include <string.h>

#define LES  5

void Ingresar(int *v);
void mostrar(int *v);
void inpar(int *v);


int main(int argc, char const *argv[])
{
    int vector[LES]={0};
    Ingresar(vector);
    inpar(vector);
    //mostrar(vector);

    

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

void inpar(int *v)
{
    for (int ii = 0; ii < LES; ii++)
    {
        if (v[ii]%2!=0)
        {
            printf("\nEl Numero %s es inpar\n", &v[ii]);
        }
        /*else
        {
            printf("\nEl Numero %s es par\n", &v[ii]);
        }*/
        
        
    }
    
}

void mostrar(int *v)
{
    for (int j = 0; j < LES; j++)
    {
        printf("\n%s\n", &v[j]);
    }
}
