#include <iostream>
int main(int argc, char const *argv[])
{
    int op=0;
    float num1=0, num2=0, res=0;
    printf("Escriba dos Numeros \n");
    scanf("%f%f", &num1, &num2 );
    printf("elije un numero: 1 = +, 2 = -, 3 = *, 4 = /. \n");
    scanf("%d", &op);
    switch (op)
    {
        case 1:
            res= num1 + num2;
            break;
        case 2:
            res= num1 - num2;
            break;
        case 3:
            res= num1 * num2;
            break;
        case 4:
            res= num1 / num2;
            break;
    }
    printf("\nResultado: %f \n", res);
    return 0;
}
