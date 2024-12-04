#include <stdio.h>

int main (void)
{
    int opcion;
    int i;
    float op1,op2,base;

    //Imprimir menu y tomar opcion

    printf("\nIngrese que operación desea realizar");
    printf("\n1. Suma");
    printf("\n2. Resta");
    printf("\n3. Multiplicación");
    printf("\n4. División");
    printf("\n5. Potencia");
    printf("\n0. Salir\n\n");

    scanf("%d",&opcion);

    while(opcion!=0){
    
        switch(opcion){
            case 1: printf("\n\nSe realizará una suma,");
                    printf("\nIngrese el primer operando: ");
                    scanf("%f",&op1);
                    printf("\nIngrese el segundo operando: ");
                    scanf("%f",&op2);
                    printf("\n\nEl resultado es %.2f + %.2f = %.2f",op1,op2,op1+op2);
                    break;
            case 2: printf("\n\nSe realizará una resta,");
                    printf("\nIngrese el primer operando: ");
                    scanf("%f",&op1);
                    printf("\nIngrese el segundo operando: ");
                    scanf("%f",&op2);
                    printf("\n\nEl resultado es %.2f - %.2f = %.2f",op1,op2,op1-op2);
                    break;
            case 3: printf("\n\nSe realizará una multiplicación,");
                    printf("\nIngrese el primer operando: ");
                    scanf("%f",&op1);
                    printf("\nIngrese el segundo operando: ");
                    scanf("%f",&op2);
                    printf("\n\nEl resultado es %.2f * %.2f = %.2f",op1,op2,op1*op2);
                    break;
            case 4: printf("\n\nSe realizará una división,");
                    printf("\nIngrese el primer operando: ");
                    scanf("%f",&op1);
                    printf("\nIngrese el segundo operando: ");
                    scanf("%f",&op2);
                    if(op2!=0){
                        printf("\n\nEl resultado es %.2f / %.2f = %.2f",op1,op2,op1/op2);
                    }
                    else{
                        printf("\n\nNo se puede dividir por cero");
                    }
                    break;
            case 5:
                    printf("\n\nSe realizará una potencia (op1^op2),");
                    printf("\nIngrese el primer operando: ");
                    scanf("%f",&op1);
                    printf("\nIngrese el segundo operando: ");
                    scanf("%f",&op2);

                    if(op2<0 || (int) op2-op2!=0){
                        printf("\n\nEl programa solo acepta exponentes positivos y enteros");
                        break;
                    }
                    base=1;
                    for(i=0;i<op2;i++){
                        base*=op1;
                    }
                    printf("\n\nEl resultado es %.2f ^ %.2f = %.2f",op1,op2,base);
                    break;
            default:
                    printf("\n\nLa opción ingresada no es correcta\n\n");
                    break;
        }

            //Imprimir de nuevo el menú

            printf("\n\nIngrese que operación desea realizar");
            printf("\n1. Suma");
            printf("\n2. Resta");
            printf("\n3. Multiplicación");
            printf("\n4. División");
            printf("\n5. Potencia");
            printf("\n0. Salir\n\n");

            scanf("%d",&opcion);
    }

    printf("\n\nSaliendo del programa...");

    return 0;
}