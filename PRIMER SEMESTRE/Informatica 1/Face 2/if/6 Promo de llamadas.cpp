#include <iostream>
int main(int argc, char const *argv[])
{
    int local=0, distancia=0;
    float abonar=0;

    printf("Ingresa cuntos minutos llamste lo a locales y larga distancia:\n");
    scanf("%d%d", &local, &distancia);

    if (local>=1000 && distancia>=1000)
    {
        abonar=((local*0.05)+(distancia*0.10)-(((local*0.05)+(distancia*0.10))*0.10));
        printf("Eres beneficiario de del descuento de %10 \n tienes que abonar %f\n", abonar);
    }
    else
    {
        abonar=(local*0.05)+(distancia*0.10);
        printf("tienes que abonar %f \n", abonar);
    }
    

    return 0;
}
