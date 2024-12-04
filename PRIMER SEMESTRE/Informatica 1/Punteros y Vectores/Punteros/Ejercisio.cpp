#include <iostream>

//prototipos de funciones
void pedirDatos(); 
void funpot(int x,int y);

int num1=0, num2=0;

int main(int argc, char const *argv[])
{
    pedirDatos();
    funpot(num1, num2);

    return 0;
}

void pedirDatos()
{
    printf("\nIngrese el numero que desea elevar y luego el exponente\n");
    scanf("%d%d", &num1, &num2);
}

void funpot (int x,int y)
{
    long resultado=1;
    for (int i = 1; i<=y; i++)
    {
        resultado=resultado*x;
    }
    
    printf("\nEl resultado de la de %d^%d es : %d\n", num1, num2, resultado);
}