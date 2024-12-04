/*Desarrolle un programa para una inmobiliaria en donde permita gestionar el pago de las expensas de un edificio.  
los edificios y barrios cerrados.  Algunas consideraciones: 

Las expensas se pagan antes del día 10 de cada mes, sino tiene un recargo de $100 por día de retraso dentro del mismo 
mes que corresponde la expensa, en caso contrario será del $200 por día de los días excedentes. 

Las expensas de cada vivienda se calculan de acuerdo a la cantidad de m2. (1 m2 = $100). 

N° Vivienda   .  Cant. m2    Monto Expensa ($)*  .  Día Pago del mes  .  Recargo*  .  Monto total ($)*
1             .     70          7000             .       8            .    0       .    7000
2             .     150         15000            .      11            .   100      .   15100


*Son columnas calculadas.

Crear un menú de opciones que se repita hasta que el usuario indique “salir” con las siguientes funciones: 

Generar expensas. En esta función se debe cargar y calcular los datos del arreglo para 5 viviendas. 
La columna número de vivienda debe completarse con números consecutivos empezando por 1.
La columna cant. de m2 debe obtenerse mediante números aleatorios entre 30 y 500.
La columna día de pago del mes con números aleatorios entre el 0 y 60. El cero es que el residente aún no pagó. 
Por lo tanto, aún no se puede calcular el monto total a pagar.

La columna monto de expensa, recargo y monto total son columnas calculadas en base a los datos anteriores, 
para cada una de ellas crear una función distinta.
Mostrar la expensa de una vivienda en particular. Esta función debe solicitar el número de cliente y luego 
mostrar el detalle de su expensa. 
Mostrar la recaudación del mes de la inmobiliaria. 
Mostrar un listado de las viviendas que han pagado con retraso y que aún no han pagado.
Mostrar todas las expensas emitidas en el mes. */

#include <iostream>
#include <string.h>
#include <ctime>

void cargar(int [5][6]);
void mostrar(int [5][6]);

#define LES 5

int main(int argc, char const *argv[])
{
    int vector[5][6]={0};

    srand(time(NULL));
    cargar(vector);
    mostrar(vector);

    return 0;
}

void cargar(int v[5][6])
{
    int ii=0;

    

    for ( ii = 0; ii < LES; ii++)
    {
        v[ii][0]=ii+1;
        v[ii][1]=rand()%500+30;
        v[ii][2]=v[ii][1]*100;
        v[ii][3]=rand()%60;
        if (v[ii][3]<=10)
        {
            v[ii][4]=0;
        }
        else
        {
            if (v[ii][3]>10 && v[ii][3]<=30)
            {
                v[ii][4]=(v[ii][3]-10)*100;
            }
        }
        
        if (v[ii][3]>30)
        {
            v[ii][4]=(v[ii][3]-10)*200;
        }
        

    }
    
}