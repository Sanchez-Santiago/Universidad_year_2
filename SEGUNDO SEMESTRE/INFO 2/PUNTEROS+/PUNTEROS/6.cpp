/*
Desarrolle un programa que declare e inicialice un vector de 5 valores (4.5,8,2.3,1.1,3). 
Luego, se pide que calcule y muestre la sumatoria y el promedio. Utilice punteros para realizar el ejercicio.
*/
#include <iostream>

int main(int argc, char const *argv[])
{
    int vector[5]={4,2,4,7,1}, i=0, suma=0, prom=0;

    for (size_t i = 0; i < 5; i++)
    {
        suma=suma+vector[i];

    }
    prom=suma/5;
    printf("\nLa suma de todos los numeros es: %d\n", suma);
    printf("\nEl promedi de los numeros es: %d\n\n", prom);
    
    
    return 0;
}
