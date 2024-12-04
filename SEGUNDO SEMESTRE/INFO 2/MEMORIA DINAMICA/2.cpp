/*Cree un programa que permita reservar memoria para n valores decimales (float).
Luego cargar los n valores, imprimirlos y liberar la memoria.*/

#include <iostream>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n=0, i=0;
    float *valor=(float*)malloc(n*sizeof(float));

    printf("\n\nIngrsa la cantidad de datos que quieres guardar: ");
    scanf("%d", &n);
    printf("\n");

    //valor=;

    for ( i = 0; i < n; i++)
    {
        printf("\ningresa el valor %d: ",i+1);
        scanf("%f", valor+i);
        printf("\n");
    }
    
     printf("\nLos valores ingresados son: ");
     for ( i = 0; i < n; i++)
    {
       
        printf("%f, ", *(valor+i));
        
    }
    printf("\n");
    



    return 0;
}
