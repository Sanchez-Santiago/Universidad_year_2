/*
Realice un programa que permita cargar el abecedario en un vector. Luego muestre el abecedario ingresado.
*/

#include <iostream>
#include <stdio.h>
#include <string.h>

#define LES  5

void Ingresar(char *v);
void mostrar(char *ve);


int main(int argc, char const *argv[])
{
    char vector[LES]={' '};
    Ingresar(vector);
    mostrar(vector);

    

    return 0;
}

void Ingresar(char *v)
{
    for (int i = 0; i<LES; i++)
    {
        printf("Ingresa los 5 valores del vector: ");
        scanf(" %s", &v[i]);
        
    }
}

void mostrar(char *ve)
{
    printf("\nLas letras ingresadas son: \n");
    for (int j = 0; j < LES; j++)
    {
        printf("\n%c\n\n", ve[j]);
    }
}
