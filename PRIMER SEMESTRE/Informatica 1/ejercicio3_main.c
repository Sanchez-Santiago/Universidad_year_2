#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CANT_MED 5
#define UMBRAL ((float) 10)

void cargar_mediciones(float * mediciones, const int n);
float calcular_promedio(float * mediciones, const int n);
void testear_umbral(float prom, float umbral);

int main (void)
{
    float mediciones[CANT_MED];
    float prom;

    while(1)
    {
        cargar_mediciones(mediciones,CANT_MED);
        prom=calcular_promedio(mediciones,CANT_MED);
        testear_umbral(prom,UMBRAL);
    }

}

void cargar_mediciones(float * mediciones, const int n)
{
    int i;
    static int primera_vez=1,med=0,cant_med=1; //static hace que la variable local conserve su valor entre llamados

    if(primera_vez==1)
    {
    for(i=0;i<n;i++)
        {
            printf("\nIngrese el valor de la medición (%d): ",cant_med++);
            scanf("%f",&mediciones[i]);
            if(mediciones[i]==0)
            {
                printf("\nSe ingresó un valor de medición igual a 0. Saliendo del programa...");
                exit(0);
            }
        }
        primera_vez=0;
    }
    else
    {
        //Si estoy acá es porque la función no es la primera vez que se llama
        printf("\nIngrese el valor de la medición (%d): ",cant_med++);
        scanf("%f",&mediciones[med]);
        
        med++;
        if(med==n) med=0;
    }
}

float calcular_promedio(float * mediciones, const int n)
{
    int i;
    float prom=0;

   for(i=0;i<n;i++)
    {
        prom+=mediciones[i];
    }

    return prom/n;
}

void testear_umbral(float prom, float umbral)
{
    if(prom>=umbral)
    {
        printf("El promedio %.2f es mayor que el umbral %.2f",prom,umbral);
        exit(0);
    }
    else
    {
        printf("El promedio %.2f es menor o igual que el umbral %.2f",prom,umbral);
    }
}