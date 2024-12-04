#include <iostream>

int main(int argc, char const *argv[])
{
    int dias;
    printf("Elije un numero entre el 1 y el 7 \n");
    scanf("%d", &dias);
    switch (dias)
    {
        case 1: printf("Domingo \n");
            break;
        case 2: printf("Lunes \n");
            break;
        case 3: printf("Martes \n");
            break;
        case 4: printf("Miercoles \n");
            break;
        case 5: printf("Jueves\n");
            break;
        case 6: printf("Viernes\n");
            break;
        case 7: printf("Sabado\n");
            break;
        case 8: printf("Error\n");
            break;
    }
    return 0;
}
