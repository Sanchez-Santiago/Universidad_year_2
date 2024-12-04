#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    char op=' ';
    char continuar=' ';
    int ope=0;
    float num1=0, num2=0, resu=0;

    do
    {
        printf("\n\nElige una operacion: \ne=elevado \nr=Raiz cuadrada \ny=Raiz cubica \nc=cen \nt=tag \ns=sen\n");
        scanf(" %c", &op);
        switch (op)
        {
        case 'e':
            printf("Ingrese la base y el exponente:\n");
            scanf("%f%f", &num1, &num2);
            resu=pow(num1, num2);
            break;

        case 'r':
            printf("Ingrese el numero a operar:\n");
            scanf("%f", &num1);
            resu=sqrt(num1);
            break;

        case 'y':
            printf("Ingrese el numero a operar:\n");
            scanf("%f", &num1);
            resu=cbrt(num1);
            break;
        
        case 'c':
            printf("Ingrese el numero a operar:\n");
            scanf("%f", &num1);
            resu=cos(num1);
            break;
        
        case 's':
            printf("Ingrese el numero a operar:\n");
            scanf("%f", &num1);
            resu=sin(num1);
            break;

        case 't':
            printf("Ingrese el numero a operar:\n");
            scanf("%f", &num1);
            resu=tan(num1);
            break;


        default:
            break;
        }

        printf("\nEl resultado es: %f\nDesea realizar otra operacion? s=Si, n=No:\n\n", resu);
        scanf(" %c", &continuar);



    } while (continuar !='n');
    
    

    return 0;
}
