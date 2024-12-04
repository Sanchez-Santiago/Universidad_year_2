/*
Declarar una variable de cada tipo (int, float, double, char, bool), un puntero de cada tipo de variable 
creada y asignarles las direcciones de memoria de cada variable creada. Luego, modificar el valor de cada 
variable utilizando el puntero y mostrar por pantalla el nuevo valor de cada una de las variables.
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    int entero=150;
    float flotan=12.40939;
    double doble=3.49394830;
    bool boolVar= true;
    char text='a';

    //declaramos los punteros 

    int *enteroPunt;
    float *floatPunt;
    double *doblePunt;
    bool *boolPunt;
    char *terxPunt;

    enteroPunt= &entero;
    floatPunt= &flotan;
    doblePunt= &doble;
    boolPunt= &boolVar;
    terxPunt= &text;

    printf("El valor modificado por puntero es: %d\n", entero);
    printf("El valor modificado por puntero es: %f\n", flotan);
    printf("El valor modificado por puntero es: %lf\n", doble);
    printf("El valor modificado por puntero es: %d\n", boolVar);
    printf("El valor modificado por puntero es: %c\n", text);

    *enteroPunt= 30;
    *floatPunt= 44.88;
    *boolPunt= false;
    *terxPunt= 'c';

    printf("El valor modificado por puntero es: %d\n", *enteroPunt);
    printf("El valor modificado por puntero es: %f\n", *floatPunt);
    printf("El valor modificado por puntero es: %lf\n", *doblePunt);
    printf("El valor modificado por puntero es: %d\n", *boolPunt);
    printf("El valor modificado por puntero es: %c\n", *terxPunt);
    return 0;
}
