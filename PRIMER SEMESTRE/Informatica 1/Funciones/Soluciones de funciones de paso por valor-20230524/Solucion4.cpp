/*Dise�ar y codificar un programa que muestre el valor mayor y menor entre tres 
numeros. Nota: Realice este ejercicio utilizando paso por valor,  y una funcion 
debe devolver un valor y la otra no devuelve valor.*/ 

#include <stdio.h>

//Prototipado de las funciones
int mayor(int, int, int);
void menor(int, int, int);
	
//Funcion principal
int main() {
	int num1=0, num2=0, num3=0;
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	printf("Ingrese el tercer numero: ");
	scanf("%d", &num3);
	
	printf("El mayor de los tres numeros es: %d\n", mayor(num1, num2, num3));
	menor(num1, num2, num3);
	
	return 0;
}

//Desarrollo de las funciones
// Funcion que devuelve el mayor de tres numeros
int mayor(int a, int b, int c) {
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
}

// Funcion que no devuelve valor y muestra el menor de tres numeros
void menor(int a, int b, int c) {
	int min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	printf("El menor de los tres numeros es: %d\n", min);
}
