/*
Escribir un programa que declare una variable llamada a, un puntero del tipo 
de la variable creada, inicialice la variable e inicialice el puntero para que 
apunte a la variable creada. Luego que imprima por pantalla: la dirección de 
memoria de la variable, el valor que almacena la variable, el valor del puntero y 
el valor al que apunta el puntero.
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    int a=5, *puntero=0;
    puntero=&a;

    printf("\nLa dirección de memoria de la variable es : %p\n", &a);
    printf("\nEl valor que almacena la variable : %d\n", a);
    printf("\nEl valor del puntero : %d\n", puntero);
    printf("\nEl valor al que apunta el puntero: : %d\n\n", *puntero);

    return 0;
}
