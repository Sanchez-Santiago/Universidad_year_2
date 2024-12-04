#include <iostream>
#include <stdio.h>

#define LEN 5

void cuadrado (int vec[], int cantidad);
void muestra(int vec[], int cantidad);

int main(int argc, char const *argv[])
{
    int vec[]={1,2,3,4,5};

    cuadrado(vec,5);
    muestra(vec, 5);

    return 0;
}


void cuadrado (int vec[], int cantidad)
{
    int valor=vec[0];
    for (int i = 0; i < LEN; i++)
    {
        vec[i]*=vec[i];
    }
    
}

void muestra(int vec[],int cantidad)
{
    
    printf("\nQuedaria de esta forma %s\n\n", vec);
}