#include <iostream>

int main(int argc, char const *argv[])
{
    float lado1=0, lado2=0, lado3=0;
    printf("ingresa 3 numeros\n");
    scanf("%f%f%f", &lado1, &lado2, &lado3);

    if (lado1==lado2 || lado1==lado3 )
    {
        if (lado3==lado1 && lado2==lado3)
        {
            printf("Es un triangulo equilátero\n");
        }
        else
        {
            printf("Es un triangulo isósceles");
        }
        
    }
    else
    {
        if (lado3==lado2)
        {
            printf("Es un triangulo isósceles");
        }
        else
        {
            printf("Es un triangulo escaleno\n");
        }
        
        
    }
    

    return 0;
}
