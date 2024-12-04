#include <iostream>
#include <stdio.h>

void modificar(int *p, int x)
{
    printf("La direccion de memoria de la variable es %p", p);
    printf("El valor actual de la variable es: %d", *p);
    *p=x;

}