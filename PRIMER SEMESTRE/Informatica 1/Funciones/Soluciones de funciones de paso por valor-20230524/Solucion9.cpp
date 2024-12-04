/*Escribir una funcion que calcule el factorial de un número entero y lo 
devuelva como resultado. El numero debe ser ingresado por el usuario.*/


#include <stdio.h>

//Prototipado
int factorial(int n);

//Funcion principal
int main() {
	int num=0, fact=0;
	printf("Ingrese un numero entero: ");
	scanf("%d", &num);
	
	fact = factorial(num);
	printf("El factorial de %d es %d\n", num, fact);
	
	return 0;
}

//Desarrollo de la funcion
int factorial(int n) {
	int fact = 1, i=0;
	for (i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}
