/*Realizar un programa que permita ingresar dos dos numeros y llame a una funcion
que determine si son iguales o no. La funcion debe devolver un valor booleano.*/

#include <stdio.h>

//Prototipado
bool is_equial(int, int);

//Funcion principal
int main() {
	int num1=0, num2=0;
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	if (is_equial(num1, num2)) {
		printf("Los numeros ingresados son iguales.\n");
	} else {
		printf("Los numeros ingresados no son iguales.\n");
	}
	return 0;
}

//Desarrollo de las funciones
bool is_equial(int num1, int num2) {
	if (num1 == num2) {
		return true;
	} else {
		return false;
	}
}
