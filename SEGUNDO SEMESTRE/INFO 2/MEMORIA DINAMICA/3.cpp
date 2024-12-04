/*
Cree un programa que permita reservar memoria para n caracteres (char). Luego
cargar los n caracteres e imprimirlos por pantalla.
*/

#include <iostream>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n=0, i=0;
    char *valor=(char*)malloc(n*sizeof(char));

    printf("\n\nIngrsa la cantidad de datos que quieres guardar: ");
    scanf("%d", &n);
    printf("\n");

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
    
     printf("\nLos valores ingresados son: ");
     for ( i = 0; i < n; i++)
    {
       
        printf("%c", *(valor+i));
        
    }
    printf("\n");

    return 0;
}
