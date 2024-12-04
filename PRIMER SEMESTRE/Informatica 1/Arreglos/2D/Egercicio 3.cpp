/*
Programe un sistema de facturación, donde emita las facturas de un negocio. 

Para ello primero deberá cargar los siguientes datos por cada artículo 
(código, precio unitario y cantidad) en un arreglo (máximo 5 filas)

Una vez, cargado todos los artículos en la factura , el programa calculará 
cada uno de los subtotales y el total del monto a abonar por el cliente. 
Luego, el sistema solicita que se ingrese la forma de pago (efectivo, débito o tarjeta). 
Si es efectivo y este no es pago exacto, el programa deberá calcular el vuelto, y en 
el caso de la tarjeta de crédito calcular y sumar el recargo del 5%. Finalmente mostrar la factura.    

Nota. Recordar que los arreglos se definen con un solo tipo de dato, con lo cual en este caso el arreglo será del tipo float.
*/
#include <iostream>
#include <stdio.h>
#include <string.h>

#define LES 5
#define MAX 4


int main(int argc, char const *argv[])
{
    float vec[LES][MAX]={0}, total=0, efectivo=0, debito=0, resu=0;
    char op=' ';
    int i=0, j=0;

    for ( i = 0; i < LES; i++)
    {
        printf("\nIngresa el codigo del producto: ");
        scanf("%f", &vec[i][0]);
        printf("\nIngresa el precio del producto: ");
        scanf("%f", &vec[i][1]);
        printf("\nIngresa la cantidad del producto: ");
        scanf("%f", &vec[i][2]);

        vec[i][3]=vec[i][1]*vec[i][2];
		total=total+vec[i][3];
    }
    printf("\n----------------------------------------------");
	printf("\nFactura");
	printf("\n----------------------------------------------");
	printf("\nCod\tP.U.\tCant.\tSubtotal\n");

    for ( i = 0; i < LES; i++)
    {
        for ( j = 0; j < MAX; j++)
        {
            printf("%0.2f\t",vec[i][j]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------------");
	printf("\nTotal: \t\t\t$ %0.2f",total);
	printf("\n----------------------------------------------");

    printf("\nDe que forma desea pargar con: \na.efectivo \nb.debito o \nc.credito\n");
    scanf(" %c", &op);

    switch (op)
    {
    case 'a':
    case 'A':
        printf("\nIngrese el pago en efectivo: ");
        scanf("%f", &efectivo);
        resu=total-efectivo;
        if (resu==0)
        {
            printf("\nExelente el pago a sido correcto\n");
        }
        else
        {
            if (resu<0)
            {
                printf("\nEl total a pagar era %0.2f\n", total);
                printf("Le sobraron: %0.2f\n", resu*(-1));
            }
            else
            {
                printf("\nEl total a pagar era %0.2f\n", total);
                printf("Le faltan: %0.2f\n", resu);
            } 
        }
        
        break;

    case 'b':
    case 'B':
        printf("\nUd. debe abonar $%0.2f.\n",total);
        break;
    
    case 'c':
    case 'C':
        printf("\nTiene un recargo del 5%%\n. ");
		printf("\nUd. debe abonar $%0.2f.\n",total*1.05);
        break;

    default:
        break;
    }
    

    return 0;
}
