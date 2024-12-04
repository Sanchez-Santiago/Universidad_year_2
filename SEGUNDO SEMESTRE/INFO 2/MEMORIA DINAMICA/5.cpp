/*
Cree un programa que permita reservar memoria para n caracteres (char). Luego
cargar los n caracteres e imprimirlos por pantalla. El usuario desea agregar mas
caracteres, por lo que ingresa la n cantidad de caracteres a agregar. Luego cargar
los n caracteres, imprimirlos y finalmente liberar la memoria.


Modificar el código para crear una función mostrar los valores.
*/

#include <iostream>
#include <stdlib.h>

void muestra(char *);

int main(int argc, char const *argv[])
{
    int n=0, i=0;

    printf("\n\nIngrsa la cantidad de datos que quieres guardar: ");
    scanf("%d", &n);
    printf("\n");

    char *valor=(char*)malloc(n*sizeof(char));

    if (valor==NULL)
    {
        printf("\nErro no se cargo valor\n");
        return 1;
    }
    

    for ( i = 0; i < n; i++)
    {
        printf("\ningresa el valor %d: ",i+1);
        scanf(" %c", valor+i);
        printf("\n");
    }
    
    muestra(valor);

    printf("\n");

    int m=0;
    // Pedir al usuario la cantidad de caracteres adicionales
    printf("Ingrese la cantidad de caracteres adicionales: ");
    scanf("%d", &m);

    // Reasignar memoria para n + m caracteres utilizando realloc
    valor = (char *)realloc(valor, (n+m)*sizeof(char));

    if (valor==NULL) 
    {
        printf("Error: No se pudo reservar memoria adicional.\n");
        return 1;
    }

    // Pedir al usuario que ingrese los caracteres adicionales
    for ( i = 0; i < m; i++)
    {
        printf("\nIngrese %d caracteres adicionales: ", m);
        scanf("%s", valor+n+i);  
        // Utilizamos la aritmética de punteros para avanzar n caracteres en la cadena
    }
    
    
    muestra(valor);

    // Liberar la memoria reservada
    free(valor);

    return 0;
}

void muestra(int *vector)
{
    printf("\nCaracteres ingresados (incluyendo los nuevos): ");
    printf(" %s\n\n", *vector);
}