#include <iostream>
#include <stdlib.h>
#include "Primo.h"

#define TOPE 1000

int es_primo (int num);

int main(int argc, char const *argv[])
{
    for (int i = 0; i < TOPE; i++)
    {
        if (es_primo(i)==VERDADERO && es_primo(i+2)==VERDADERO)
        {
            printf("\nSe detecto un par primo: %d y %d\n", i,i+2);
        }
        
    }
    
    return 0;
}


