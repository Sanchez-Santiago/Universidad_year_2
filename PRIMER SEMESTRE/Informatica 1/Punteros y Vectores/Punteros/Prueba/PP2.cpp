#include <iostream>
#include <stdio.h>

void cambiar(char *p);

int main(int argc, char const *argv[])
{
    char letra=' ';
    printf("\nIngrese una letra para pasarla de mayuscula  a minuscula --><-\n");
    scanf(" %c", &letra);
    printf("\nEl caraccter eleguido es: %c\n", letra);

    cambiar(&letra);

    printf("\nEl caraccter cambiado es: %c\n", letra);

    return 0;
}

void cambiar(char *p)
{
    if (*p>='a' && *p<='z')
    {
        *p=*p-32;
    }
    else
    {
        if (*p>='A' && *p<='Z' )
        {
            *p=*p+32;
        }
        
    }
}
