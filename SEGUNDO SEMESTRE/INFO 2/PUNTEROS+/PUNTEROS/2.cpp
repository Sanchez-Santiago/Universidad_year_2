/*
Cargar las 3 notas de un alumno como valores enteros. 
Luego mostrar el promedio teniendo en cuenta si tiene parte decimal.
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    int notas[3], i=0, mas=0;
    float resu=0;

    for (i = 0; i <3; i++)
    {
        printf("\nCaarga la nota %d: ", i+1);
        scanf("%d", &notas[i]);
        printf("\n");
        mas=mas+notas[i];
    }

    resu=mas/3;
    printf("\nEl promedio es %f\n\n", resu);
 


    return 0;
}
