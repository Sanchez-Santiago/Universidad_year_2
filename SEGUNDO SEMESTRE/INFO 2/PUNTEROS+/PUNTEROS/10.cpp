/*
Realice un programa que permita cargar 10 números enteros en un vector. Luego
utilizando punteros calcule el promedio de ellos. Finalmente mostrar todos los valores
y su promedio utilizando punteros.
*/

#include <iostream>

#define LES 10

int main(int argc, char const *argv[])
{
    int vector[LES]{0}, *v[LES], i=0, sum=0, promedio=0;

    
    for ( i = 0; i < LES; i++)
    {
        printf("\nIngresa el numero %d: ", i+1);
        scanf("%d", &vector[i]);
        v[i]=&vector[i];
    }

    for ( i = 0; i < LES; i++)
    {
        sum=sum+*v[i];
    }
    
    promedio=sum/LES;

    printf("\nLos numeros ingresados son: ");
    for ( i = 0; i < LES; i++)
    {
        printf(" %d,", *v[i]);
    }
    printf("\n");

    printf("\nEl promedio de los numeros es: %d\n\n", promedio);

    return 0;
}
