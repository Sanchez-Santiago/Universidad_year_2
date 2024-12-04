/*Realizar un programa que permita ingresar tres números enteros por el 
usuario y llamar a una funcion que devuelva la suma de los dos mayores. 
Utilizar paso por valor y dos funciones: una para obtener el mayor y otra 
para calcular la suma de los dos mayores.*/

#include <stdio.h>

//Prototipados de funciones
int obtenerMayor(int, int, int);

//Funcion principal
int main() {
	int num1=0, num2=0, num3=0, suma=0;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	printf("Ingrese el tercer numero: ");
	scanf("%d", &num3);
	
	suma = sumarDosMayores(num1, num2, num3);
	
	printf("La suma de los dos mayores es: %d", suma);
	
	return 0;
}

//Desarrollo de funciones

// Funcion para obtener el mayor de tres numeros
int obtenerMayor(int num1, int num2, int num3) {
	int mayor = num1;
	
	if (num2 > mayor) {
		mayor = num2;
	}
	
	if (num3 > mayor) {
		mayor = num3;
	}
	
	return mayor;
}

// Funcion para calcular la suma de los dos mayores
int sumarDosMayores(int num1, int num2, int num3) {
	int mayor = obtenerMayor(num1, num2, num3);
	int segundoMayor=0;
	
	if (num1 == mayor) {
		segundoMayor = obtenerMayor(num2, num3, num1);
	} else if (num2 == mayor) {
		segundoMayor = obtenerMayor(num1, num3, num2);
	} else {
		segundoMayor = obtenerMayor(num1, num2, num3);
	}
	
	return mayor + segundoMayor;
}
