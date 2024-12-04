/*Escribir un programa que declare una variable de cada tipo (int, float, double, char, bool), un puntero de 
cada tipo de la variable creada, inicialice la variable e inicialice el puntero para que apunte a las variables 
creadas. Luego que imprima por pantalla para cada tipo lo siguiente: 
La dirección de memoria de la variable.
El valor que almacena la variable.
El valor del puntero.
El valor al que apunta el puntero.*/

#include <iostream>


int main(int argc, char const *argv[])
{
    int entero=150;
    float flotan=12.40939;
    double doble=3.49394830;
    bool boolVar= true;
    char text='a';

    //declaramos los punteros 

    int *enteroPunt= &entero;
    float *floatPunt= &flotan;
    double *doblePunt= &doble;
    bool *boolPunt= &boolVar;
    char *terxPunt= &text;

    //Mostramos en pantalla 
    printf("\nVariables de entra: \n");
    printf("\nValor entero %d\n", entero);
    printf("\nDireccion del valor %p\n", &entero);
    printf("\nValor entero del puntero a donde apunata %p\n", enteroPunt);
    printf("\nDireccion del puntero del entero %d\n", *enteroPunt);

    printf("\n\nVariables de Flotante: \n\n");
    printf("\nValor Flotante %f\n", flotan);
    printf("\nDireccion del valor %p\n", &flotan);
    printf("\nValor entero del puntero a donde apunata %p\n", floatPunt);
    printf("\nDireccion del puntero del flotante %f\n", *floatPunt);

    printf("\n\nVariables de double: \n\n");
    printf("\nValor double %lf\n", doble);
    printf("\nDireccion del valor %p\n", &doble);
    printf("\nValor entero del puntero a donde apunata %p\n", doblePunt);
    printf("\nDireccion del puntero deldouble %lf\n", *doblePunt);

    printf("\n\nVariables de Char: \n\n");
    printf("\nValor char %c\n", text);
    printf("\nDireccion del valor %p\n", &text);
    printf("\nValor entero del puntero a donde apunata %p\n", terxPunt);
    printf("\nDireccion del puntero del char %c\n", *terxPunt);

    printf("\n\nVariables de Bool: \n\n");
    printf("\nValor Bool %d\n", boolVar);
    printf("\nDireccion del valor %p\n", &boolVar);
    printf("\nValor entero del puntero a donde apunata %p\n", boolPunt);
    printf("\nDireccion del puntero del bool %d\n", *boolPunt);

    return 0;
}




