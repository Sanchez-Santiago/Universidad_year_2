/*
Escribir una función que intercambie el valor de dos variables enteras usando punteros. La función debe tener la
 siguiente firma: void swap(int *a, int *b).
*/
#include <iostream>

void swap(int *a, int *b);

int main(int argc, char const *argv[])
{
    int num1=0, num2=0;

    printf("\nElige el valor para los dos numeros:");
    scanf("%d\n%d",&num1, &num2);

    printf("\nElegiste estos dos valores: %d y %d\n", num1, num2);

    swap(&num1,&num2);
    printf("\nEl valor invertido es: %d y %d\n", num1, num2);

    return 0;
}

void swap(int *a, int *b)
{
    int aux =*a;

    *a = *b;
    *b = aux; 
}