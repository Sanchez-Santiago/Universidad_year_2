/*
Escribe un programa en C que realice lo siguiente:

Carga tres vectores, cada uno con la información de hoy y los próximos 6 días.  Tomar la primera posición para 
el día de hoy. Cargar el arreglo con los datos: 

Vector de lluvias (%) = 0, 0, 0, 0, 18, 45, 48 
Vector de temperaturas máximas (en grados Celsius) =21, 25, 31, 21, 28, 18, 18
Vector de velocidades de viento máximas (en km/h) =14, 11, 6, 8, 11, 18, 16
Luego declara punteros para manejar los arreglos y crea las siguientes funciones:

promedioTemperaturas: Calcula y muestra el promedio de las temperaturas máximas en el período.
diaMaximaViento: Encuentra y devuelve el día con mayor viento. Luego muestra en el main.
diasRiesgoIncendio: Identifica y muestra los días en los que hay riesgo de incendio (temperaturas mayores a 20 grados, 
vientos mayores a 5 km/h y probabilidad de lluvias por debajo del 1%).*/

#include <iostream>



int main(int argc, char const *argv[])
{
    int lluvia[7]={0, 0, 0, 0, 18, 45, 48}, temperatura_max[7]={21, 25, 31, 21, 28, 18, 18}, veloci_vientoMax[7]={14, 11, 6, 8, 11, 18, 16};
    int i=0, suma=0;
    int *ptr_t=temperatura_max, *ptr_lluvia=lluvia, *prt_viento=veloci_vientoMax, *ptr_suma=&suma;
    float promedio=0, *ptr_prome=&promedio;
    

    for ( i = 0; i < 7; i++)
    {
        *ptr_suma=*ptr_suma+*(ptr_t+i);
    }

    *ptr_prome=*ptr_suma/7;

    printf("\n\nEl promedio de la temperatura es: %f\n\n", *ptr_prome);

    int ii=0, max=0;

    for ( ii = 0; ii < 7; ii++)
    {
        if (*(prt_viento+ii)>=max)
        {
            max=*(prt_viento+ii);
        }
    }
    printf("\n\nEl día con mayor viento es: %d\n\n", max);
    

    return 0;
}
