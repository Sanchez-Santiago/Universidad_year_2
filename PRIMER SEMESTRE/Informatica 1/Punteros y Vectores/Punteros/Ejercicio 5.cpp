/*
Escribir un programa que simule una calculadora, en donde muestre un menú de opciones con las operaciones permitidas 
como a. Suma, b. Resta, c. Multiplicación y d. División. Luego el programa solicita que se ingrese dos 
números (tipo float) y llame a la función correspondiente para hacer el cálculo. Luego mostrar el resultado y 
preguntar si desea realizar otra operación o terminar el programa. Usar punteros para la resolución de este ejercicio. 
Nota: Diseñar funciones con paso por referencia con devolución del valor y funciones con paso por referencia sin devolución 
del valor.
*/

#include <iostream>

void Calculos(float *x, float *z);

int main(int argc, char const *argv[])
{
    float num1=0, num2;
    printf("\nIngrese dos numero para la operacion:");
    scanf("%f%f", &num1, &num2);
    Calculos(&num1, &num2);

    return 0;
}

void Calculos(float *x, float *z)
{
    char con=' ', elex=' ';
    float resultado=0;
    do
    {
        printf("\nElije la operacion deseada: \na=Suma\nb=Resta\nc=Multiplicasion\nd=Divicion\n");
        scanf(" %c", &elex);
        switch (elex)
        {
        case 'a':
            resultado= *x + *z;
            break;
        case 'b':
            resultado= *x - *z;
            break;
        
        case 'c':
            resultado= *x * *z;
           break;
        
        case 'd':
            resultado= *x / *z;
            break;

        default:
            break;
        }
        printf("\nEl resultadeo de la operacion entre %f y %f es:%f\n", *x,*z, resultado);
        printf("\nDesa hacer otra operacion? s=Si\n");
        scanf(" %c", &con);

    } while (con=='s');
    
}