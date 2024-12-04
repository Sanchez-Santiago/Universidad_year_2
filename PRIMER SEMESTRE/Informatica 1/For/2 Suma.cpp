#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cantidad=0, num=0, sum=0, promedio=0;

    for (cantidad=0; cantidad<5; cantidad++)
    {
        printf("\nIngresa un numero: ");
        scanf("%d", &num);
        sum=sum+num;
    }
    promedio=sum/5;
    printf("\nEl resultado de la suma es de:\n\nSuma= %d\nPromedio= %d\n", sum, promedio);
    

    return 0;
}
