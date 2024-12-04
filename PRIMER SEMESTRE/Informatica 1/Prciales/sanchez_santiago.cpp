#include <iostream>

int main(int argc, char const *argv[])
{
    //Decrlaramos las variables.
    int ingresados=0, no_entraron=0, cantidad_total=0, altura=0, promedio=0, alto=0, bajo=0, sum_de_pesos=0;
    char menu=' ', select=' ';

    //iniciamos el do-while.
    do
    {
        printf("\nIngresa la altura del jugador, 0=finalizar el pedido de datos: \n");
        scanf("%d", &altura);
        sum_de_pesos=sum_de_pesos+altura;
        
        //declaramos que la altura maxima y minima.
        if (cantidad_total==0 && altura!=0)
            {
                alto=altura;
                bajo=altura;
            }
            else
            {
                if (altura>alto)
                {
                  alto=altura;
                }
                if (altura<bajo && altura!=0)
                {
                    bajo=altura;
                }
            }
        
        //verificamos que cumpla con la altura requerida y cual es la altura maxima.
        if (altura>=160)
        {
            ingresados++;
        }

        else
        {
            no_entraron++;
        }
        cantidad_total++;
    } while (altura!=0);
    promedio=sum_de_pesos/cantidad_total;
    
    //Aca armamos el menu.
    do
    {
        //mostramos las opciones del menu
        printf("Que desea ver?:\na-Cantidad de jugadores ingresados.\nb-Altura promedio de los jugadores.\nc-Altura del jugador mas alto.\nd-Altura del jugador mas bajo.\ne-Jugadores no admitidos.\n");
        scanf(" %c", &select);
        switch (select)
        {
        
        case 'a':
            printf("La cantidad de jugadores que ingresaron es de: %d\n", ingresados);
            break;
        case 'b':
            printf("La altura promedio de los jugadores es de: %d\n", promedio);
            break;    
        case 'c':
            printf("La altura del jugador mas alto es de: %d\n", alto);
            break;
        case 'd':
            printf("La altura del jugador mas bajo es de: %d\n", bajo);
            break;    
        case 'e':
            printf("La cantidad de jugadores que no ingresaron es de: %d\n", (no_entraron-1));
            break;

        default:
            break;
        }

        //Preguntamos si quiere ver algo mas.
        printf("\nDesea ver otra opcion, Si=s, NO=n: ");
        scanf(" %c", &menu);

    } while (menu=='s');
    


    return 0;
}
