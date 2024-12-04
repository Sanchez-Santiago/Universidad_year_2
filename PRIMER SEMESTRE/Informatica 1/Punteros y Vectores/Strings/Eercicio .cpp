#include <iostream>
#include <stdio.h>
#include <string.h>

#define LES 20

int main(int argc, char const *argv[])
{
    char texto1[LES], texto2[LES];

    printf("\nIngresa dos Nomebre Para ordenarlos alfabeticamente: \n");
    scanf("%s%s", texto1,texto2);//gets(texto1,texto2); para que tome algo compuesto 

    

    if (strcasecmp(texto1,texto2)==0)
    {
        printf("\n\nSon iguales\n\n");
    }
    else if (strcasecmp(texto1,texto2)<0)
    {
        printf("\n\nEl %s es mayor que %s alfabeticamente\n\n", texto1,texto2);

    }
    else
    {
        printf("\n\nEl %s es mayor que %s alfabeticamente\n\n", texto2,texto1);
    }
    
    
    return 0;
}
