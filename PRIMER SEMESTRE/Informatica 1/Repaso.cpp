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
#include <stdio.h>
#include <ctime>

#define LES 10

int cargar(float *gb,int *codigo, int *dia);
void muestra(float *gb,int *codigo, int *dia, int can);
void recargo(float *gb,int *codigo, int *dia, int can, int *deuda);
void factur(int *codigo, int can, int *deuda);
void consumirNuevaLinea(void);


int main(int argc, char const *argv[])
{
    float gb[LES];
    int codigo[LES]={0}, dia[LES]={0}, can=0, deuda[LES]={0};
    char menu=' ';

    can=cargar(gb, codigo, dia);

    do
    {
        printf("\n\tMENU DE OPCIONES\t\n");
        printf("\nA.Facturas\nB.Recaudacion\nC.Mayor consumo\nD.Factura de todos los clientes\nS.Salir\n");
        scanf(" %c", &menu);

        switch (menu)
        {
        case 'a':
        case 'A':
            factur(codigo, can, deuda);
            break;
        
        default:
            break;
        }
    } while (menu!='s' || menu!='S');
    
    
    muestra(gb, codigo, dia, can);
    recargo(gb, codigo, dia, can, deuda);



    return 0;
}

int cargar(float *gb,int *codigo, int *dia)
{
    int can=0, i=0, n=0;
    for ( i = 0; i < 4; i++)
    {
        printf("\nIngrese el codigo de %d: ", n+1);
        scanf("%d\n", &codigo[i]);
        consumirNuevaLinea();
        srand(time(NULL));
        gb[i]=rand()%30;
        dia[i]=rand()%31+1;
        can++;
        n++;
    }
    return can;
    
}

void muestra(float *gb,int *codigo, int *dia, int can)
{
    int i=0;
    printf("\n\tCodigo\t\tConsumo\t\tdia\n");
    for ( i = 0; i < 5; i++)
    {
        printf("\t%d\t", codigo[i]);
        printf("\t%f\t", gb[i]);
        printf("%d", dia[i]);
        printf("\n");
    }
    printf("\n");
}

void recargo(float *gb,int *codigo, int *dia, int can, int *deuda)
{
    int i=0;

    for ( i = 0; i < can; i++)
    {
        if (gb[i]==0)
        {
            printf("\nNo consumiste GB este mes no tenes deuda\n");
        }
        else
        {
            if (dia[i]<=10)
            {
                deuda[i]=gb[i]*1000;
                printf("\nNo tienes atraso total a pagar %d\n", deuda[i]);
            }
            else
            {
                deuda[i]=(gb[i]*1000)+(100*(dia[i]-10));
                printf("\nTines un atraso de %d tu recargo es de %d, total a pagar es de %d\n", dia[i]-10, 100*(dia[i]-10), deuda[i]);
            }
            printf("\n");
        }
    }
    
}

void factur(int *codigo, int can, int *deuda)
{
    int i=0, aux=0, bu=0;
    printf("\nIngresa el codigo: ");
    scanf("%d\n", &aux);
    consumirNuevaLinea();
    do
    {
         for (i = 0; i < can; i++)
        {
            if (aux==codigo[i])
            {
                printf("\nLa factura es de %d\n", deuda[i]);
                bu++;
            }
            
        }
        printf("\nNo se encontro el codigo prueba con otro\n");
        scanf("%d", &aux);
        consumirNuevaLinea();
    } while (bu==0);
    
   
    
}

void consumirNuevaLinea(void)
{
    int c;
    do
    {
        c = getchar();
    } while (c != EOF && c != '\n');
}