/*
Se tiene un vector de 10 elementos con valores numéricos enteros . Luego crear una
función que muestre los valores que están en posiciones impares, y otra función con
las posiciones pares.
*/

#include <iostream>
#include <ctime>

#define LES 10

void mostrar(int []);
void par(int []);
void inpar(int []);


int main(int argc, char const *argv[])
{
    int vector[10]={0},i=0;

    srand(time(NULL));

    for ( i = 0; i < LES; i++)
    {
        vector[i]=rand()%100;
    }
    mostrar(vector);
    par(vector);
    inpar(vector);

    return 0;
}

void mostrar(int v[])
{
    int ii=0;
    printf("\nLos nuemeros del vector en su orden original: ");
    for ( ii = 0; ii < LES; ii++)
    {
        printf(" %d ", v[ii]);
    }
    printf("\n");   
}

void par(int v[])
{
    int j=0;
    printf("\nLos nuemero en la posision par: \n");
    for ( j = 0; j < 10; j++)
    {
        printf(" %d posicion %d\n", v[j], j);
        j++;
    }
    printf("\n");   
    
}

void inpar(int v[])
{
    int j=0;
    printf("\nLos nuemero en la posision inpar: \n");
    for ( j = 1; j < 10; j++)
    {
        printf(" %d posicion %d\n", v[j], j);
        j++;
    }
    printf("\n\n");   
    
}