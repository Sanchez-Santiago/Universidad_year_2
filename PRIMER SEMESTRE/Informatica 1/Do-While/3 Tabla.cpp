#include <iostream>

int main(int argc, char const *argv[])
{
    int num1=0, num2, resu=0, resultado=0, contador=0;
    char con=' ';

    do
    {
        printf("Ingresa los dos números aleatorios entre el 1 y 10 que quieres multiplicar:\n");
        scanf("%d%d", &num1, &num2);
        resu=num1*num2;
        printf("Iengrese el resultado que cres queda la multipicacion: \n%d * %d =?\n");
        scanf("%d", &resultado);

        if (resu==resultado)
        {
            contador++;
            printf("El resultado es correcto =)\n");
        }
        else
        {
            printf("Es incorrecto =(\nEl resultado es %d * %d = %d",num1, num2, resu);
        }

        printf("\nDesea Volver a hacer otra multiplicacion? s=si n=no\n");
        scanf(" %c", &con);

        
    } while (con=='s');

    printf("Le acertaste %d felicitaciones\n", contador);
    
    return 0;
}
