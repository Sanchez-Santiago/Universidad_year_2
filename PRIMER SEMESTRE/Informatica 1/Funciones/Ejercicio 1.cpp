/*
Escribir un programa que ingrese un número y llame a una función en la cual 
determine si un número es o no par. (La función debe devolver el valor)
*/

#include <iostream>
#include <stdio.h>

void parINpar(int a);

int main(int argc, char const *argv[])
{
    int num1=0;
    printf("\nIngrese un numero para saber si es iunpar o par: ");
    scanf("%d", &num1);

    parINpar(num1);

    return 0;
}

void parINpar(int a)
{
    if (a%2==0)
    {
        printf("\nEl numero es par\n\n");
    }
    else
    {
        printf("\nEl numero es inpar\n\n");
    }
    
}