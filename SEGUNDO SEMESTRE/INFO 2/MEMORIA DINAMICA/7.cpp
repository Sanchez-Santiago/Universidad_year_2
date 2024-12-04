/*Crear un programa que pregunte al usuario cuantos caracteres desea introducir,
reserve espacio para dicho número de caracteres, le permita al usuario introducirlos
desde teclado y luego mostrar por pantalla los valores. Luego, el programa pregunta
cuántos caracteres desea agregar a la lista de elementos ya introducida, agrega
espacio de memoria y solicita el ingreso de los nuevos valores. Por último, mostrar la
lista resultante. Utilizar funciones.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int i=0, can=0;
    char *v=NULL, *ve;
    printf("\nIngrese la cantidad de numero que deseas tener: ");
    scanf("%d", &can);
    printf("\n");

    v=(char*)malloc(can*sizeof(char));

    if (v==NULL)
    {
        printf("\nError no se guardo la memoria");
        exit(1);
    }
    
    for ( i = 0; i < can; i++)
    {
        printf("\nIngrese el caracter %d: ", i+1);
        scanf(" %c", &v[i]);
        printf("\n");
    }

    printf("\n%s\n", v);

    printf("\n");
    for ( i = 0; i < can; i++)
    {
        printf("%c",v[i]);
    }
    printf("\n");

    int aux=0;

    printf("\nCuantos caracteres desea acregar?: ");
    scanf("%d", &aux);

    v=(char*)realloc(v,aux*sizeof(char));
    if (v==NULL)
    {
        printf("\nError no se guardo la memoria\n\n");
        exit(1);
    }

    for ( i = 0; i < aux; i++)
    {
        printf("\nIngrese el caracter %d: ", i+1);
        scanf(" %c", &v[i+can]);
        printf("\n");
    }



    printf("\n%s\n", v);

    printf("\n");
    for ( i = 0; i < can+aux; i++)
    {
        printf("%c",v[i]);
    }
    printf("\n");
    
    free(v);

    return 0;
}
