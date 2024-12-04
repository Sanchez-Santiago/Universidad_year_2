#include <iostream>

int main(int argc, char const *argv[])
{
    float impor=-1, importotal=0, descuento=0;
    char op='  ';

    while (op!='n')
    {
        while (impor!=0)
        {
            printf("Escribe el importe de cada articulo\n");
            scanf("%f", &impor);

            if (impor!=0)
            {
                importotal=importotal+impor;
            }
        }
        

        if (importotal<=50)
        {
            printf("Debe abonar $%f", importotal);
        }
        else
        {
            if (importotal<=120)
            {
                descuento=importotal-(importotal*0.15);
                printf("Tienen un descuento del %15 \nTu importe total a pagar es de %f\n", importotal);
            }

            else 
            {
                descuento=importotal-(importotal*0.20);
                printf("Tienen un descuento del %20 \nTu importe total a pagar es de %f\n", descuento);
            }
            
        }
        importotal=importotal+impor;

        impor=-1;
        importotal=0; 

        printf("Desea ver mas clientes: s = si, n= no\n");
        scanf(" %c", &op);

        

    }

    printf("\nLa recaudacion del negocio es $%0.f\n",importotal);
    
    

    return 0;
}
