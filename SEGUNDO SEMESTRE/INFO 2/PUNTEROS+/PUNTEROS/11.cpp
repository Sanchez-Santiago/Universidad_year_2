/*
Se desea cargar en un vector los saldos de proveedores. 
La cantidad de saldos es ingresada por el usuario (máximo 10). 
La carga finaliza con un saldo menor o igual a cero. Además, desarrolle las siguientes funciones para mostrar:
a. Cantidad de saldos cargados.
b. Promedio de saldos.
c. Cantidad de saldos menores al promedio.
d. Cantidad de saldos mayores al promedio.
e. Calcular cuánto fue lo recaudado en el mes.
Cada ítem es una función. Para recorrer el vector utilice punteros.
*/
#include <iostream>

#define LES 10

void mostrar(int []);
void cantidad(int *);
float promedio(int *, int *);
void menor(int *, float *, int *);
void mayor(int *, float *, int *);
void recaudo(int * );

int main(int argc, char const *argv[])
{ 
    int vector[LES]={0}, *ptr_vector=vector, suma=0, *ptr_suma=&suma, ii=0, *ptr_can=&ii;
    float prome=0, *ptr_prome=&prome;

    char op=' ';

    printf("\nIngresa el saldo %d : ", ii+1);
    scanf("%d",&*(ptr_vector));
    printf("\n");
    do
    {
        ii++;
        printf("\nIngresa el saldo %d : ", ii+1);
        scanf("%d",&*(ptr_vector+ii));
        printf("\n");
        *ptr_suma=*ptr_suma+*(ptr_vector+ii);
    } while (*(ptr_vector+ii)>0 && ii<9);

    printf("\n%d\n", *ptr_suma);
    mostrar(ptr_vector);
    *ptr_prome=promedio(ptr_suma, ptr_can);

    do
    {
        printf("\n\nQue desea hcer? \nA.Cantidad de saldos cargados.\nB.Promedio de saldos.\nC.Cantidad de saldos menores al promedio.\nD.Cantidad de saldos mayores al promedio.\nE.Calcular cuánto fue lo recaudado en el mes.\nS.salir.\n");
        scanf(" %c", &op);

        switch (op)
        {
        case 'a':
        case 'A':
            cantidad(ptr_can);
            break;
        case 'b':
        case 'B':
            printf("\nEl promedio es: %f\n", *ptr_prome);
            break;
        case 'c':
        case 'C':
            menor(ptr_vector, ptr_prome, ptr_can);
            break;
        case 'd':
        case 'D':
            mayor(ptr_vector, ptr_prome, ptr_can);
            break;
        case 'e':
        case 'E':
            recaudo(ptr_suma);
            break;
       
        default:
            break;
        }
    } while (op!='s' && op!='S');
    
    

    
    return 0;
}

void mostrar(int v[])
{
    int jj=0;
    printf("\n");
    for ( jj = 0; jj < LES; jj++)
    {
        printf("%d\t", *(v+jj));
    }
    printf("\n");
}

void cantidad(int *ptr_can)
{
    printf("\nLa cantidad de saldo ingresado es %d", *ptr_can);
}

float promedio(int *suma, int *can)
{
    float prom=0, *ptr_prom=&prom;

    *ptr_prom=*suma / *can;
    return prom;
    
}

void menor(int *v, float *p, int *can)
{
    int ii=0;
    printf("\nSaldos menores al promedio:");
    for ( ii = 0; ii < *can; ii++)
    {
        if (*(v+ii)<*p)
        {
            printf("%d ", *(v+ii));
        }
    }
    printf("\n");
}

void mayor(int *v, float *p, int *can)
{
    int ii=0;
    printf("\nSaldos mayor al promedio:");
    for ( ii = 0; ii < *can; ii++)
    {
        if (*(v+ii)>*p)
        {
            printf("%d ", *(v+ii));
        }
    }
    printf("\n");
}

void recaudo(int *s )
{
    printf("\nLo recaudado en el mes fue %d\n", *s);
}