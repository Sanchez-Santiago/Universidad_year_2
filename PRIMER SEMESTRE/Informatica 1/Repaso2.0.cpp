/*Una empresa dedicada al rubro de las telecomunicaciones brinda servicios de internet a pymes locales. 
El costo unitario es de 1 GB = $1000. Se solicita crear un programa 
que permita llevar a cabo la gestión de los consumos y facturación. Para ello se tiene la siguiente 
tabla: (a modo de ejemplo)


Realice las siguientes funciones:

Crear una función que permita la carga de los datos (código de cliente, cantidad de GB consumidos, día de pago del mes). 
Cargar 10 clientes. Los datos del código del cliente se colocan de manera consecutiva.

Nota: para agilizar el proceso de carga pueden completarse con datos aleatorios para la cantidad de GB y día de pago del mes.

Crear una función que permita calcular si tiene o no recargo según el día de pago del mes. 
Si el día de pago es menor o igual a 10, el recargo es cero, sino es $100 por día de retraso. 

Crear una función que calcule el costo total de lo consumido (costo = cant de GB consumidos * precio unitario). 


Crear un menú de opciones con las siguientes funciones:

Mostrar la factura de un cliente. Esta función debe solicitar un código de cliente y luego mostrar su factura.

Mostrar la recaudación de la empresa. 

Mostrar el cliente que más ha consumido. 

Mostrar el consumo y las facturas de los clientes. (Mostrar todo el arreglo).



Para la resolución de este ejercicio usar los ejercicios utilizar arreglos y funciones con paso por valor y 
paso por referencia, con retorno de valor y sin retorno. No está permitido el uso de variables globales.*/


#include <iostream>
#include <string.h>
#include <ctime>

#define columna_client 10
#define fila_client 10

void cargar(int cliente[fila_client][columna_client]);
void mostrar(int cliente[fila_client][columna_client]);
void recargo(int cliente[fila_client][columna_client]);

int main(int argc, char const *argv[])
{
    int cliente[fila_client][columna_client]={0};

    cargar(cliente);
    recargo(cliente);
    mostrar(cliente);
    
    return 0;
}

void cargar(int cliente[fila_client][columna_client])
{
    int i=0, j=0;
    
    for ( i = 0; i < fila_client; i++)
    {
            srand(time(NULL));
            cliente[i][1]=rand()%30;
            cliente[i][2]=rand()%31+1;
            printf("\nIngrese el codigo del cliente: ");
            scanf(" %d", &cliente[i][0]);
        
    }
    
}

void mostrar(int cliente[fila_client][columna_client])
{
    int ii=0;
    printf("\n\tcodigo\tConsumo de GB\tDia de pago\tDeuda\n");
    for ( ii = 0; ii < fila_client; ii++)
    {
        printf("\t%d\t%d\t\t%d\t\t%d",cliente[ii][0],cliente[ii][1], cliente[ii][2], cliente[ii][3]);
        printf("\n");
    }

}

void recargo(int cliente[fila_client][columna_client])
{
    int i=0;

    for ( i = 0; i < fila_client; i++)
    {
        if (cliente[i][1]==0)
        {
            printf("\nNo consumiste GB este mes no tenes deuda\n");
        }
        else
        {
            if (cliente[i][2]<=10)
            {
                cliente[i][3]=cliente[i][1]*1000;
                printf("\nNo tienes atraso total a pagar %d\n", cliente[i][3]);
            }
            else
            {
                cliente[i][3]=(cliente[i][1]*1000)+(100*(cliente[i][2]-10));
                printf("\nTines un atraso de %d tu recargo es de %d, total a pagar es de %d\n", cliente[i][2]-10, 100*(cliente[i][2]-10), cliente[i][3]);
            }
            printf("\n");
        }
    }
}