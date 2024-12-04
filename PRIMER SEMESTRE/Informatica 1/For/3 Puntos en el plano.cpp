#include <iostream>

int main(int argc, char const *argv[])
{
    int i=0, canti=0, x=0, y=0, cant1=0, cant2=0, cant3=0, cant4=0;
    printf("Ingresa la cantida de puntos\n");
    scanf("%d", &canti);
    for (i = 0; i < canti; i++)
    {
        printf("Ingrersa las cordenadas de X y Y: \n");
        scanf("%d%d", &x, &y);

        if (x>0 && y>0)
        {
            printf("Los puntos %d  y %d esta en el primer planao\n", x,y);
            cant1++;
        }
        else
        {
            if (x>0 && y<0)
            {
                printf("Los puntos %d  y %d esta en el segundo planao\n", x,y);
                cant2++;
            }
            else
            {
                if (x<0 && y<0)
                {
                    printf("Los puntos %d  y %d esta en el tercer planao\n", x,y);
                    cant3++;
                }
                else
                {
                    printf("Los puntos %d  y %d esta en el cuarto planao\n", x,y);
                    cant4++;
                }
                
                
            }
            
        }
        
    }
    printf("La cantidad de puntos en el plano: \n1: %d \n2: %d \n3: %d \n4: %d", cant1, cant2, cant3, cant4);


    return 0;
}
