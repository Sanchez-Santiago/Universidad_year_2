/*Realizar un programa que permita ingresar un numero entero y llamar a una 
funcion que devuelva su representacion en binario.*/


#include <stdio.h>

int binary(int);

int main() {
	int num;
	printf("Ingrese un numero entero: ");
	scanf("%d", &num);
	printf("La representacion binaria de %d es %d", num, binary(num));
	return 0;
}

int binary(int n) {
	int rem=0, result = 0, base = 1;
	while (n > 0) {
		rem = n % 2;
		result = result + (rem * base);
		n = n / 2;
		base = base * 10;
	}
	return result;
}
