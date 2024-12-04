#include <iostream>

int main(int argc, char const *argv[])
{
    int contador=0, n;
    printf("Escribe un numero al azar \n");
    scanf("%d", &n);
    while (n!=1)
    {
        if (n==10)
        {
            contador++;
        }
    }
    printf("Hay %d diez", contador);
    
    
    return 0;
}
