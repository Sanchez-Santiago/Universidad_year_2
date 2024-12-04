/*
Se desea realiza un programa en el que se ingresan mediciones 
del pH de un tanque. Cuando el promedio de las últimas 5 mediciones 
supera un determinado valor de umbral (indicado con un define) el 
programa indica que hay una situación de alarma y finaliza. 
También se puede salir del programa en cualquier momento ingresando el valor 0 
como medición. No se saben ni se debe suponer una cantidad determinada 
de mediciones.
*/
#include <iostream>
#include <stdio.h>
#include <string.h>

#define LES 5
#define UMBRAL ((float) 10)

void cargarMedidas(float me[LES], int lim);
float promeDio(float me[LES], int lim);
void umbral(float prome, float lim);


int main(int argc, char const *argv[])
{
    float medicion[LES]={0}, promedio=0, sum=0;

    while (1)
    { 
        cargarMedidas(medicion, LES);
        promedio=promeDio(medicion, LES);
        umbral(promedio, UMBRAL);
    }

    return 0;
}

void cargarMedidas(float me[LES], int lim)
{
    int i=0;
    static int veces=0 , cantidad_veces=0, can=0;

    if (veces==0)
    {
        for ( i = 0; i < lim; i++)
        {
            printf("\nIngresa el valor de la medida %d: ", can+1);
            scanf("%f", &me[i]);
            if(me[i]==0)
            {
                printf("\nSe ingresó un valor de medición igual a 0. Saliendo del programa...");
                exit(0);
            }
            can++;
        }
        veces=1;
    }
    else
    {
        printf("\nIngresa el valor de la medida %d: ", can+1);
        scanf("%f", &me[cantidad_veces]);
        cantidad_veces++;
        can++;
    }
    
    
}

float promeDio(float me[LES], int lim)
{
    int i=0;
    float suma=0;
    for ( i = 0; i < lim; i++)
    {
        suma=suma+me[i];
    }
    return suma/lim;
}

void umbral(float prome, float lim)
{
    if (prome>lim)
    {
        printf("\nAletrta el umbral de hp %0.2f, se supero con %0.2f\n", lim, prome);
        exit(0);
    }
    else
    {
        printf("\nEl promedio de las mediciones no supera el umbral de %0.2f, con %0.2f\n", lim, prome);
    }
    
    
}