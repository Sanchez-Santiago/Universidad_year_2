/*
Escribir un programa que declare e inicialice una variable del tipo float n=5/2. 
Luego imprima el resultado de la división, la misma debería ser 2,5.
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    float variable=5/2.0;
    float *puntero;

    puntero= &variable;

    printf("\n%f\n\n", *puntero);
    return 0;
}
