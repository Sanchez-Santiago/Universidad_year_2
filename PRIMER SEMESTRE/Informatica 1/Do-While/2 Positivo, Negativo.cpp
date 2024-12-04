#include <iostream>

int main(int argc, char const *argv[])
{
    int num=0, conp=0, conn=0;
    do
    {
        printf("Ingrese un numero\n");
        scanf("%d", &num);

        if (num>0)
        {
            conp++;
        }
        if (num<0)
        {
            conn++;
        }
        
    } while (num!=0);

    printf("Hay %d numeros positivos y hay %d numeros negativos\n", conp, conn);
    


    return 0;
}
