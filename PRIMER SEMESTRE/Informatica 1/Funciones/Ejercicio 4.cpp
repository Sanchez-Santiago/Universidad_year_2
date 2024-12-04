/*
Diseñar y codificar un programa que muestre el valor mayor y menor entre tres números. 
Nota: Realice este ejercicio utilizando paso por valor,  y una función debe devolver un 
valor y la otra no devuelve valor.
*/

#include <iostream>
#include <stdio.h>

int mayor(int a, int b, int c);
void menor(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int num1=0, num2=0, num3=0;

    printf("\nIngrese tres valores para saber cual es el mayor y  el menor: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("\nEl valor mayor de los numeros (%d, %d, %d) es %d\n", num1, num2, num3, mayor(num1, num2, num3));
    menor(num1, num2, num3);

    return 0;
}

int mayor(int a, int b, int c)
{
    int max=a;
    if (max>b && max>c)
    {
       max=a;
    }
    else
    {
        if (b>c)
        {
            max=b;
        }
        else
        {
            if (c>b)
            {
                max=c;
            }
            
        }
        
    }
    
    return max;
}

void menor(int a, int b, int c)
{
    int min=a;
    if (b<min)
    {
       min=b;
    }
    else
    {
        if (a<c)
        {
            min=a;
        }
        else
        {
            if (c<b)
            {
                min=c;
            }
            
        }
        
    }
    
    printf("\nEl numero menor es %d\n\n", min);
}