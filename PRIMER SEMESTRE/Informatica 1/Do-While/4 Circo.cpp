#include <iostream>

int main(int argc, char const *argv[])
{
    int edad=0, sum=0;

    do
    {
        printf("Ingresa las edades de los mienbrros. parar=0\n");
        scanf("%d", &edad);

        if (edad>=5 && edad<=15)
        {
            sum=sum+20;
        }
        if (edad>15)
        {
            sum=sum+40;
        }
        
        
    } while (edad!=0);

    printf("La suma a pagar es de: %d\n", sum);

    return 0;
}
