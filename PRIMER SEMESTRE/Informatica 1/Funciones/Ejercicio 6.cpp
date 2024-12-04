/*
Escribir una función que calcule el promedio de tres números enteros y lo devuelva.
*/

#include <iostream>
#include <stdio.h>

float suma(float a, float b, float c);
void promedio(float promedio);

int main(int argc, char const *argv[])
{
    float num1=0, num2=0, num3=0, p=0;

    printf("\nIngrese los tres valores para calcular elpromedio: \n");
    scanf("%f%f%f", &num1, &num2, &num3);
    p=suma(num1, num2, num3);
    promedio(p);

    return 0;
}

float suma(float a, float b, float c)
{
    int suma=0;
    suma=a+b+c;
    
    return suma;
}

void promedio(float promedio)
{
    promedio=promedio/3;
    printf("\nEl promedio de los tres numeros es: %f\n\n", promedio);
}