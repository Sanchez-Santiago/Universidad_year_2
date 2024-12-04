#include "Primo.h"
#include <iostream>
#include <stdlib.h>

int es_primo (int num)
{
    int div, num_es_primo=VERDADERO;

    for (div=2; div<num; div++)
    {
        if (num%div==0)
        {
            num_es_primo=FALSO;
        }
        
    }
    return num_es_primo;
}