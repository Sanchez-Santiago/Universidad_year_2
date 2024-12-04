/*
Escribir un programa que solicite dos números y luego una de las operaciones del menú de opciones: 
a. sumar, b. restar, c. multiplicar, d. dividir dos números, e. elevar a una potencia, f. calcular la raíz cuadrada de un número.
Luego mostrar el resultado y preguntar si desea realizar otra operación o terminar el programa.
Utilizar punteros para el cálculo de las operaciones. Librería: #include <math.h>
*/
#include <iostream>
#include <math.h>


int main(int argc, char const *argv[])
{
    int num[2]={0};
    float  resu[6]={0};
    char op=' ';

    printf("\nIngresa los numeros con los cuales deseas operar:  \n");
    printf("\nNum 1: ");
    scanf("%d", &num[0]);
    printf("\n");
    printf("\nNum 2: ");
    scanf("%d", &num[1]);
    printf("\n");

    do
    {
        printf("\nElija las operacion que desea hacer \nA.Sumar.\nB.Restar.\nC.Multiplicar.\nD.Dividir.\nE.Elevar.\nF.Raiz cuadrada de un numero.\nS.Salir\n");
        scanf(" %c", &op);
        printf("\n");
        switch (op)
        {
        case 'a':
        case 'A':
            resu[0]=num[0]+num[1];
            printf("\nEl resultado de la suma de %d y %d es: %f\n", num[0], num[1], resu[0]);
            break;
        case 'b':
        case 'B':
            resu[1]=num[0]-num[1];
            printf("\nEl resultado de la resta de %d y %d es: %f\n", num[0], num[1], resu[1]);
            break;
        case 'c':
        case 'C':
            resu[2]=num[0]*num[1];
            printf("\nEl resultado de la multiplicacion de %d y %d es: %f\n", num[0], num[1], resu[2]);
            break;
        case 'd':
        case 'D':
            resu[3]=num[0]/num[1];
            printf("\nEl resultado de la suma de %d y %d es: %f\n", num[0], num[1], resu[3]);
            break;
        case 'e':
        case 'E':
            resu[4]=pow(num[0], num[1]);
            printf("\nEl resultado de %d elevado %d es: %f\n", num[0], num[1], resu[4]);
            break;
        case 'f':
        case 'F':
            resu[5]=sqrt(num[0]);
            resu[6]=sqrt(num[1]);
            printf("\nLa raiz cuadradade %d es: %f\nLa raiz cuadrada de %d es : %f\n", num[0], num[1], resu[5], resu[6]);
            break;
        
        default:
            break;
        }

    } while (op!='s' && op!='S');


    return 0;
}
