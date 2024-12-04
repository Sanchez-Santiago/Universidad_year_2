/*
Realizar un programa que permita ingresar tres números enteros por el usuario y llamar a una 
función que devuelva la suma de los dos mayores. Utilizar paso por valor y dos funciones: 
una para obtener el mayor y otra para calcular la suma de los dos mayores.
*/
#include <iostream>
#include <stdio.h>

int mayores(int a, int b, int c);
int suma(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int a=0, b=0, c=0, resu=0;
    printf("\ningresa el primer valor: ");
    scanf("%d", &a);
    printf("\ningresa el segundo valor: ");
    scanf("%d", &b);
    printf("\ningresa el tercer valor: ");
    scanf("%d", &c);

    resu=suma(a, b, c);
    printf("El resultado es: %d", resu);

    return 0;
}

int mayores(int a, int b, int c)
{
    int max1=0, max2=0;
    if (a>b && a>c)
    {
        max1=a;
    }
    else
    {
        if (b>c)
        {
            max1=b;
        }
        else
        {
            max1=c;
        }   
    }
    return max1;
}

int suma(int a, int b, int c)
{
    int max2=0, max1=mayores(a, b, c);

    if (a!=max1 or b!=max1)
    {
        if (a>c or a>b)
        {
            max2=a;
        }
        else
        {
            if (b>a or b>c)
            {
                if (b>a or b<c)
                {
                    max2=b;
                }
                else
                {
                    max2=c;
                }
                
            }
            
        }
        
    }
    return max1 + max2;
}