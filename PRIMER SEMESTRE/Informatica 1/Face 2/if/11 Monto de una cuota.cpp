#include <iostream>

int main(int argc, char const *argv[])
{
    int dia=0;
    float monto=0, montofi=0;
    printf("ingresa el monto de la cuota y el diua de pago:\n");
    scanf("%f%d", &monto, &dia);

    if (dia<=10)
    {
        printf("El monto total a pagar es de %f\n", monto);
    }
    else
    {
        if (monto>5000)
        {
            montofi=monto+(monto*0.5);
        }
        else
        {
            montofi=monto+(monto*0.10);
        }
        printf("El monto total a pagar es de %f\n", montofi);
        
    }
    

    return 0;
}
