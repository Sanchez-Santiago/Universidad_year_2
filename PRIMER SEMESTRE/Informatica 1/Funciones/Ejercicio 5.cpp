/*
Escribir una función que muestre el abecedario en mayúscula y otra función que 
muestre el abecedario en minúscula. 
Nota: En el código ASCII las letras de la A-Z es de 65-90, y las a-z de 97-122.
*/

#include <iostream>
#include <stdio.h>

void  mayuscula(void);
void  minnuscula(void);

int main(int argc, char const *argv[])
{
    printf("\nEl abesedario en Mayuscula\n");
    mayuscula();

    printf("\nEl abesedario en Minuscula\n");
    minnuscula();

    return 0;
}

void  mayuscula(void)
{
    char letra='A';
    for (int i = 64; i <90 ; i++)
    {
        
        printf("\n %c\n", letra);
        letra++;
    }
    
}
void  minnuscula(void)
{
    char letra='a';
    for (int i = 96; i <122 ; i++)
    {
        printf("\n %c\n", letra);
        letra++;
    }
    
}