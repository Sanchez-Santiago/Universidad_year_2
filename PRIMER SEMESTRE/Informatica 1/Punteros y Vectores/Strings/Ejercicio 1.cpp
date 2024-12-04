#include <iostream>
#include <stdio.h>
#include <string.h>

#define M 20
#define N 10

int main (void)
{
    char texto[N][M], buscar[M];
    int i;

    for ( i = 0; i < N; i++)
    {
        printf("\nIngresa dos Nomebre Para ordenarlos alfabeticamente: \n");
        scanf("%s",texto[i]);   
    }
    
    do
    {
        printf("\n\nIngrese el nombre que desea buscar:  ");
        scanf("%s", buscar);

        for ( i = 0; i < N; i++)
        {
            if (strcmp(buscar,texto[i])==0)
            {
                printf("\n\nEl nombre %s se encuentra en la lista y seencuentra en la posicion %d\n", buscar, i+1);
                break;
            }
        }
        if (i==N)
        {
            printf("\n\nEl nombre %s no esta en la lista =/ \n\n", buscar);
        }

    } while (strlen(buscar)!=0);
    


    
    return 0;
}
