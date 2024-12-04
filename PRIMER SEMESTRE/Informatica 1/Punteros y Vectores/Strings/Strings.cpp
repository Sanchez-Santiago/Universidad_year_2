#include <iostream>
#include <stdio.h>
#include <string.h>

#define LEN 20

void main (void)
{
    char texto[LEN]="Hola";

    for (size_t i = 0; i < LEN; i++)
    {
        printf("\ntexto[%d]=%c (%hhd)",i,texto[i],texto[i]);
    }

    printf("\nIngrese una palabra: ");
    scanf("%s", texto);

}