#include <iostream>

void intercambiar(int&, int&);

int main(int argc, char const *argv[])
{
    int num1=30, num2=54;

    printf("\ningrese dos numeros que se van a intercambiar:\n");
    scanf("%d%d", &num1, &num2);
    printf("\nLos valores ingresados son: %d y %d\n", num1, num2);

    intercambiar(num1,num2);

    printf("\nDespues del intercambio quedo asi : %d y %d\n\n", num1, num2);

    return 0;
}

void intercambiar(int& num1, int& num2)
{
    int aux;

    aux=num1;
    num1=num2;
    num2=aux;
}