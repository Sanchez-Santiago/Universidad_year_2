/*
Desarrollar el ejercicio anterior con funciones. Crear una función que pase los valores
a mayúsculas y una función que pase los valores a minúsculas. Desarrollar un
programa que declare e inicialice un vector tipo char con el abecedario. Luego
mostrar en pantalla el abecedario en mayuscula y minuscula, utilizando punteros.
Nota: la función para pasar a mayúscula es toupper() y a minúsculas es tolower().
Ejemplo: cadena[i] = tolower(cadena[i]); En código ASCII A=65
*/
#include  <iostream>
#include <cctype> 
#include <string.h>


void mayuscula(char []);
void minuscula(char []);

int main(int argc, char const *argv[])
{
    int i=0, ii=0;
    char abc[26]={0}, aux='A';

    for ( i = 0; i < 26; i++)
    {
        abc[i]='A'+i;
    }

    mayuscula(abc);
    minuscula(abc);

    return 0;
}

void mayuscula(char abc[])
{
    int i=0;
    printf("\n");
    char *ptr = abc;
    printf("Abecedario en mayúscula: ");
    for ( i = 0; i < 26; i++)
    {
        char mayuscula = toupper(*ptr);
        printf("%c ", mayuscula);
        ++ptr;
    }
    printf("\n");
}

void minuscula(char abc[])
{
    int i=0;
    char *ptr = abc;
    printf("Abecedario en minuscula: ");
    for ( i = 0; i < 26; i++)
    {
        char minuscula = tolower(*ptr);
        printf("%c ", minuscula);
        ++ptr;
    }
    printf("\n\n");
}