#include <iostream>

void calculo(int, int, int&, int&);

int main(int argc, char const *argv[])
{
    int num1=0, num2=0, suma=0, producto=0;

    printf("\nIngrese dos numer acontinuacion:");
    scanf("%d%d", &num1, &num2);

    calculo(num1, num2, suma, producto);

    printf("\nEl Valor de la suma es de: %d\nEl valor del producto es de: %d\n\n", suma, producto);

    return 0;
}

void calculo(int num1, int num2, int& suma, int& producto)
{
    suma= num1+num2;
    producto= num1*num2;

}