#include <iostream>

int main(int argc, char const *argv[])
{
    int edad=0, prome=0, contador=0, sum=0;
    do
    {
        printf("Ingrese la Edad (0 termi)\n");
        scanf("%d", &edad);
        if (edad!=0)
        {
            contador++;
            sum=sum+edad;
            prome=sum/contador;
        }
        
    } while (edad!=0);
    printf("El promedio de las edades es %d\n", prome);
    
    return 0;
}
