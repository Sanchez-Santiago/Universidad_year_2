/*
Escribir una función que reciba dos números enteros por valor y los sume, y otra función que
reciba dos punteros a enteros y los sume utilizando aritmética de punteros. Luego, desde el programa principal,
solicitar al usuario que ingrese dos números enteros, llamar a ambas funciones para sumarlos e
imprimir el resultado obtenido en cada caso.
*/

#include <iostream>

int sumadePunt(int *pun1, int *pun2);
int sumadeValo(int num1, int num2);


int main(int argc, char const *argv[])
{
    int num1=0, num2=0, resu1=0, resu2=0;
    printf("Ingrese dos numeros:\n");
	scanf("%d\n%d", &num1, &num2);
	

    resu1=sumadePunt(&num1, &num2);
    resu2= sumadeValo(num1, num2);

    printf("\nEl resultado de la suma por punteros es: %d\n", resu1);
    printf("\nEl resultado de la suma por variables es: %d\n", resu2);

    return 0;
}

int sumadePunt(int *pun1, int *pun2)
{
    return *pun1+*pun2;
}
int sumadeValo(int num1, int num2)
{
    return num1+num2;
}