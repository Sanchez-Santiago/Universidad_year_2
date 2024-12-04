/*Escribir una funcion que reciba dos numeros enteros por valor y los sume, y 
otra funcion que reciba dos punteros a enteros y los sume utilizando aritmetica 
de punteros. Luego, desde el programa principal, solicitar al usuario que 
ingrese dos numeros enteros, llamar a ambas funciones para sumarlos e imprimir 
el resultado obtenido en cada caso.*/


#include <stdio.h>

//Prototipado de las funciones
int sumar_por_valor(int, int);
int sumar_por_puntero(int *, int *);

//Funcion principal
int main() {
	int num1=0, num2=0;
	printf("Ingrese dos numeros:\n");
	scanf("%d\n%d", &num1, &num2);
	
	int resultado1 = sumar_por_valor(num1, num2);
	printf("Resultado sumando por valor: %d\n", resultado1);
	
	int resultado2 = sumar_por_puntero(&num1, &num2);
	printf("Resultado sumando por puntero: %d\n", resultado2);
	
	return 0;
}

//Desarrollo de las funciones
int sumar_por_valor(int a, int b) {
	return a + b;
}

int sumar_por_puntero(int *a, int *b) {
	return *a + *b;
}
