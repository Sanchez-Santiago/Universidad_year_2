/*Cree un programa que permita reservar memoria para n valores enteros. Luego
cargar los n valores, imprimirlos y liberar la memoria.*/

#include <iostream>
#include <stdlib.h>


int main() 
{
    int n;
    printf("\n\nIngrese la cantidad de valores enteros que desea reservar: ");
    scanf("%d", &n);
    printf("\n\n");

    // Reservar memoria para n valores enteros
    int *valores = (int *)malloc(n * sizeof(int));

    if (valores == NULL) 
    {
        printf("\nError al reservar memoria.\n");
        return 1;
    }

    printf("Ingrese %d valores enteros:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &valores[i]);
    }

    printf("Valores ingresados:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", valores[i]);
    }
    printf("\n");

    // Liberar la memoria reservada
    free(valores);

    return 0;
}