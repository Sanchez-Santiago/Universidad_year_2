/*Escribir una funcion que calcule el promedio de tres numeros enteros 
y lo devuelva.*/


#include <stdio.h>

//Prototipado
float calcularPromedio(int, int, int);

//Funcion principal
int main() {
	int num1=0, num2=0, num3=0;
	printf("Ingrese tres numeros enteros:\n");
	scanf("%d\n%d\n%d", &num1, &num2, &num3);
	float promedio = calcularPromedio(num1, num2, num3);
	printf("El promedio de %d, %d y %d es: %.2f\n", num1, num2, num3, promedio);
	return 0;
}

//Desarrollo de la funcion
float calcularPromedio(int a, int b, int c) {
	float promedio = (a + b + c) / 3.0;
	return promedio;
}
