#include <iostream>
#include <stdio.h>
#include "func.h"

int main(int argc, char const *argv[])
{
    int variable=10;
    modificar(&variable, 20);

    printf("La variable es: %d", variable);
    

    return 0;
}
