/*
Realizar un programa que simule una calculadora. El mismo debe contener un menú de opciones 
con las distintas operaciones que puede realizar. Las operaciones deben ser programadas 
utilizando funciones. (del tipo void).
a.Sumar dos números.
b.Restar dos números.
c.Multiplicar dos números.
d.Dividir dos números. 
*/

#include <iostream>
#include <stdio.h>

void suma(int a, int b, int r);
void resta(int a, int b, int r);
void multi(int a, int b, int r);
void divi(int a, int b, int r);


int main(int argc, char const *argv[])
{
    int num1=0, num2=0, resu=0;
    char op=' ';

    printf("\nIngrese el primer numero para la operación: ");
    scanf("%d", &num1);
    printf("\nIngrese el segundo numero para la operación: ");
    scanf("%d", &num2);
    printf("\nElija la operacionque desea realizar\na.Suma\nb.Resta\nc.Multiplicacion\nd.Divicion\n");
    scanf(" %c", &op);
    
    switch (op)
    {
    case 'a':
        suma(num1, num2, resu);
        break;

    case 'b':
        resta(num1, num2, resu);
        break;

    case 'c':
        multi(num1, num2, resu);
        break;

    case 'd':
        divi(num1, num2, resu);
        break;
    
    default:
        break;
    }


    return 0;
}


void suma(int a, int b, int r)
{
    r=a+b;
    printf("\nEl resultado de la suma de %d y %d es: %d\n\n", a, b, r);
}

void resta(int a, int b, int r)
{
    r=a-b;
    printf("\nEl resultado de la resta de %d y %d es: %d\n\n", a, b, r);
}

void multi(int a, int b, int r)
{
    r=a*b;
    printf("\nEl resultado de la multiplicacion de %d y %d es: %d\n\n", a, b, r);
}

void divi(int a, int b, int r)
{
    r=a/b;
    printf("\nEl resultado de la divicion de %d y %d es: %d\n\n", a, b, r);
}