#include <iostream>

int main(int argc, char const *argv[])
{
    int i=0, sueldo=0, gastos=0, total=0, ano=0;

    for (int i = 1; i<=12; i++)
    {
        printf("\nIngresa cuanto ha sido su sueldo y tus gastos del mes %d\n", i);
        scanf("%d%d", &sueldo, &gastos);

        total=sueldo-gastos;
        printf("\nEste mes has gastado %d\n", total);
        ano=ano+(sueldo-gastos);
    }
    printf("\nEl ahorro de este ano es de $%0.f'\n",ano);


    return 0;
}
